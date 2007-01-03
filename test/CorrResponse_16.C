{
gROOT->Reset();

gStyle->SetPalette(1);
gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

gStyle->SetCanvasColor(10);
gStyle->SetFrameFillColor(10);


TFile f("../../CorrectedJetResponseMidPoint_R05_all.root");

JetResponseEt10Eta0->Add(JetResponseEt10Eta31,1);
JetResponseEt12Eta0->Add(JetResponseEt12Eta31,1);
JetResponseEt15Eta0->Add(JetResponseEt15Eta31,1);
JetResponseEt20Eta0->Add(JetResponseEt20Eta31,1);
JetResponseEt27Eta0->Add(JetResponseEt27Eta31,1);
JetResponseEt35Eta0->Add(JetResponseEt35Eta31,1);
JetResponseEt45Eta0->Add(JetResponseEt45Eta31,1);
JetResponseEt57Eta0->Add(JetResponseEt57Eta31,1);
JetResponseEt72Eta0->Add(JetResponseEt72Eta31,1);
JetResponseEt90Eta0->Add(JetResponseEt90Eta31,1);
JetResponseEt120Eta0->Add(JetResponseEt120Eta31,1);
JetResponseEt150Eta0->Add(JetResponseEt150Eta31,1);
JetResponseEt200Eta0->Add(JetResponseEt200Eta31,1);
JetResponseEt300Eta0->Add(JetResponseEt300Eta31,1);
JetResponseEt400Eta0->Add(JetResponseEt400Eta31,1);
JetResponseEt550Eta0->Add(JetResponseEt550Eta31,1);
JetResponseEt750Eta0->Add(JetResponseEt750Eta31,1);
JetResponseEt1000Eta0->Add(JetResponseEt1000Eta31,1);
JetResponseEt1400Eta0->Add(JetResponseEt1400Eta31,1);
JetResponseEt2000Eta0->Add(JetResponseEt2000Eta31,1);
JetResponseEt2900Eta0->Add(JetResponseEt2900Eta31,1);
JetResponseEt4500Eta0->Add(JetResponseEt4500Eta31,1);

EtGenJetEt10Eta0->Add(EtGenJetEt10Eta31,1);
EtGenJetEt12Eta0->Add(EtGenJetEt12Eta31,1);
EtGenJetEt15Eta0->Add(EtGenJetEt15Eta31,1);
EtGenJetEt20Eta0->Add(EtGenJetEt20Eta31,1);
EtGenJetEt27Eta0->Add(EtGenJetEt27Eta31,1);
EtGenJetEt35Eta0->Add(EtGenJetEt35Eta31,1);
EtGenJetEt45Eta0->Add(EtGenJetEt45Eta31,1);
EtGenJetEt57Eta0->Add(EtGenJetEt57Eta31,1);
EtGenJetEt72Eta0->Add(EtGenJetEt72Eta31,1);
EtGenJetEt90Eta0->Add(EtGenJetEt90Eta31,1);
EtGenJetEt120Eta0->Add(EtGenJetEt120Eta31,1);
EtGenJetEt150Eta0->Add(EtGenJetEt150Eta31,1);
EtGenJetEt200Eta0->Add(EtGenJetEt200Eta31,1);
EtGenJetEt300Eta0->Add(EtGenJetEt300Eta31,1);
EtGenJetEt400Eta0->Add(EtGenJetEt400Eta31,1);
EtGenJetEt550Eta0->Add(EtGenJetEt550Eta31,1);
EtGenJetEt750Eta0->Add(EtGenJetEt750Eta31,1);
EtGenJetEt1000Eta0->Add(EtGenJetEt1000Eta31,1);
EtGenJetEt1400Eta0->Add(EtGenJetEt1400Eta31,1);
EtGenJetEt2000Eta0->Add(EtGenJetEt2000Eta31,1);
EtGenJetEt2900Eta0->Add(EtGenJetEt2900Eta31,1);
EtGenJetEt4500Eta0->Add(EtGenJetEt4500Eta31,1);


Int_t n = 21;

TF1 *fit[n];
 
JetResponseEt10Eta0->Fit("gaus","","",0.5,1.5);
c1.Print("tmp/JetResponseEt10Eta0.gif");
fit[0] = JetResponseEt10Eta0->GetFunction("gaus");
 
JetResponseEt12Eta0->Fit("gaus","","",0.6,1.4);
c1.Print("tmp/JetResponseEt12Eta0.gif");
fit[1] = JetResponseEt12Eta0->GetFunction("gaus");
 
JetResponseEt15Eta0->Fit("gaus","","",0.7,1.3);
c1.Print("tmp/JetResponseEt15Eta0.gif");
fit[2] = JetResponseEt15Eta0->GetFunction("gaus");
 
JetResponseEt20Eta0->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt20Eta0.gif");
fit[3] = JetResponseEt20Eta0->GetFunction("gaus");
 
JetResponseEt27Eta0->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt27Eta0.gif");
fit[4] = JetResponseEt27Eta0->GetFunction("gaus");
 
JetResponseEt35Eta0->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt35Eta0.gif");
fit[5] = JetResponseEt35Eta0->GetFunction("gaus");
                                                                                
JetResponseEt45Eta0->Fit("gaus","","",0.81,1.19);
c1.Print("tmp/JetResponseEt45Eta0.gif");
fit[6] = JetResponseEt45Eta0->GetFunction("gaus");
 
JetResponseEt57Eta0->Fit("gaus","","",0.82,1.18);
c1.Print("tmp/JetResponseEt57Eta0.gif");
fit[7] = JetResponseEt57Eta0->GetFunction("gaus");

JetResponseEt72Eta0->Fit("gaus","","",0.84,1.16);
c1.Print("tmp/JetResponseEt72Eta0.gif");
fit[8] = JetResponseEt72Eta0->GetFunction("gaus");

JetResponseEt90Eta0->Fit("gaus","","",0.85,1.15);
c1.Print("tmp/JetResponseEt90Eta0.gif");
fit[9] = JetResponseEt90Eta0->GetFunction("gaus");

JetResponseEt120Eta0->Fit("gaus","","",0.87,1.13);
c1.Print("tmp/JetResponseEt120Eta0.gif");
fit[10] = JetResponseEt120Eta0->GetFunction("gaus");

JetResponseEt150Eta0->Fit("gaus","","",0.88,1.12);
c1.Print("tmp/JetResponseEt150Eta0.gif");
fit[11] = JetResponseEt150Eta0->GetFunction("gaus");

JetResponseEt200Eta0->Fit("gaus","","",0.85,1.15);
c1.Print("tmp/JetResponseEt200Eta0.gif");
fit[12] = JetResponseEt200Eta0->GetFunction("gaus");

JetResponseEt300Eta0->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt300Eta0.gif");
fit[13] = JetResponseEt300Eta0->GetFunction("gaus");

JetResponseEt400Eta0->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt400Eta0.gif");
fit[14] = JetResponseEt400Eta0->GetFunction("gaus");

JetResponseEt550Eta0->Fit("gaus","","",0.85,1.1);
c1.Print("tmp/JetResponseEt550Eta0.gif");
fit[15] = JetResponseEt550Eta0->GetFunction("gaus");

JetResponseEt750Eta0->Fit("gaus","","",0.92,1.08);
c1.Print("tmp/JetResponseEt750Eta0.gif");
fit[16] = JetResponseEt750Eta0->GetFunction("gaus");

JetResponseEt1000Eta0->Fit("gaus","","",0.95,1.05);
c1.Print("tmp/JetResponseEt1000Eta0.gif");
fit[17] = JetResponseEt1000Eta0->GetFunction("gaus");

JetResponseEt1400Eta0->Fit("gaus","","",0.94,1.04);
c1.Print("tmp/JetResponseEt1400Eta0.gif");
fit[18] = JetResponseEt1400Eta0->GetFunction("gaus");

JetResponseEt2000Eta0->Fit("gaus","","",0.94,1.04);
c1.Print("tmp/JetResponseEt2000Eta0.gif");
fit[19] = JetResponseEt2000Eta0->GetFunction("gaus");

JetResponseEt2900Eta0->Fit("gaus","","",0.92,1.0);
c1.Print("tmp/JetResponseEt2900Eta0.gif");
fit[20] = JetResponseEt2900Eta0->GetFunction("gaus");

//JetResponseEt4500Eta0->Fit("gaus");
//fit[21] = JetResponseEt4500Eta0->GetFunction("gaus");

Double_t x[n], y[n], xe[n], ye[n];

xe[0]=fit[0]->GetParameter(2) / sqrt(JetResponseEt10Eta0->GetEntries());
xe[1]=fit[1]->GetParameter(2) / sqrt(JetResponseEt12Eta0->GetEntries());
xe[2]=fit[2]->GetParameter(2) / sqrt(JetResponseEt15Eta0->GetEntries());
xe[3]=fit[3]->GetParameter(2) / sqrt(JetResponseEt20Eta0->GetEntries());
xe[4]=fit[4]->GetParameter(2) / sqrt(JetResponseEt27Eta0->GetEntries());
xe[5]=fit[5]->GetParameter(2) / sqrt(JetResponseEt35Eta0->GetEntries());
xe[6]=fit[6]->GetParameter(2) / sqrt(JetResponseEt45Eta0->GetEntries());
xe[7]=fit[7]->GetParameter(2) / sqrt(JetResponseEt57Eta0->GetEntries());
xe[8]=fit[8]->GetParameter(2) / sqrt(JetResponseEt72Eta0->GetEntries());
xe[9]=fit[9]->GetParameter(2) / sqrt(JetResponseEt90Eta0->GetEntries());
xe[10]=fit[10]->GetParameter(2) / sqrt(JetResponseEt120Eta0->GetEntries());
//xe[11]=fit[11]->GetParameter(2) / sqrt(JetResponseEt150Eta0->GetEntries());
//xe[12]=fit[12]->GetParameter(2) / sqrt(JetResponseEt200Eta0->GetEntries());
//xe[13]=fit[13]->GetParameter(2) / sqrt(JetResponseEt300Eta0->GetEntries());
//xe[14]=fit[14]->GetParameter(2) / sqrt(JetResponseEt400Eta0->GetEntries());
//xe[15]=fit[15]->GetParameter(2) / sqrt(JetResponseEt550Eta0->GetEntries());
//xe[16]=fit[16]->GetParameter(2) / sqrt(JetResponseEt750Eta0->GetEntries());
//xe[17]=fit[17]->GetParameter(2) / sqrt(JetResponseEt1000Eta0->GetEntries());
//xe[18]=fit[18]->GetParameter(2) / sqrt(JetResponseEt1400Eta0->GetEntries());
//xe[19]=fit[19]->GetParameter(2) / sqrt(JetResponseEt2000Eta0->GetEntries());
//xe[20]=fit[20]->GetParameter(2) / sqrt(JetResponseEt2900Eta0->GetEntries());
//xe[21]=fit[21]->GetParameter(2) / sqrt(JetResponseEt4500Eta0->GetEntries());

for (Int_t igogo=0; igogo<n; igogo++){
 x[igogo]=fit[igogo]->GetParameter(1);
 xe[igogo]=fit[igogo]->GetParError(1);
}

for (Int_t igogo=0; igogo<n; igogo++){
 cout<<"   "<< xe[igogo] << endl; 
}

 cout<< endl;
 cout<<"  0  "<< x[0] << "  " << JetResponseEt10Eta0->GetEntries() << "  " <<  EtGenJetEt10Eta0->GetMean() << endl;
 cout<<"  1  "<< x[1] << "  " << JetResponseEt12Eta0->GetEntries() << "  " <<  EtGenJetEt12Eta0->GetMean() << endl;
 cout<<"  2  "<< x[2] << "  " << JetResponseEt15Eta0->GetEntries() << "  " <<  EtGenJetEt15Eta0->GetMean()  << endl;
 cout<<"  3  "<< x[3] << "  " << JetResponseEt20Eta0->GetEntries() << "  " <<  EtGenJetEt20Eta0->GetMean()  << endl;
 cout<<"  4  "<< x[4] << "  " << JetResponseEt27Eta0->GetEntries() << "  " <<  EtGenJetEt27Eta0->GetMean()  << endl;
 cout<<"  5  "<< x[5] << "  " << JetResponseEt35Eta0->GetEntries() << "  " <<  EtGenJetEt35Eta0->GetMean()  << endl;
 cout<<"  6  "<< x[6] << "  " << JetResponseEt45Eta0->GetEntries() << "  " <<  EtGenJetEt45Eta0->GetMean()  << endl;
 cout<<"  7  "<< x[7] << "  " << JetResponseEt57Eta0->GetEntries() << "  " <<  EtGenJetEt57Eta0->GetMean()  << endl;
 cout<<"  8  "<< x[8] << "  " << JetResponseEt72Eta0->GetEntries() << "  " <<  EtGenJetEt72Eta0->GetMean()  << endl;
 cout<<"  9  "<< x[9] << "  " << JetResponseEt90Eta0->GetEntries()  << "  " <<  EtGenJetEt90Eta0->GetMean() << endl;
 cout<<" 10  "<< x[10] << "  " << JetResponseEt120Eta0->GetEntries()  << "  " <<  EtGenJetEt120Eta0->GetMean() << endl;
 cout<<" 11  "<< x[11] << "  " << JetResponseEt150Eta0->GetEntries()  << "  " <<  EtGenJetEt150Eta0->GetMean() << endl;
 cout<<" 12  "<< x[12] << "  " << JetResponseEt200Eta0->GetEntries() << "  " <<  EtGenJetEt200Eta0->GetMean()  << endl;
 cout<<" 13  "<< x[13] << "  " << JetResponseEt300Eta0->GetEntries()  << "  " <<  EtGenJetEt300Eta0->GetMean() << endl;
 cout<<" 14  "<< x[14] << "  " << JetResponseEt400Eta0->GetEntries()  << "  " <<  EtGenJetEt400Eta0->GetMean() << endl;
 cout<<" 15  "<< x[15] << "  " << JetResponseEt550Eta0->GetEntries()  << "  " <<  EtGenJetEt550Eta0->GetMean() << endl;
 cout<<" 16  "<< x[16] << "  " << JetResponseEt750Eta0->GetEntries()  << "  " <<  EtGenJetEt750Eta0->GetMean() << endl;
 cout<<" 17  "<< x[17] << "  " << JetResponseEt1000Eta0->GetEntries()  << "  " <<  EtGenJetEt1000Eta0->GetMean() << endl;
 cout<<" 18  "<< x[18] << "  " << JetResponseEt1400Eta0->GetEntries()  << "  " <<  EtGenJetEt1400Eta0->GetMean() << endl;
 cout<<" 19  "<< x[19] << "  " << JetResponseEt2000Eta0->GetEntries()  << "  " <<  EtGenJetEt2000Eta0->GetMean() << endl;
 cout<<" 20  "<< x[20] << "  " << JetResponseEt2900Eta0->GetEntries()  << "  " <<  EtGenJetEt2900Eta0->GetMean() << endl;
// cout<<" 21 "<< x[21] << "  " << JetResponseEt27Eta0->GetEntries() << endl;
 cout<< endl;


y[0]=EtGenJetEt10Eta0->GetMean();
y[1]=EtGenJetEt12Eta0->GetMean();
y[2]=EtGenJetEt15Eta0->GetMean();
y[3]=EtGenJetEt20Eta0->GetMean();
y[4]=EtGenJetEt27Eta0->GetMean();
y[5]=EtGenJetEt35Eta0->GetMean();
y[6]=EtGenJetEt45Eta0->GetMean();
y[7]=EtGenJetEt57Eta0->GetMean();
y[8]=EtGenJetEt72Eta0->GetMean();
y[9]=EtGenJetEt90Eta0->GetMean();
y[10]=EtGenJetEt120Eta0->GetMean();
y[11]=EtGenJetEt150Eta0->GetMean();
y[12]=EtGenJetEt200Eta0->GetMean();
y[13]=EtGenJetEt300Eta0->GetMean();
y[14]=EtGenJetEt400Eta0->GetMean();
y[15]=EtGenJetEt550Eta0->GetMean();
y[16]=EtGenJetEt750Eta0->GetMean();
y[17]=EtGenJetEt1000Eta0->GetMean();
y[18]=EtGenJetEt1400Eta0->GetMean();
y[19]=EtGenJetEt2000Eta0->GetMean();
y[20]=EtGenJetEt2900Eta0->GetMean();
//y[20]=EtGenJetEt4500Eta0->GetMean();

ye[0]=EtGenJetEt10Eta0->GetRMS() / sqrt(EtGenJetEt10Eta0->GetEntries());
ye[1]=EtGenJetEt12Eta0->GetRMS() / sqrt(EtGenJetEt12Eta0->GetEntries());
ye[2]=EtGenJetEt15Eta0->GetRMS() / sqrt(EtGenJetEt15Eta0->GetEntries());
ye[3]=EtGenJetEt20Eta0->GetRMS() / sqrt(EtGenJetEt20Eta0->GetEntries());
ye[4]=EtGenJetEt27Eta0->GetRMS() / sqrt(EtGenJetEt27Eta0->GetEntries());
ye[5]=EtGenJetEt35Eta0->GetRMS() / sqrt(EtGenJetEt35Eta0->GetEntries());
ye[6]=EtGenJetEt45Eta0->GetRMS() / sqrt(EtGenJetEt45Eta0->GetEntries());
ye[7]=EtGenJetEt57Eta0->GetRMS() / sqrt(EtGenJetEt57Eta0->GetEntries());
ye[8]=EtGenJetEt72Eta0->GetRMS() / sqrt(EtGenJetEt72Eta0->GetEntries());
ye[9]=EtGenJetEt90Eta0->GetRMS() / sqrt(EtGenJetEt90Eta0->GetEntries());
ye[10]=EtGenJetEt120Eta0->GetRMS() / sqrt(EtGenJetEt120Eta0->GetEntries());
//ye[11]=EtGenJetEt150Eta0->GetRMS() / sqrt(EtGenJetEt150Eta0->GetEntries());
//ye[12]=EtGenJetEt200Eta0->GetRMS() / sqrt(EtGenJetEt200Eta0->GetEntries());
//ye[13]=EtGenJetEt300Eta0->GetRMS() / sqrt(EtGenJetEt300Eta0->GetEntries());
//ye[14]=EtGenJetEt400Eta0->GetRMS() / sqrt(EtGenJetEt400Eta0->GetEntries());
//ye[15]=EtGenJetEt550Eta0->GetRMS() / sqrt(EtGenJetEt550Eta0->GetEntries());
//ye[16]=EtGenJetEt750Eta0->GetRMS() / sqrt(EtGenJetEt750Eta0->GetEntries());
//ye[17]=EtGenJetEt1000Eta0->GetRMS() / sqrt(EtGenJetEt1000Eta0->GetEntries());
//ye[18]=EtGenJetEt1400Eta0->GetRMS() / sqrt(EtGenJetEt1400Eta0->GetEntries());
//ye[19]=EtGenJetEt2000Eta0->GetRMS() / sqrt(EtGenJetEt2000Eta0->GetEntries());
//ye[20]=EtGenJetEt2900Eta0->GetRMS() / sqrt(EtGenJetEt2900Eta0->GetEntries());
//ye[21]=EtGenJetEt4500Eta0->GetRMS() / sqrt(EtGenJetEt4500Eta0->GetEntries());

ofstream outFile("CorrResponse_16.dat");
for (Int_t i=0; i<n-12; i++){
  outFile << "  " << y[i] << "  " << x[i] << "  " << xe[i] << endl;
}

gr2 = new TGraphErrors (n-12,y,x,ye,xe);

gr2->SetTitle("MC Jets Calibration 4.400 < |#eta| < 4.800");
gr2->SetMarkerStyle(20);
gr2->SetMarkerSize(1.3);
gr2->SetMarkerColor(1);


TCanvas c2hA("c2hA"," ",10,10,800,600);
Int_t cancolor = 10;
c2hA.SetFillColor(cancolor);
gr2->SetMaximum(1.15);
gr2->SetMinimum(0.95);
c2hA->SetLogx();
gPad->SetTicks(1,1);
gr2->GetYaxis()->SetTitle("Corrected Jet Response");
//gr2->GetYaxis()->SetTitleOffset(1.1);
gr2->GetYaxis()->SetTitleSize(0.05);
gr2->GetXaxis()->SetTitle("Gen Jet E_{T} (GeV)");
gr2->GetXaxis()->SetTitleOffset(1.2);
gr2->GetXaxis()->SetRangeUser(10.,90.);
gr2->Draw("AP");


l = new TLine(10.0,1.0,90.,1.0);
l->SetLineStyle(2);
l->Draw();

c2hA.Print("CorrResponse_16.eps");
c2hA.Print("CorrResponse_16.gif");

}
