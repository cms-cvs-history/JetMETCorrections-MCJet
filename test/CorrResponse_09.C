{
gROOT->Reset();
gROOT->SetStyle("Plain");
//gStyle->SetPalette(1);
//gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

//gStyle->SetCanvasColor(10);
//gStyle->SetFrameFillColor(10);

TFile f("../../CorrectedJetResponseMidPoint_R05_all.root");

JetResponseEt10Eta7->Add(JetResponseEt10Eta24,1);
JetResponseEt12Eta7->Add(JetResponseEt12Eta24,1);
JetResponseEt15Eta7->Add(JetResponseEt15Eta24,1);
JetResponseEt20Eta7->Add(JetResponseEt20Eta24,1);
JetResponseEt27Eta7->Add(JetResponseEt27Eta24,1);
JetResponseEt35Eta7->Add(JetResponseEt35Eta24,1);
JetResponseEt45Eta7->Add(JetResponseEt45Eta24,1);
JetResponseEt57Eta7->Add(JetResponseEt57Eta24,1);
JetResponseEt72Eta7->Add(JetResponseEt72Eta24,1);
JetResponseEt90Eta7->Add(JetResponseEt90Eta24,1);
JetResponseEt120Eta7->Add(JetResponseEt120Eta24,1);
JetResponseEt150Eta7->Add(JetResponseEt150Eta24,1);
JetResponseEt200Eta7->Add(JetResponseEt200Eta24,1);
JetResponseEt300Eta7->Add(JetResponseEt300Eta24,1);
JetResponseEt400Eta7->Add(JetResponseEt400Eta24,1);
JetResponseEt550Eta7->Add(JetResponseEt550Eta24,1);
JetResponseEt750Eta7->Add(JetResponseEt750Eta24,1);
JetResponseEt1000Eta7->Add(JetResponseEt1000Eta24,1);
JetResponseEt1400Eta7->Add(JetResponseEt1400Eta24,1);
JetResponseEt2000Eta7->Add(JetResponseEt2000Eta24,1);
JetResponseEt2900Eta7->Add(JetResponseEt2900Eta24,1);
JetResponseEt4500Eta7->Add(JetResponseEt4500Eta24,1);

EtGenJetEt10Eta7->Add(EtGenJetEt10Eta24,1);
EtGenJetEt12Eta7->Add(EtGenJetEt12Eta24,1);
EtGenJetEt15Eta7->Add(EtGenJetEt15Eta24,1);
EtGenJetEt20Eta7->Add(EtGenJetEt20Eta24,1);
EtGenJetEt27Eta7->Add(EtGenJetEt27Eta24,1);
EtGenJetEt35Eta7->Add(EtGenJetEt35Eta24,1);
EtGenJetEt45Eta7->Add(EtGenJetEt45Eta24,1);
EtGenJetEt57Eta7->Add(EtGenJetEt57Eta24,1);
EtGenJetEt72Eta7->Add(EtGenJetEt72Eta24,1);
EtGenJetEt90Eta7->Add(EtGenJetEt90Eta24,1);
EtGenJetEt120Eta7->Add(EtGenJetEt120Eta24,1);
EtGenJetEt150Eta7->Add(EtGenJetEt150Eta24,1);
EtGenJetEt200Eta7->Add(EtGenJetEt200Eta24,1);
EtGenJetEt300Eta7->Add(EtGenJetEt300Eta24,1);
EtGenJetEt400Eta7->Add(EtGenJetEt400Eta24,1);
EtGenJetEt550Eta7->Add(EtGenJetEt550Eta24,1);
EtGenJetEt750Eta7->Add(EtGenJetEt750Eta24,1);
EtGenJetEt1000Eta7->Add(EtGenJetEt1000Eta24,1);
EtGenJetEt1400Eta7->Add(EtGenJetEt1400Eta24,1);
EtGenJetEt2000Eta7->Add(EtGenJetEt2000Eta24,1);
EtGenJetEt2900Eta7->Add(EtGenJetEt2900Eta24,1);
EtGenJetEt4500Eta7->Add(EtGenJetEt4500Eta24,1);


// Maximum number of histograms to consider
Int_t n = 22;

// Minimum number of histogram entries for fit and respsonse measure
Double_t entryCut = 10.0;
Double_t entries[n];

TH1F *histResp[n];
histResp[0] = (TH1F)JetResponseEt10Eta7->Clone();
histResp[1] = (TH1F)JetResponseEt12Eta7->Clone();
histResp[2] = (TH1F)JetResponseEt15Eta7->Clone();
histResp[3] = (TH1F)JetResponseEt20Eta7->Clone();
histResp[4] = (TH1F)JetResponseEt27Eta7->Clone();
histResp[5] = (TH1F)JetResponseEt35Eta7->Clone();
histResp[6] = (TH1F)JetResponseEt45Eta7->Clone();
histResp[7] = (TH1F)JetResponseEt57Eta7->Clone();
histResp[8] = (TH1F)JetResponseEt72Eta7->Clone();
histResp[9] = (TH1F)JetResponseEt90Eta7->Clone();
histResp[10] = (TH1F)JetResponseEt120Eta7->Clone();
histResp[11] = (TH1F)JetResponseEt150Eta7->Clone();
histResp[12] = (TH1F)JetResponseEt200Eta7->Clone();
histResp[13] = (TH1F)JetResponseEt300Eta7->Clone();
histResp[14] = (TH1F)JetResponseEt400Eta7->Clone();
histResp[15] = (TH1F)JetResponseEt550Eta7->Clone();
histResp[16] = (TH1F)JetResponseEt750Eta7->Clone();
histResp[17] = (TH1F)JetResponseEt1000Eta7->Clone();
histResp[18] = (TH1F)JetResponseEt1400Eta7->Clone();
histResp[19] = (TH1F)JetResponseEt2000Eta7->Clone();
histResp[20] = (TH1F)JetResponseEt2900Eta7->Clone();
histResp[21] = (TH1F)JetResponseEt4500Eta7->Clone();

TH1F *histEt[n];
histEt[0] = (TH1F)EtGenJetEt10Eta7->Clone();
histEt[1] = (TH1F)EtGenJetEt12Eta7->Clone();
histEt[2] = (TH1F)EtGenJetEt15Eta7->Clone();
histEt[3] = (TH1F)EtGenJetEt20Eta7->Clone();
histEt[4] = (TH1F)EtGenJetEt27Eta7->Clone();
histEt[5] = (TH1F)EtGenJetEt35Eta7->Clone();
histEt[6] = (TH1F)EtGenJetEt45Eta7->Clone();
histEt[7] = (TH1F)EtGenJetEt57Eta7->Clone();
histEt[8] = (TH1F)EtGenJetEt72Eta7->Clone();
histEt[9] = (TH1F)EtGenJetEt90Eta7->Clone();
histEt[10] = (TH1F)EtGenJetEt120Eta7->Clone();
histEt[11] = (TH1F)EtGenJetEt150Eta7->Clone();
histEt[12] = (TH1F)EtGenJetEt200Eta7->Clone();
histEt[13] = (TH1F)EtGenJetEt300Eta7->Clone();
histEt[14] = (TH1F)EtGenJetEt400Eta7->Clone();
histEt[15] = (TH1F)EtGenJetEt550Eta7->Clone();
histEt[16] = (TH1F)EtGenJetEt750Eta7->Clone();
histEt[17] = (TH1F)EtGenJetEt1000Eta7->Clone();
histEt[18] = (TH1F)EtGenJetEt1400Eta7->Clone();
histEt[19] = (TH1F)EtGenJetEt2000Eta7->Clone();
histEt[20] = (TH1F)EtGenJetEt2900Eta7->Clone();
histEt[21] = (TH1F)EtGenJetEt4500Eta7->Clone();

char *name[n];
name[0] = "JetResponseEt10Eta7";
name[1] = "JetResponseEt12Eta7";
name[2] = "JetResponseEt15Eta7";
name[3] = "JetResponseEt20Eta7";
name[4] = "JetResponseEt27Eta7";
name[5] = "JetResponseEt35Eta7";
name[6] = "JetResponseEt45Eta7";
name[7] = "JetResponseEt57Eta7";
name[8] = "JetResponseEt72Eta7";
name[9] = "JetResponseEt90Eta7";
name[10] = "JetResponseEt120Eta7";
name[11] = "JetResponseEt150Eta7";
name[12] = "JetResponseEt200Eta7";
name[13] = "JetResponseEt300Eta7";
name[14] = "JetResponseEt400Eta7";
name[15] = "JetResponseEt550Eta7";
name[16] = "JetResponseEt750Eta7";
name[17] = "JetResponseEt1000Eta7";
name[18] = "JetResponseEt1400Eta7";
name[19] = "JetResponseEt2000Eta7";
name[20] = "JetResponseEt2900Eta7";
name[21] = "JetResponseEt4500Eta7";

TF1 *fit[n];
Double_t resp[n], genEt[n], respErr[n], genEtErr[n], respSigma[n], respSigmaErr[n] ;

Double_t mean, rms, xmin, xmax;
TH1F *histClone;
TString *gif_file;
TString *eps_file;

Int_t respPoints=0;
Double_t pi=3.1415927;

for (Int_t i=0; i<n; i++){  

  //Get the number of histogram entries and only proceed if enough
  entries[i] = histResp[i]->GetEntries();
  if( entries[i]>entryCut ){

    respPoints++;

    //Make the Gaussian fit function
    fit[i] = new TF1("mygaus","[0]*exp(-0.5*((x-[1])/[2])^2)");

    //Make the points red with error bars and save a copy to overlay
    histResp[i]->SetLineWidth(2);
    histResp[i]->SetLineColor(2);
    histClone = (TH1F*)histResp[i]->Clone();

    //1st fit using 1 sigma range from full dist mean and rms
    mean=histResp[i]->GetMean();
    rms=histResp[i]->GetRMS();
    xmin=mean-rms;
    xmax=mean+rms;
    cout << "Full dist: mean=" << mean <<", rms="<<rms<<", xmin="<<xmin<<", xmax="<<xmax<<endl;
    Double_t binWidth=histResp[i]->GetBinWidth(1); 
    fit[i]->SetParameter(0,binWidth*entries[i]/(rms*sqrt(2*pi)));
    fit[i]->SetParLimits(0,0,entries[i]);
    fit[i]->SetParameter(1,mean);
    fit[i]->SetParLimits(1,xmin,xmax);
    fit[i]->SetParameter(2,rms);
    fit[i]->SetParLimits(2,0,1);
    histResp[i]->Fit("mygaus","","",xmin,xmax);
    //fit[i] = histResp[i]->GetFunction("gaus");
    mean = fit[i]->GetParameter(1);
    rms = fit[i]->GetParameter(2);

    //2nd fit using 1 sigma range from last Gaussian Fit
    xmin=mean-rms;
    xmax=mean+rms;
    cout << "1st Gaus Fit: mean=" << mean <<", rms="<<rms<<", xmin="<<xmin<<", xmax="<<xmax<<endl;
    fit[i]->SetParLimits(1,xmin,xmax);
    histResp[i]->Fit("mygaus","","",xmin,xmax);
    //fit[i] = histResp[i]->GetFunction("gaus");
    mean = fit[i]->GetParameter(1);
    rms = fit[i]->GetParameter(2);

    //Final fit using 1 sigma range from last Gaussian Fit
    xmin=mean-rms;
    xmax=mean+rms;    
    cout << "2nd Gaus Fit: mean=" << mean <<", rms="<<rms<<", xmin="<<xmin<<", xmax="<<xmax<<endl;
    fit[i]->SetParLimits(1,xmin,xmax);
    histResp[i]->Fit("mygaus","","e",xmin,xmax);
    histClone->Draw("eSAME");
    //fit[i] = histResp[i]->GetFunction("gaus");
    mean = fit[i]->GetParameter(1);
    rms = fit[i]->GetParameter(2);
    cout << "Final Gaus Fit: mean=" << mean <<", rms="<<rms<<endl;
 
    //Print it
    gif_file = new TString("tmp/");
    *gif_file+= name[i];
    *gif_file+= ".gif";
    c1.Print(*gif_file);
  
    eps_file = new TString("tmp/");
    *eps_file+= name[i];
    *eps_file+= ".eps";
    c1.Print(*eps_file);

    //Get the genJetEt, response, and their errors
    genEt[i]=histEt[i]->GetMean();
    genEtErr[i]=histEt[i]->GetRMS()/sqrt(entries[i]);
    resp[i]=fit[i]->GetParameter(1);
    respErr[i]=fit[i]->GetParError(1);
    respSigma[i]=fit[i]->GetParameter(2);
    respSigmaErr[i]=fit[i]->GetParError(2);

  }

}  
  
ofstream outFile("CorrResponse_09.dat");
for (Int_t i=0; i<respPoints; i++){
  outFile << "  " << genEt[i] << "  " << resp[i] << "  " << respErr[i] << " " << respSigma[i] << "  " <<  respSigmaErr[i] <<endl;
}

gr = new TGraphErrors (respPoints,genEt,resp,genEtErr,respErr);
gr->SetTitle("MC Jets Calibration, Midpoint R=0.5, 2.046  < | #eta | < 2.295");
gr->SetMarkerStyle(20);
gr->SetMarkerSize(1.3);
gr->SetMarkerColor(1);

TCanvas c1("c1"," ",10,10,800,600);
c1->SetLogx();
gPad->SetTicks(1,1);
gr->SetMaximum(1.15);
gr->SetMinimum(0.95);
gr->GetYaxis()->SetTitle("Corrected Jet Response");
gr->GetYaxis()->SetTitleSize(0.05);
gr->GetXaxis()->SetTitle("Gen Jet E_{T} (GeV)");
gr->GetXaxis()->SetTitleOffset(1.2);
gr->GetXaxis()->SetRangeUser(0.95*genEt[0],1.05*genEt[respPoints]);
gr->Draw("AP");

l = new TLine(genEt[0],1.0,genEt[respPoints-1],1.0);
l->SetLineStyle(2);
l->Draw();

c1.Print("CorrResponse_09.eps");
c1.Print("CorrResponse_09.gif");

}
