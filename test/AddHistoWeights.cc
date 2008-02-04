//****************************************************************
//               Dr. Konstantinos Kousouris                      *
//                 Fermilab, Batavia, IL                         *
//****************************************************************

//This is a code to merge identical ROOT files, containing TH1F objects, using weights.

#include <iostream>
#include <string.h>
#include <fstream>
#include <cmath>
#include <TFile.h>
#include <TH1F.h>
#include <TCollection.h>
#include <TKey.h>
#include <TList.h>
#include "AddHistoWeights.h"
using namespace std;

int main()
{
  int i_file,j_histo,N_histo;
  char name[1024];
  char histoName[NHisto_max][100];
  double w[NFiles];
  TFile *f[NFiles];
  TFile *fSum = new TFile(FINAL_HISTO,"RECREATE");
  TKey *key;
  TH1F *h[NHisto_max];
  cout<<"Opening files:"<<endl;
  for(i_file=0;i_file<NFiles;i_file++)
    {
      sprintf(name,"%s%s%d.root",PATH,PREFIX,i_file);
      f[i_file] = new TFile(name,"r");
      if (ApplyWeights)
        w[i_file] = Weight(Xsec[i_file],NEvents[i_file]);
      else
        w[i_file] = 1.;
      cout<<"\""<<name<<"\", Events = "<<NEvents[i_file]<<", Weight = "<<w[i_file]<<endl;
    }
  ////////////// Reading the histogram names from the 1st file. ///////////////
  TIter next(f[0]->GetListOfKeys());
  N_histo = 0;
  cout<<"Reading the histograms' names........"<<endl;
  while ((key = (TKey*)next()))
    {
      if (strcmp(key->GetClassName(),"TH1F")==0)
        {
          sprintf(histoName[N_histo],"%s",key->GetName());
          N_histo++;
          if (N_histo==NHisto_max)
            {
              cout<<"WARNING!!! Number of histograms has reached the limit."<<endl;
              break;
            }  
        }
    }
  cout<<"Found "<<N_histo<<" TH1F histograms..........."<<endl;

  ////////////// Defining the merged histograms. //////////////////////////////
  cout<<"Preparing the histograms............."<<endl;
  for (j_histo=0;j_histo<N_histo;j_histo++)
    {   
      sprintf(name,"tmp_%s",histoName[j_histo]);
      h[j_histo] = (TH1F*)((TH1F*)f[0]->Get(histoName[j_histo]))->Clone(name);
      h[j_histo]->Reset();
      h[j_histo]->Sumw2();
    }
  ///////////// Adding the histograms. ////////////////////////////////////////
  cout<<"Adding the histograms................"<<endl;
  for (j_histo=0;j_histo<N_histo;j_histo++)
    { 
      if (j_histo % (N_histo/10) == 0)
        cout<<100*j_histo/N_histo<<"%"<<endl;
      for (i_file=0;i_file<NFiles;i_file++)
        { 
          TH1F *histo = (TH1F*)f[i_file]->Get(histoName[j_histo]);
          h[j_histo]->Add(histo,w[i_file]); 
        }
      fSum->cd();
      h[j_histo]->SetName(histoName[j_histo]); 
      h[j_histo]->Write();
    }
  cout<<"Histograms written in: \""<<FINAL_HISTO<<"\""<<endl;
}

double Weight(double X, int N)
{
  double w;
  if (N>0)
    w = X*Units*L/(1.*N);
  else
    w = 0;
  return w;
}
