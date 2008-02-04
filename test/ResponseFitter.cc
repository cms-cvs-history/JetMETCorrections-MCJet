#include <iostream>
#include <string.h>
#include <fstream>
#include <cmath>
#include <TFile.h>
#include <TH1F.h>
#include <TF1.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TMath.h>
#include "Functions.h"
#include "Functions.cc"
#include "UserDefinedData.h"
using namespace std;

int main()
{
 
/////////////////////////////////////////////////////////////////////////
 char name[100],tmp[100];
 int j,etabin;
 double e,mR,eR,sR,seR,mRBarrel,eRBarrel,sRBarrel,seRBarrel,r;
 double mGenPt,eGenPt,sGenPt,mGenPtEtaBin,eGenPtEtaBin,sGenPtEtaBin;
 TFile *inf;
 TFile *outf; 
 TH1F *BarrelResponse; 
 TH1F *MeanGenPt_Barrel;
 TH1F *Spectrum_Barrel;
 TH1F *Spectrum_EtaBin[NETA];
 TH1F *MeanGenPt_EtaBin[NETA];  
 TH1F *EtaBinResponse_GenPt[NGenPtBins];
 TH1F *h;
 inf = new TFile(JetResponseFilename,"r"); 
 outf = new TFile(FitterOutputFilename,"RECREATE");
 TDirectory *dir_Response = (TDirectory*)outf->mkdir("Response");
 sprintf(name,"BarrelResponse");
 BarrelResponse = new TH1F(name,name,NGenPtBins-1,GenPt);
 MeanGenPt_Barrel = new TH1F("MeanGenPt_Barrel","MeanGenPt_Barrel",NGenPtBins-1,GenPt); 
 for(etabin=0;etabin<NETA;etabin++)
   { 
     sprintf(name,"MeanGenPt_EtaBin%d",etabin);
     MeanGenPt_EtaBin[etabin] = new TH1F(name,name,NGenPtBins-1,GenPt);
   }
 for (j=0; j<NGenPtBins; j++)//loop over GenPt bins
   {  
     cout<<"GenJetPt Bin: ["<<GenPt[j]<<","<<GenPt[j+1]<<"] GeV"<<endl; 
     sprintf(name,"JetGenPt_GenPt%d_Barrel",(int)GenPt[j]);
     h = (TH1F*)inf->Get(name);
     if (j==0)
       Spectrum_Barrel = (TH1F*)h->Clone("Spectrum_Barrel");
     else
       Spectrum_Barrel->Add(h);
     GetMEAN(h,mGenPt,eGenPt,sGenPt);
     sprintf(name,"JetResponseGenPt%d_Barrel",(int)GenPt[j]);
     h = (TH1F*)inf->Get(name);
     GetMPV(name,h,dir_Response,mRBarrel,eRBarrel,sRBarrel,seRBarrel);  
     ///////////////// GenPt ///////////////////////////////////
     MeanGenPt_Barrel->SetBinContent(j+1,mGenPt);
     MeanGenPt_Barrel->SetBinError(j+1,eGenPt);
     ////////////////// Absolute response //////////////////////////
     CalculateResponse(mGenPt,eGenPt,mRBarrel,eRBarrel,r,e);
     BarrelResponse->SetBinContent(j+1,r);
     BarrelResponse->SetBinError(j+1,e);
     /////////////////////////////////////////////////////////////////
     sprintf(name,"EtaBinResponse_GenPt%d",(int)GenPt[j]);
     EtaBinResponse_GenPt[j] = new TH1F(name,name,NETA,eta_boundaries);
     for(etabin=0;etabin<NETA;etabin++)
       {
         ///////////////////////////////////////////////////////////////
         sprintf(name,"JetResponseGenPt%d_EtaBin%d",(int)GenPt[j],etabin);
         h = (TH1F*)inf->Get(name);
         GetMPV(name,h,dir_Response,mR,eR,sR,seR);
         sprintf(name,"JetGenPt_GenPt%d_EtaBin%d",(int)GenPt[j],etabin);
         h = (TH1F*)inf->Get(name);
         if (j==0)
           {
             sprintf(tmp,"Spectrum_EtaBin%d",etabin);
             Spectrum_EtaBin[etabin] = (TH1F*)h->Clone(tmp);
           } 
         else
           Spectrum_EtaBin[etabin]->Add(h);
         GetMEAN(h,mGenPtEtaBin,eGenPtEtaBin,sGenPtEtaBin);
         MeanGenPt_EtaBin[etabin]->SetBinContent(j+1,mGenPtEtaBin);
         MeanGenPt_EtaBin[etabin]->SetBinError(j+1,eGenPtEtaBin);
         CalculateResponse(mGenPtEtaBin,eGenPtEtaBin,mR,eR,r,e);
         EtaBinResponse_GenPt[j]->SetBinContent(etabin+1,r);
         EtaBinResponse_GenPt[j]->SetBinError(etabin+1,e);
       }//end of EtaBin loop 
   }// end of GenPt loop  
   ////////////////////// writing ///////////////////////////////
   outf->cd();
   MeanGenPt_Barrel->Write();
   Spectrum_Barrel->Write();
   for (etabin=0;etabin<NETA;etabin++)
     {
       MeanGenPt_EtaBin[etabin]->Write();
       Spectrum_EtaBin[etabin]->Write();
     }
   BarrelResponse->Write();
   for(j=0;j<NGenPtBins;j++)
     EtaBinResponse_GenPt[j]->Write();
   outf->Close();  
}
