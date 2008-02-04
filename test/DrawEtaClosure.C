void DrawEtaClosure(const char algorithm[100])
{
  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0000);
  gStyle->SetOptFit(111); 
  //gStyle->SetPadGridX(1);
  //gStyle->SetPadGridY(1);
  gStyle->SetPalette(1);
  const int NPtBins=12;
  const double Pt[NPtBins+1]={20,30,50,75,100,150,300,500,750,1000,1500,2000,6000};
  
  TFile *f;
  TH1F *Resolution[NPtBins],*Response[NPtBins];
  TCanvas *c[NPtBins],*c1[NPtBins];
  int i,j;
  char name[100],cname[100],filename[100];
  double r,e;
  sprintf(filename,"L2L3ClosureResults_vs_eta_%s.root",algorithm);
  f = new TFile(filename,"r");

  for(i=0;i<NPtBins;i++)
   {
     sprintf(name,"Resolution_GenPt%d",(int)Pt[i]);
     Resolution[i] = (TH1F*)f->Get(name);
     
     sprintf(name,"Response_GenPt%d",(int)Pt[i]);
     Response[i] = (TH1F*)f->Get(name);
   }

  for(i=0;i<NPtBins;i++)
   {
      sprintf(cname,"%s_EtaClosure_Pt%d",algorithm,(int)Pt[i]);
      c[i] = new TCanvas(cname,cname,900,600);
      c[i]->cd();
      sprintf(name,"%d<p_{T}^{gen}<%d GeV",(int)Pt[i],(int)Pt[i+1]);
      Response[i]->SetTitle(name);
      Response[i]->GetXaxis()->SetTitle("#eta^{reco}");
      Response[i]->GetYaxis()->SetTitle("<#frac{p_{T}^{cor}}{p_{T}^{gen}}>");
      Response[i]->GetYaxis()->SetNdivisions(505);
      Response[i]->SetMaximum(1.1);
      Response[i]->SetMinimum(0.9);
      Response[i]->SetMarkerStyle(21);
      Response[i]->SetMarkerColor(1);
      Response[i]->SetLineColor(1);
      Response[i]->Draw();
   }
  for(i=0;i<NPtBins;i++)
    {
      sprintf(cname,"%s_Resolution_Pt%d",algorithm,(int)Pt[i]);
      c1[i] = new TCanvas(cname,cname,900,600);
      c1[i]->cd();
      sprintf(name,"%d<p_{T}^{gen}<%d GeV",(int)Pt[i],(int)Pt[i+1]);
      Resolution[i]->SetTitle(name);
      Resolution[i]->GetXaxis()->SetTitle("#eta^{reco}");
      Resolution[i]->GetYaxis()->SetTitleOffset(1.1);   
      Resolution[i]->GetYaxis()->SetTitle("#sigma(p_{T}^{cor}/p_{T}^{gen})");
      Resolution[i]->GetYaxis()->SetNdivisions(505); 
      Resolution[i]->SetMarkerStyle(20);
      Resolution[i]->SetMarkerColor(1);
      Resolution[i]->SetLineColor(1);
      Resolution[i]->Draw("same");
    }
}
