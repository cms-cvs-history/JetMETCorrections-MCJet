void DrawSpectrum(const char algorithm[100])
{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0000);
  gStyle->SetOptFit(11); 
  //gStyle->SetPadGridX(1);
  //gStyle->SetPadGridY(1);
  gStyle->SetPalette(1);
  
  char hname[1024],filename[1024],name[1024];
  int i,etabin;
  const int NETA = 6;
  const double eta_boundaries[NETA+1]={-5., -3., -1.3, 0, 1.3, 3., 5.};
  double dpt;
  double bin_size = 25.;
  int N_rebin;
  TH1F *GenSpectrum[NETA];
  TH1F *CorSpectrum[NETA];
  TCanvas *canvas_Spectrum[NETA];
  //////////////////////////////////////////////////////////////
  sprintf(filename,"L2L3ClosureResults_vs_pt_%s.root",algorithm); 
  TFile *InputFile = new TFile(filename,"r");     
  //////////////////////////////////////////////////////////////
  for(etabin=0;etabin<NETA;etabin++)
    {
      sprintf(hname,"GenSpectrum_EtaBin%d",etabin);
      GenSpectrum[etabin] = (TH1F*)InputFile->Get(hname);
      if (etabin==0)
        {
          dpt = GenSpectrum[etabin]->GetBinWidth(1);
          N_rebin = bin_size/dpt;
        }  
      GenSpectrum[etabin]->Rebin(N_rebin);
      GenSpectrum[etabin]->Scale(1./bin_size);
      ////////////////////////////////////////////////////////
      sprintf(hname,"CorSpectrum_EtaBin%d",etabin);
      CorSpectrum[etabin] = (TH1F*)InputFile->Get(hname);
      CorSpectrum[etabin]->Rebin(N_rebin);
      CorSpectrum[etabin]->Scale(1./bin_size);
    }
  ///////////////////////////////////////////////////////////////
  for(etabin=0;etabin<NETA;etabin++)
    {
      sprintf(name,"Closure spectrum %1.1f<#eta<%1.1f",eta_boundaries[etabin],eta_boundaries[etabin+1]);
      canvas_Spectrum[etabin] = new TCanvas(name,name,900,600);
      canvas_Spectrum[etabin]->cd();
      gPad->SetLogy();
      GenSpectrum[etabin]->GetXaxis()->SetTitle("p_{T} (GeV)");
      GenSpectrum[etabin]->GetYaxis()->SetTitle("Jets/GeV");
      sprintf(name,"Closure jet spectrum (%s) %1.1f<#eta<%1.1f",algorithm,eta_boundaries[etabin],eta_boundaries[etabin+1]);
      GenSpectrum[etabin]->SetTitle(name);
      //GenSpectrum[etabin]->SetMarkerStyle(21); 
      //CorSpectrum[etabin]->SetMarkerStyle(20);
      GenSpectrum[etabin]->Draw();
      GenSpectrum[etabin]->SetLineColor(1);
      CorSpectrum[etabin]->SetLineColor(2);
      GenSpectrum[etabin]->SetMarkerColor(1);
      CorSpectrum[etabin]->SetMarkerColor(2);
      CorSpectrum[etabin]->Draw("same");
      TLegend *leg = new TLegend(0.7,0.75,0.9,0.9);
      leg->AddEntry(GenSpectrum[etabin],"GenJets","LP");
      leg->AddEntry(CorSpectrum[etabin],"L2L3CorJets","LP");
      leg->SetFillColor(0); 
      leg->Draw();
    }
}
