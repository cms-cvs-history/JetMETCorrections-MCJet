#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <cmath>
#include <TFile.h>
#include <TH1F.h>
#include <TF1.h>
#include <TGraphErrors.h>
#include <TMath.h>
#include <TKey.h>
#include <TList.h>
#include <TVirtualFitter.h>
#include <TMatrixD.h>
#include "Utilities.cc"
#include "JetMETAnalysis/JetUtilities/interface/CommandLine.h"
using namespace std;

int main(int argc, char**argv)
{
  CommandLine c1;
  c1.parse(argc,argv);

  string HistoFilename             = c1.getValue<string>("HistoFilename","Histo.root");
  string FitterFilename            = c1.getValue<string>("FitterFilename","Fitter.root");
  string L3ResponseTxtFilename     = c1.getValue<string>("L3ResponseTxtFilename","L3Response.txt");
  string L3CorrectionTxtFilename   = c1.getValue<string>("L3CorrectionTxtFilename","L3Correction.txt");
  string L3OutputROOTFilename      = c1.getValue<string>("L3OutputROOTFilename","L3Graphs.root");
  string L2CorrectionTxtFilename   = c1.getValue<string>("L2CorrectionTxtFilename","L2Correction.txt");
  string L2OutputROOTFilename      = c1.getValue<string>("L2OutputROOTFilename","L2Graphs.root");
  bool UseRatioForResponse         = c1.getValue<bool>("UseRatioForResponse",false);
  vector<double> pt_vec            = c1.getVector<double>("RefPtBoundaries","5,10,12,15,20,27,35,45,57,72,90,120,150,200,300,400,550,750,1000,1500,5000");
  vector<double> eta_vec           = c1.getVector<double>("EtaBoundaries", 
"-5.191,-4.889,-4.716,-4.538,-4.363,-4.191,-4.013,-3.839,-3.664,-3.489,-3.314,-3.139,-2.964,-2.853,-2.650,-2.500,-2.322,-2.172,-2.043,-1.930,-1.830,-1.740,-1.653,-1.566,-1.479,-1.392,-1.305,-1.218,-1.131,-1.044,-0.957,-0.879,-0.783,-0.696,-0.609,-0.522,-0.435,-0.348,-0.261,-0.174,-0.087,0.000,0.087,0.174,0.261,0.348,0.435,0.522,0.609,0.696,0.783,0.879,0.957,1.044,1.131,1.218,1.305,1.392,1.479,1.566,1.653,1.740,1.830,1.930,2.043,2.172,2.322,2.500,2.650,2.853,2.964,3.139,3.314,3.489,3.664,3.839,4.013,4.191,4.363,4.538,4.716,4.889,5.191");
  if (!c1.check()) return 0; 
  c1.print();
  /////////////////////////////////////////////////////////////////////////
 const int MAX_NREFPTBINS = 30; 
 int NRefPtBins = pt_vec.size()-1; 
 char name[100];
 int i,auxi_cor,auxi_resp;
 double Correction[MAX_NREFPTBINS],CorrectionError[MAX_NREFPTBINS],Response[MAX_NREFPTBINS],ResponseError[MAX_NREFPTBINS];
 double xCaloPt[MAX_NREFPTBINS],exCaloPt[MAX_NREFPTBINS],xRefPt[MAX_NREFPTBINS],exRefPt[MAX_NREFPTBINS];
 double MinCaloPt,MaxCaloPt,MinRefPt,MaxRefPt;
 double cor,e_cor,resp,e_resp; 
 TFile *inf;
 TFile *outf;
 TH1F *hCor,*hResp,*hRef,*hCalo;
 TF1 *CorFit;
 TF1 *RespFit;
 TGraphErrors *g_Cor;
 TGraphErrors *g_Resp;
 TVirtualFitter *fitter;
 TMatrixD *COV_Cor, *COV_Resp;
 ofstream L3CorrectionFile,L3ResponseFile;
 L3CorrectionFile.open(L3CorrectionTxtFilename.c_str());
 L3ResponseFile.open(L3ResponseTxtFilename.c_str());
 TKey *key;
 vector<string> HistoNamesList;
 inf = new TFile(FitterFilename.c_str(),"r");
 if (inf->IsZombie()) return(0); 
 TIter next(inf->GetListOfKeys());
 while ((key = (TKey*)next()))
   HistoNamesList.push_back(key->GetName());
 ///////////// CaloPt /////////////////////////////////////
 sprintf(name,"MeanCaloPt");
 if (!HistoExists(HistoNamesList,name)) return(0); 
 hCalo = (TH1F*)inf->Get(name);
 ///////////// RefPt /////////////////////////////////////
 sprintf(name,"MeanRefPt");
 if (!HistoExists(HistoNamesList,name)) return(0);
 hRef = (TH1F*)inf->Get(name);
 ///////////////////////// Correction //////////////////////////////////////////////
 sprintf(name,"Correction");
 if (!HistoExists(HistoNamesList,name)) return(0);
 hCor = (TH1F*)inf->Get(name);
 sprintf(name,"Response");
 if (!HistoExists(HistoNamesList,name)) return(0);
 hResp = (TH1F*)inf->Get(name);
 auxi_cor=0;
 auxi_resp=0;
 cout<<"RefPt bin"<<setw(12)<<"<CaloPt>"<<setw(12)<<"Correction"<<setw(12)<<"Error"<<setw(12)<<"<RefPt>"<<setw(12)<<"Response"<<setw(12)<<"Error"<<endl; 
 for(i=0;i<NRefPtBins;i++)
   { 
     cor = hCor->GetBinContent(i+1);
     e_cor = hCor->GetBinError(i+1);
     cout<<"["<<pt_vec[i]<<","<<pt_vec[i+1]<<"]"<<setw(12)<<hCalo->GetBinContent(i+1)<<setw(12)<<cor<<setw(12)<<e_cor;
     resp = hResp->GetBinContent(i+1);
     e_resp = hResp->GetBinError(i+1);
     cout<<setw(12)<<hRef->GetBinContent(i+1)<<setw(12)<<resp<<setw(12)<<e_resp<<endl;
     if (cor>0 && e_cor>0.000001 && e_cor<0.2)
       {    
         Correction[auxi_cor] = cor;
         CorrectionError[auxi_cor] = e_cor;
         xCaloPt[auxi_cor] = hCalo->GetBinContent(i+1);
         exCaloPt[auxi_cor] = hCalo->GetBinError(i+1);
         auxi_cor++;
       }
     if (resp>0 && e_resp>0.000001 && e_resp<0.2)
       {    
         Response[auxi_resp] = resp;
         ResponseError[auxi_resp] = e_resp;
         xRefPt[auxi_resp] = hRef->GetBinContent(i+1);
         exRefPt[auxi_resp] = hRef->GetBinError(i+1);
         auxi_resp++;
       }
   }
 g_Cor = new TGraphErrors(auxi_cor,xCaloPt,Correction,exCaloPt,CorrectionError);
 sprintf(name,"CorFit");
 CorFit = new TF1(name,"[0]+[1]/(pow(log10(x),[2])+[3])",xCaloPt[0],xCaloPt[auxi_cor-1]); 
 CorFit->SetParameter(0,1.);
 CorFit->SetParameter(1,7.);
 CorFit->SetParameter(2,4.);
 CorFit->SetParameter(3,4.);
 cout<<"Fitting correction in the range: "<<xCaloPt[0]<<" "<<xCaloPt[auxi_cor-1]<<endl;
 g_Cor->Fit(CorFit,"RQ");
 fitter = TVirtualFitter::GetFitter();
 COV_Cor = new TMatrixD(4,4,fitter->GetCovarianceMatrix());
 g_Resp = new TGraphErrors(auxi_resp,xRefPt,Response,exRefPt,ResponseError);
 sprintf(name,"RespFit");
 RespFit = new TF1(name,"[0]-[1]/(pow(log10(x),[2])+[3])+[4]/x",xRefPt[0],xRefPt[auxi_resp-1]); 
 RespFit->SetParameter(0,1.);
 RespFit->SetParameter(1,1.);
 RespFit->SetParameter(2,1.);
 RespFit->SetParameter(3,1.);
 RespFit->SetParameter(4,1.);
 cout<<"Fitting response in the range: "<<xRefPt[0]<<" "<<xRefPt[auxi_resp-1]<<endl;
 g_Resp->Fit(RespFit,"RQ");
 fitter = TVirtualFitter::GetFitter();
 COV_Resp = new TMatrixD(5,5,fitter->GetCovarianceMatrix());
 /////////////////////////////////////////////////////////
 MinCaloPt = 4.;
 MaxCaloPt = 5000.; 
 MinRefPt = 4.;
 MaxRefPt = 5000.; 
 CorFit->SetRange(MinCaloPt,MaxCaloPt);
 RespFit->SetRange(MinRefPt,MaxRefPt);
 //////////////////////////// Writing ///////////////////////////////////////////// 
 L3CorrectionFile.setf(ios::left);
 L3CorrectionFile <<setw(12)<<-5.191
                     <<setw(12)<<5.191
                     <<setw(12)<<(int)6 
                     <<setw(12)<<MinCaloPt
                     <<setw(12)<<MaxCaloPt
                     <<setw(12)<<CorFit->GetParameter(0)
                     <<setw(12)<<CorFit->GetParameter(1)
                     <<setw(12)<<CorFit->GetParameter(2)
                     <<setw(12)<<CorFit->GetParameter(3);
 L3CorrectionFile.close(); 

 L3ResponseFile.setf(ios::left);
 L3ResponseFile <<setw(12)<<RespFit->GetParameter(0)
                   <<setw(12)<<RespFit->GetParameter(1)
                   <<setw(12)<<RespFit->GetParameter(2)
                   <<setw(12)<<RespFit->GetParameter(3)
                   <<setw(12)<<RespFit->GetParameter(4);
 L3ResponseFile.close(); 

 outf = new TFile(L3OutputROOTFilename.c_str(),"RECREATE");      
 g_Cor->Write("Correction_vs_CaloPt");
 COV_Cor->Write("CovMatrix_Correction");    
 g_Resp->Write("Response_vs_RefPt");
 COV_Resp->Write("CovMatrix_Resp");
 outf->Close();
}
