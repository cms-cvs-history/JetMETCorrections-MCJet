#include <iostream>
#include <string.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <TFile.h>
#include <TH1F.h>
#include <TH2F.h>
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
 const int NPtBins = 18;
 int i,auxi,etabin,ptbin;
 char name[100],func[1024];
 double resp,e_resp;
 double MinCaloPt[NETA],MaxCaloPt[NETA],MinGenPt[NETA],MaxGenPt[NETA];
 double correction_x[30];
 double response_x[30],response_y[30],response_ex[30],response_ey[30];
 double cor_rel[30],gen_pt,calo_pt,control_pt;
 double L3_resp[5],L2_cor[10];
 
 TFile *inf;
 TFile *outf;
 TH1F *hresponse[NGenPtBins];
 TH1F *h;   
 TF1 *Response[NETA]; 
 TF1 *L2Correction[NETA];
 TF1 *L3Response;
 inf = new TFile(FitterOutputFilename,"r");
 ifstream L3ResponseFile;
 ofstream L2File;
 TGraph *g_L2Correction[NETA];
 TGraph *g_EtaResponse[NETA];
 double aux_CaloPt[NPtBins] = {10,15,20,30,40,50,75,100,150,200,300,400,500,750,1000,1500,2000,3000};
 //////////////////// Reading the L3 Response //////////////////////////////// 
 L3ResponseFile.open(L3ResponseFilename);
 L3ResponseFile>>L3_resp[0]>>L3_resp[1]>>L3_resp[2]>>L3_resp[3]>>L3_resp[4];
 sprintf(name,"L3Response");
 L3Response = new TF1(name,"[0]-[1]/(pow(log10(x),[2])+[3])+[4]/x",GenPt[0],GenPt[NGenPtBins-1]);
 for(i=0;i<5;i++)
   L3Response->SetParameter(i,L3_resp[i]);
 L3ResponseFile.close();
 
 /////////////////// Calculating the L2 Correction //////////////////////////////
 for (i=0;i<NGenPtBins;i++) 
   {
     sprintf(name,"EtaBinResponse_GenPt%d",(int)GenPt[i]);
     hresponse[i] = (TH1F*)inf->Get(name);
   }
 for (etabin=0;etabin<NETA;etabin++)
   {
     sprintf(name,"MeanGenPt_EtaBin%d",etabin);
     h = (TH1F*)inf->Get(name);
     ///////////// Response calculation for every eta bin  //////////  
     auxi = 0;
     for (ptbin=0;ptbin<NGenPtBins;ptbin++)
       { 
         resp = hresponse[ptbin]->GetBinContent(etabin+1);
         e_resp = hresponse[ptbin]->GetBinError(etabin+1);
         if (resp>0 && e_resp>0.0001 && e_resp<0.2)
           {
             response_x[auxi] = h->GetBinContent(ptbin+1);//average GenPt for the eta bin
             response_ex[auxi] = 0.;
             response_y[auxi] = resp;
             response_ey[auxi] = e_resp;
             auxi++;
           }
       }
     MaxGenPt[etabin]=response_x[auxi-1];
     MinGenPt[etabin]=response_x[0];
     g_EtaResponse[etabin] = new TGraphErrors(auxi,response_x,response_y,response_ex,response_ey);
     sprintf(name,"Response%d",etabin);
     if (auxi>10)
       sprintf(func,"[0]-[1]/(pow(log10(x),[2])+[3])+[4]/x");
     else
       sprintf(func,"[0]+[1]*log10(x)+[2]*pow(log10(x),2)");
     Response[etabin] = new TF1(name,func,MinGenPt[etabin],MaxGenPt[etabin]);
     Response[etabin]->SetParameter(0,0.);
     Response[etabin]->SetParameter(1,0.);
     Response[etabin]->SetParameter(2,0.);
     Response[etabin]->SetParameter(3,0.);
     Response[etabin]->SetParameter(4,0.);
     g_EtaResponse[etabin]->Fit(name,"RQ");
     MinCaloPt[etabin] = MinGenPt[etabin]*(Response[etabin]->Eval(MinGenPt[etabin]));
     MaxCaloPt[etabin] = MaxGenPt[etabin]*(Response[etabin]->Eval(MaxGenPt[etabin]));
     cout<<MinCaloPt[etabin]<<" "<<MaxCaloPt[etabin]<<" "<<MinGenPt[etabin]<<" "<<MaxGenPt[etabin]<<" "<<Response[etabin]->GetProb()<<endl;
     cout<<name<<" fitted....."<<endl;
     ///////////// L2 Correction calculation for every tower  /////////
     auxi = 0;
     for(ptbin=0;ptbin<NPtBins;ptbin++)
       {
         calo_pt = aux_CaloPt[ptbin];
         Invert(Response[etabin],MinGenPt[etabin],MaxGenPt[etabin],calo_pt,gen_pt);
         if (gen_pt>=MinGenPt[etabin] && gen_pt<=MaxGenPt[etabin])
           {
	     control_pt = gen_pt*(L3Response->Eval(gen_pt));
             cor_rel[auxi] = control_pt/calo_pt;
	     correction_x[auxi] = calo_pt;
             auxi++;
           }
       }
     g_L2Correction[etabin] = new TGraph(auxi,correction_x,cor_rel);
     sprintf(name,"L2Correction%d",etabin);
     if (auxi>2)
       sprintf(func,"[0]+[1]*log10(x)+[2]*pow(log10(x),2)+[3]*pow(log10(x),3)+[4]*pow(log10(x),4)+[5]*pow(log10(x),5)");
     else
       sprintf(func,"[0]+[1]*log10(x)");

     L2Correction[etabin] = new TF1(name,func,MinCaloPt[etabin],MaxCaloPt[etabin]);
     L2Correction[etabin]->SetParameter(0,0.);
     L2Correction[etabin]->SetParameter(1,0.);
     L2Correction[etabin]->SetParameter(2,0.);
     L2Correction[etabin]->SetParameter(3,0.);
     L2Correction[etabin]->SetParameter(4,0.);
     L2Correction[etabin]->SetParameter(5,0.);
     g_L2Correction[etabin]->Fit(name,"RQ");
     cout<<name<<" fitted....."<<endl;        
   }//end of tower loop  

 //////////////////////// Writing //////////////////////////////
   L2File.open(L2CorrectionFilename);
   L2File.setf(ios::right);
   for(etabin=0;etabin<NETA;etabin++)
     {
       for(i=0;i<6;i++)
         L2_cor[i] = L2Correction[etabin]->GetParameter(i);
       L2File    << setw(11) << eta_boundaries[etabin]
                 << setw(11) << eta_boundaries[etabin+1]
                 << setw(11) << (int)8
                 << setw(12) << MinCaloPt[etabin]
                 << setw(12) << MaxCaloPt[etabin]
                 << setw(13) << L2_cor[0]
                 << setw(13) << L2_cor[1]
                 << setw(13) << L2_cor[2]
                 << setw(13) << L2_cor[3]
                 << setw(13) << L2_cor[4]
                 << setw(13) << L2_cor[5]
                 << "\n";
     } 
   L2File.close();
 cout<<L2CorrectionFilename<<" written...."<<endl;
 outf = new TFile(L2OutputROOTFilename,"RECREATE"); 
 for(etabin=0;etabin<NETA;etabin++)
   {
     sprintf(name,"Response_EtaBin%d",etabin);
     g_EtaResponse[etabin]->Write(name);
     sprintf(name,"L2Correction_EtaBin%d",etabin);
     g_L2Correction[etabin]->Write(name);
   }
 outf->Close(); 
}
