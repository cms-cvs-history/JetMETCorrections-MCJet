{
gROOT->Reset();
gROOT->SetStyle("Plain");

gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 


TFile f("../../SimJetResponseMidPoint_R05_all.root");

// Sum the response at negative and positive eta 
JetResponseEt10Eta8->Add(JetResponseEt10Eta23,1);
JetResponseEt12Eta8->Add(JetResponseEt12Eta23,1);
JetResponseEt15Eta8->Add(JetResponseEt15Eta23,1);
JetResponseEt20Eta8->Add(JetResponseEt20Eta23,1);
JetResponseEt27Eta8->Add(JetResponseEt27Eta23,1);
JetResponseEt35Eta8->Add(JetResponseEt35Eta23,1);
JetResponseEt45Eta8->Add(JetResponseEt45Eta23,1);
JetResponseEt57Eta8->Add(JetResponseEt57Eta23,1);
JetResponseEt72Eta8->Add(JetResponseEt72Eta23,1);
JetResponseEt90Eta8->Add(JetResponseEt90Eta23,1);
JetResponseEt120Eta8->Add(JetResponseEt120Eta23,1);
JetResponseEt150Eta8->Add(JetResponseEt150Eta23,1);
JetResponseEt200Eta8->Add(JetResponseEt200Eta23,1);
JetResponseEt300Eta8->Add(JetResponseEt300Eta23,1);
JetResponseEt400Eta8->Add(JetResponseEt400Eta23,1);
JetResponseEt550Eta8->Add(JetResponseEt550Eta23,1);
JetResponseEt750Eta8->Add(JetResponseEt750Eta23,1);
JetResponseEt1000Eta8->Add(JetResponseEt1000Eta23,1);
JetResponseEt1400Eta8->Add(JetResponseEt1400Eta23,1);
JetResponseEt2000Eta8->Add(JetResponseEt2000Eta23,1);
JetResponseEt2900Eta8->Add(JetResponseEt2900Eta23,1);
JetResponseEt4500Eta8->Add(JetResponseEt4500Eta23,1);

// Sum the Et at negative and positive eta
EtGenJetEt10Eta8->Add(EtGenJetEt10Eta23,1);
EtGenJetEt12Eta8->Add(EtGenJetEt12Eta23,1);
EtGenJetEt15Eta8->Add(EtGenJetEt15Eta23,1);
EtGenJetEt20Eta8->Add(EtGenJetEt20Eta23,1);
EtGenJetEt27Eta8->Add(EtGenJetEt27Eta23,1);
EtGenJetEt35Eta8->Add(EtGenJetEt35Eta23,1);
EtGenJetEt45Eta8->Add(EtGenJetEt45Eta23,1);
EtGenJetEt57Eta8->Add(EtGenJetEt57Eta23,1);
EtGenJetEt72Eta8->Add(EtGenJetEt72Eta23,1);
EtGenJetEt90Eta8->Add(EtGenJetEt90Eta23,1);
EtGenJetEt120Eta8->Add(EtGenJetEt120Eta23,1);
EtGenJetEt150Eta8->Add(EtGenJetEt150Eta23,1);
EtGenJetEt200Eta8->Add(EtGenJetEt200Eta23,1);
EtGenJetEt300Eta8->Add(EtGenJetEt300Eta23,1);
EtGenJetEt400Eta8->Add(EtGenJetEt400Eta23,1);
EtGenJetEt550Eta8->Add(EtGenJetEt550Eta23,1);
EtGenJetEt750Eta8->Add(EtGenJetEt750Eta23,1);
EtGenJetEt1000Eta8->Add(EtGenJetEt1000Eta23,1);
EtGenJetEt1400Eta8->Add(EtGenJetEt1400Eta23,1);
EtGenJetEt2000Eta8->Add(EtGenJetEt2000Eta23,1);
EtGenJetEt2900Eta8->Add(EtGenJetEt2900Eta23,1);
EtGenJetEt4500Eta8->Add(EtGenJetEt4500Eta23,1);

// Maximum number of histograms to consider
Int_t n = 22;

// Minimum number of histogram entries for fit and respsonse measure
Double_t entryCut = 10.0;
Double_t entries[n];


// Clone the response histograms into a histogram array
TH1F *histResp[n];
histResp[0] = (TH1F)JetResponseEt10Eta8->Clone();
histResp[1] = (TH1F)JetResponseEt12Eta8->Clone();
histResp[2] = (TH1F)JetResponseEt15Eta8->Clone();
histResp[3] = (TH1F)JetResponseEt20Eta8->Clone();
histResp[4] = (TH1F)JetResponseEt27Eta8->Clone();
histResp[5] = (TH1F)JetResponseEt35Eta8->Clone();
histResp[6] = (TH1F)JetResponseEt45Eta8->Clone();
histResp[7] = (TH1F)JetResponseEt57Eta8->Clone();
histResp[8] = (TH1F)JetResponseEt72Eta8->Clone();
histResp[9] = (TH1F)JetResponseEt90Eta8->Clone();
histResp[10] = (TH1F)JetResponseEt120Eta8->Clone();
histResp[11] = (TH1F)JetResponseEt150Eta8->Clone();
histResp[12] = (TH1F)JetResponseEt200Eta8->Clone();
histResp[13] = (TH1F)JetResponseEt300Eta8->Clone();
histResp[14] = (TH1F)JetResponseEt400Eta8->Clone();
histResp[15] = (TH1F)JetResponseEt550Eta8->Clone();
histResp[16] = (TH1F)JetResponseEt750Eta8->Clone();
histResp[17] = (TH1F)JetResponseEt1000Eta8->Clone();
histResp[18] = (TH1F)JetResponseEt1400Eta8->Clone();
histResp[19] = (TH1F)JetResponseEt2000Eta8->Clone();
histResp[20] = (TH1F)JetResponseEt2900Eta8->Clone();
histResp[21] = (TH1F)JetResponseEt4500Eta8->Clone();

// Clone the Et histograms into a histogram array
TH1F *histEt[n];
histEt[0] = (TH1F)EtGenJetEt10Eta8->Clone();
histEt[1] = (TH1F)EtGenJetEt12Eta8->Clone();
histEt[2] = (TH1F)EtGenJetEt15Eta8->Clone();
histEt[3] = (TH1F)EtGenJetEt20Eta8->Clone();
histEt[4] = (TH1F)EtGenJetEt27Eta8->Clone();
histEt[5] = (TH1F)EtGenJetEt35Eta8->Clone();
histEt[6] = (TH1F)EtGenJetEt45Eta8->Clone();
histEt[7] = (TH1F)EtGenJetEt57Eta8->Clone();
histEt[8] = (TH1F)EtGenJetEt72Eta8->Clone();
histEt[9] = (TH1F)EtGenJetEt90Eta8->Clone();
histEt[10] = (TH1F)EtGenJetEt120Eta8->Clone();
histEt[11] = (TH1F)EtGenJetEt150Eta8->Clone();
histEt[12] = (TH1F)EtGenJetEt200Eta8->Clone();
histEt[13] = (TH1F)EtGenJetEt300Eta8->Clone();
histEt[14] = (TH1F)EtGenJetEt400Eta8->Clone();
histEt[15] = (TH1F)EtGenJetEt550Eta8->Clone();
histEt[16] = (TH1F)EtGenJetEt750Eta8->Clone();
histEt[17] = (TH1F)EtGenJetEt1000Eta8->Clone();
histEt[18] = (TH1F)EtGenJetEt1400Eta8->Clone();
histEt[19] = (TH1F)EtGenJetEt2000Eta8->Clone();
histEt[20] = (TH1F)EtGenJetEt2900Eta8->Clone();
histEt[21] = (TH1F)EtGenJetEt4500Eta8->Clone();

// Histogram names needed for output filenemas
char *name[n];
name[0] = "JetResponseEt10Eta8";
name[1] = "JetResponseEt12Eta8";
name[2] = "JetResponseEt15Eta8";
name[3] = "JetResponseEt20Eta8";
name[4] = "JetResponseEt27Eta8";
name[5] = "JetResponseEt35Eta8";
name[6] = "JetResponseEt45Eta8";
name[7] = "JetResponseEt57Eta8";
name[8] = "JetResponseEt72Eta8";
name[9] = "JetResponseEt90Eta8";
name[10] = "JetResponseEt120Eta8";
name[11] = "JetResponseEt150Eta8";
name[12] = "JetResponseEt200Eta8";
name[13] = "JetResponseEt300Eta8";
name[14] = "JetResponseEt400Eta8";
name[15] = "JetResponseEt550Eta8";
name[16] = "JetResponseEt750Eta8";
name[17] = "JetResponseEt1000Eta8";
name[18] = "JetResponseEt1400Eta8";
name[19] = "JetResponseEt2000Eta8";
name[20] = "JetResponseEt2900Eta8";
name[21] = "JetResponseEt4500Eta8";

// Fit quantities
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

    //Number of response points
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
 
    //Print fit histo to gif and eps files
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

// Save usefule fit quantities for later
ofstream outFile("Response_08.dat");
for (Int_t i=0; i<respPoints; i++){
  outFile << "  " << genEt[i] << "  " << resp[i] << "  " << respErr[i] << " " << respSigma[i] << "  " <<  respSigmaErr[i] <<endl;
}

// Two graphics, the first is for the fit, the second we will save 
gr1 = new TGraphErrors (respPoints,genEt,resp,genEtErr,respErr);
gr2 = new TGraphErrors (respPoints,genEt,resp,genEtErr,respErr);

gr1->SetTitle("MC Jets Calibration");
gr1->SetMarkerStyle(20);
gr1->SetMarkerSize(1.5);
gr1->SetMarkerColor(1);
gr2->SetTitle("MC Jets Calibration, Midpoint R=0.5, 1.757 < | #eta | < 2.046");
gr2->SetMarkerStyle(20);
gr2->SetMarkerSize(1.3);
gr2->SetMarkerColor(1);

gr1->Draw("AP");
Double_t por1, por2;

por1 = 18.;
por2 = 23.;

// The three functions that define the response. 
// The first two functions will be fit to the data at low and high pt. 
// The third function (line) will connect the first two functions together continuously in Et and Response.
TF1 *func1 = new TF1("func1","[0]*sqrt(x +[1]) + [2]",10.,por2);
TF1 *func2 = new TF1("func2","[0]/(sqrt([1]*x + [2])) + [3] ",por1,5000.);
TF1 *func3 = new TF1("func3","pol1 ",por1,por2);

func2->SetParameter(0,-3.);
func2->SetParameter(3,1.);
func2->SetParLimits(1,0.1,10.);
func2->SetParLimits(2,-1.5,10000.);

// Fit the response graphic with the first two functions. Fits overlap in region por1 < Et < por2 !!
gr1->Fit("func2", "R",  "r", por1, 5000);
TF1 *fitM1 = gr1->GetFunction("func2");

gr1->Fit("func1", "R+", "r", 10, por2);
TF1 *fitM2 = gr1->GetFunction("func1");

// Load the fit parameters into a single array
Double_t par[7];
func1->GetParameters(&par[0]);
func2->GetParameters(&par[3]);

cout<<"  "<< par[0]<<"  "<< par[1]<<"  "<< par[2]
<<"  "<< par[3]<<"  "<< par[4]<<"  "<< par[5]
<<"  "<< par[6] << endl;

// Calculate the line that connects the two functions in the region por1 < Et < por2
Double_t a1,a2;

a2 = par[3]/(sqrt(fabs(par[4]*por2 + par[5]))) + par[6];
a1 = par[0]*sqrt(por1 +par[1]) + par[2];

func3->SetParameter(0,(a1*por2 - a2*por1)/(por2-por1));
func3->SetParameter(1,(a2-a1)/(por2-por1));

func3->Draw("same");

cout<<"  "<< a1 <<"  "<< a2 << endl;

// Redefine the first two functions so they cover Et<Por1 and Et>por2 respectively. 
TF1 *funcA1 = new TF1("funcA1","[0]*sqrt(x +[1]) + [2]",10.,por1);
TF1 *funcA2 = new TF1("funcA2","[0]/(sqrt([1]*x + [2])) + [3] ",por2,5000.);

funcA1->SetParameter(0,par[0]);
funcA1->SetParameter(1,par[1]);
funcA1->SetParameter(2,par[2]);

funcA2->SetParameter(0,par[3]);
funcA2->SetParameter(1,par[4]);
funcA2->SetParameter(2,par[5]);
funcA2->SetParameter(3,par[6]);

// Draw the second graphic with the three continuous functions
TCanvas c1("c1"," ",10,10,800,600);
c1->SetLogx();
gPad->SetTicks(1,1);
gr2->SetMaximum(1.0);
gr2->SetMinimum(0.0);
gr2->GetYaxis()->SetTitle("Jet Response");
gr2->GetYaxis()->SetTitleSize(0.05);
gr2->GetXaxis()->SetTitle("Gen Jet E_{T} (GeV)");
gr2->GetXaxis()->SetTitleOffset(1.2);
gr2->GetXaxis()->SetRangeUser(0.95*genEt[0],1.05*genEt[respPoints]);
gr2->Draw("AP");

funcA1->Draw("same");
funcA2->Draw("same");
func3->Draw("same");
  
c1.Print("Response_08.eps");
c1.Print("Response_08.gif");

// Write out the parameters of the two functions which define the response.
Float_t etamax = 2.046;

FILE *Out1 = fopen("h08.txt", "w+");

fprintf(Out1," %.3f %.1f %.1f %.5f %.5f %.5f %.5f %.5f %.5f %.5f\n", 
etamax, por1, por2, par[0], par[1], par[2], par[3], par[4], par[5], par[6]);

fclose(Out1);

 cout<< endl;

}
