#include <iostream>
#include <string.h>
#include <fstream>
#include <cmath>
#include <TFile.h>
#include <TH1F.h>
#include <TF1.h>
#include <TStyle.h>
#include <TMath.h>
#include "L2L3Closure.h"
#include "Functions.h"
#include "Functions.cc"

using namespace std;

int main()
{
 
/////////////////////////////////////////////////////////////////////////
 char name[100],tmp[100];
 int ptbin,etabin;
 double mPt,ePt,sPt,sePt,r,e,res,rese;
 double mGenPt,eGenPt,sGenPt;
 TFile *inf;
 TFile *outf;
 TH1F *h,*h1;
 TH1F *Response[NPtBins];
 TH1F *Resolution[NPtBins];
 TH1F *GenSpectrum[NETA]; 
 TH1F *CorSpectrum[NETA];

 inf = new TFile(InputFilename,"r");
 outf = new TFile(OutputFilename,"RECREATE");
 TDirectory *dir_Response = (TDirectory*)outf->mkdir("Response");
 for (ptbin=0; ptbin<NPtBins; ptbin++)//loop over Pt bins
   {  
     ///////////////////////////////////////////////////////////////
     sprintf(name,"Response_GenPt%d",(int)Pt[ptbin]);
     Response[ptbin] = new TH1F(name,name,NETA,eta_boundaries);
     sprintf(name,"Resolution_GenPt%d",(int)Pt[ptbin]);
     Resolution[ptbin] = new TH1F(name,name,NETA,eta_boundaries);
     for(etabin=0;etabin<NETA;etabin++)//loop over Eta bins
       {
         sprintf(name,"JetGenPt_GenPt%d_EtaBin%d",(int)Pt[ptbin],etabin);
         h = (TH1F*)inf->Get(name);
         GetMEAN(h,mGenPt,eGenPt,sGenPt);
         sprintf(name,"JetCaloPt_CaloPt%d_EtaBin%d",(int)Pt[ptbin],etabin);
         h1 = (TH1F*)inf->Get(name);
         if (ptbin==0)
           {
             sprintf(tmp,"GenSpectrum_EtaBin%d",etabin);
             GenSpectrum[etabin] = (TH1F*)h->Clone(tmp);
             sprintf(tmp,"CorSpectrum_EtaBin%d",etabin);
             CorSpectrum[etabin] = (TH1F*)h1->Clone(tmp); 
           } 
         else
           {
             GenSpectrum[etabin]->Add(h);   
             CorSpectrum[etabin]->Add(h1);
           }
         sprintf(name,"JetResponsePt_GenPt%d_EtaBin%d",(int)Pt[ptbin],etabin);
         h = (TH1F*)inf->Get(name);
         if (Pt[ptbin]<=30)
           h->Rebin(5);
         if (Pt[ptbin]>30 && Pt[ptbin]<=100)
           h->Rebin(4);
         if (Pt[ptbin]>100 && Pt[ptbin]<500)
           h->Rebin(2);
         GetClosureMPV(name,h,dir_Response,mPt,ePt,sPt,sePt);
         r = 0;
         e = 0;
         if (mGenPt>0)
           {
             r = mPt;
             e = ePt;
             res = sPt;
             rese = sePt;
             Response[ptbin]->SetBinContent(etabin+1,r);
             Response[ptbin]->SetBinError(etabin+1,e);
             Resolution[ptbin]->SetBinContent(etabin+1,res);
             Resolution[ptbin]->SetBinError(etabin+1,rese);
           }
       }//loop over Eta bins
   }//loop over Pt bins
   outf->cd();
   for(etabin=0;etabin<NETA;etabin++)
     {
       GenSpectrum[etabin]->Write();
       CorSpectrum[etabin]->Write();
     }      
   for(ptbin=0;ptbin<NPtBins;ptbin++)
     {
       Response[ptbin]->Write();
       Resolution[ptbin]->Write();
     } 
   outf->Close();  
}
