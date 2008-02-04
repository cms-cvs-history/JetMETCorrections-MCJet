#include <iostream>
#include <fstream>
#include <string.h>
#include <cmath>
#include <iomanip>
#include <TFile.h>
#include <TH1F.h>
#include <TF1.h>
#include <TMath.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include "UserDefinedData.h"
#include "Functions.h"
#include "Functions.cc"
using namespace std;

int main()
{
 const int NPtBins = 25; 
 char name[100];
 int i,auxi;
 double Response[NGenPtBins],Correction[NPtBins],ResponseError[NGenPtBins];
 double xGenPt[NGenPtBins],exGenPt[NGenPtBins],gen_pt,calo_pt;
 double MinCaloPt,MaxCaloPt,MinGenPt,MaxGenPt;
 double xCaloPt[NPtBins] = {4,6,8,10,15,20,30,40,50,75,100,150,200,300,400,500,750,1000,1500,2000,2500,3000,3500,4000,5000};
 double xCaloPt_aux[NPtBins]; 
 TFile *inf;
 TFile *outf;
 TH1F *h;
 TF1 *RespFit;
 TF1 *CorFit;

 TGraphErrors *g_Resp;
 TGraph *g_Cor;

 ofstream L3ResponseFile;
 ofstream L3CorrectionFile;
 L3ResponseFile.open(L3ResponseFilename);
 L3CorrectionFile.open(L3CorrectionFilename);

 inf = new TFile(FitterOutputFilename,"r");
 ///////////// GenPt /////////////////////////////////////
 sprintf(name,"MeanGenPt_Barrel");
 h = (TH1F*)inf->Get(name);
 for(i=0;i<NGenPtBins;i++)
   xGenPt[i] = h->GetBinContent(i+1);
 ///////////////////////// Gen Response //////////////////////////////////////////////
 sprintf(name,"BarrelResponse");
 h = (TH1F*)inf->Get(name);
 for(i=0;i<NGenPtBins;i++)
   {
     Response[i] = h->GetBinContent(i+1);
     ResponseError[i] = h->GetBinError(i+1);
     exGenPt[i] = 0.;
   }
 g_Resp = new TGraphErrors(NGenPtBins,xGenPt,Response,exGenPt,ResponseError);
 sprintf(name,"RespFit");
 RespFit = new TF1(name,"[0]-[1]/(pow(log10(x),[2])+[3])+[4]/x",xGenPt[0],xGenPt[NGenPtBins-1]); 
 RespFit->SetParameter(0,1.);
 RespFit->SetParameter(1,1.);
 RespFit->SetParameter(2,2.);
 RespFit->SetParameter(3,1.);
 RespFit->SetParameter(4,1.);
 RespFit->SetParameter(5,1.);
 g_Resp->Fit(RespFit,"RQ");
 /////////////////////////////////////////////////////////
 
 ///////////////////////////////////////////////////////// 
 MinGenPt = xGenPt[0];
 MaxGenPt = xGenPt[NGenPtBins-1];
 MinCaloPt = xCaloPt[0];
 MaxCaloPt = xCaloPt[NPtBins-1]; 
 auxi = 0;
 ///////Calculating the L3 Correction vs CaloPt from Response vs GenPt ///////////////
 for(i=0;i<NPtBins;i++)
   { 
     calo_pt = xCaloPt[i]; 
     Invert(RespFit,MinGenPt,MaxGenPt,calo_pt,gen_pt);
     if (gen_pt>0)//If gen_pt=0 (pathological case) the point is not taken into account.
       {
         Correction[auxi] = gen_pt/calo_pt;
         xCaloPt_aux[auxi] = calo_pt;
         auxi++;
       }
   }
 g_Cor = new TGraph(auxi,xCaloPt_aux,Correction);
 sprintf(name,"CorFit");
 CorFit = new TF1(name,"[0]+[1]/(pow(log10(x),[2])+[3])",MinCaloPt,MaxCaloPt);
 CorFit->SetParameter(0,1.);
 CorFit->SetParameter(1,1.);
 CorFit->SetParameter(2,1.);
 CorFit->SetParameter(3,1.);
 CorFit->SetParameter(4,1.);
 g_Cor->Fit(CorFit,"RQ");
 //////////////////////////// Writing ///////////////////////////////////////////// 
 L3ResponseFile.setf(ios::left);
 L3ResponseFile <<setw(12)<<RespFit->GetParameter(0)
                   <<setw(12)<<RespFit->GetParameter(1)
                   <<setw(12)<<RespFit->GetParameter(2)
                   <<setw(12)<<RespFit->GetParameter(3)
                   <<setw(12)<<RespFit->GetParameter(4);
 L3ResponseFile.close();

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

 outf = new TFile(L3OutputROOTFilename,"RECREATE");  
 sprintf(name,"Response_vs_GenPt");    
 g_Resp->Write(name);
 sprintf(name,"Correction_vs_CaloPt");    
 g_Cor->Write(name);
 outf->Close();
}
