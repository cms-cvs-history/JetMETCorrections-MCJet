void DrawPtClosure(const char algorithm[100])
{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0000);
  gStyle->SetOptFit(111); 
  //gStyle->SetPadGridX(1);
  //gStyle->SetPadGridY(1);
  gStyle->SetPalette(1);
  const double Pt[19]={10,20,30,40,50,75,100,150,200,300,400,500,750,1000,1500,2000,2500,3000,3500};
  const int NETA = 6;
  const double eta_boundaries[NETA+1]={-5., -3., -1.3, 0, 1.3, 3., 5.};
  TFile *f;
  TH1F *hGenResolution[19],*hGenResp[19],*h;
  TCanvas *c[NETA],*c1[NETA];
  int i,j,etabin;
  char name[100],cname[100],filename[100];
  double r,e;
  sprintf(filename,"L2L3ClosureResults_vs_pt_%s.root",algorithm);
  f = new TFile(filename,"r");
  for(etabin=0;etabin<NETA;etabin++)
    { 
      sprintf(name,"ResolutionEtaBin%d",etabin);
      hGenResolution[etabin] = new TH1F(name,name,18,Pt);
      
      sprintf(name,"ResponseEtaBin%d",etabin);
      hGenResp[etabin] = new TH1F(name,name,18,Pt);  
    }

  for(i=0;i<19;i++)
   {
     sprintf(name,"Resolution_GenPt%d",(int)Pt[i]);
     h = (TH1F*)f->Get(name);
     for(etabin=0;etabin<NETA;etabin++)
       {
         r = h->GetBinContent(etabin+1);
         e = h->GetBinError(etabin+1);
         hGenResolution[etabin]->SetBinContent(i+1,r);
         hGenResolution[etabin]->SetBinError(i+1,e);
       }
     sprintf(name,"Response_GenPt%d",(int)Pt[i]);
     h = (TH1F*)f->Get(name);
     for(etabin=0;etabin<NETA;etabin++)
       {
         r = h->GetBinContent(etabin+1);
         e = h->GetBinError(etabin+1);
         hGenResp[etabin]->SetBinContent(i+1,r);
         hGenResp[etabin]->SetBinError(i+1,e);
       }
   }
for(etabin=0;etabin<NETA;etabin++)
        {
      sprintf(cname,"%s_PtClosure_EtaBin%d",algorithm,etabin);
      c[etabin] = new TCanvas(cname,cname,900,600);
      c[etabin]->cd();
      gPad->SetLogx();
      TLegend *leg = new TLegend(0.7,0.7,0.9,0.9);
      hGenResp[etabin]->SetTitle("Corrected jet response vs p_{T}^{gen}");
      hGenResp[etabin]->GetXaxis()->SetTitle("<p_{T}^{gen}> (GeV)");
      hGenResp[etabin]->GetYaxis()->SetTitle("<#frac{p_{T}^{cor}}{p_{T}^{gen}}>");
      hGenResp[etabin]->GetYaxis()->SetNdivisions(505);
      hGenResp[etabin]->SetMaximum(1.1);
      hGenResp[etabin]->SetMinimum(0.9);
      hGenResp[etabin]->SetMarkerStyle(21);
      hGenResp[etabin]->SetMarkerColor(1);
      hGenResp[etabin]->SetLineColor(1);
      hGenResp[etabin]->Draw();
      sprintf(name,"%1.1f<#eta<%1.1f",eta_boundaries[etabin],eta_boundaries[etabin+1]);
      leg->AddEntry(hGenResp[etabin],name,"LP");
      leg->SetFillColor(0);
      leg->SetHeader(algorithm);
      leg->Draw();   
}/*
  for(etabin=0;etabin<NETA;etabin++)
    {
      sprintf(cname,"%s_Resolution_EtaBin%d",algorithm,etabin);
      c1[etabin] = new TCanvas(cname,cname,900,600);
      c1[etabin]->cd();
      gPad->SetLogx();
      sprintf(name,"%1.1f<#eta<%1.1f",eta_boundaries[etabin],eta_boundaries[etabin+1]);
      hGenResolution[etabin]->SetTitle(name);
      hGenResolution[etabin]->GetXaxis()->SetTitle("<p_{T}^{gen}> (GeV)");
      hGenResolution[etabin]->GetYaxis()->SetTitleOffset(1.1);   
      hGenResolution[etabin]->GetYaxis()->SetTitle("#sigma(p_{T}^{cor}/p_{T}^{gen})");
      hGenResolution[etabin]->GetYaxis()->SetNdivisions(505); 
      hGenResolution[etabin]->SetMarkerStyle(20);
      hGenResolution[etabin]->SetMarkerColor(1);
      hGenResolution[etabin]->SetLineColor(1);
      hGenResolution[etabin]->Draw("same");
    }
*/
}
