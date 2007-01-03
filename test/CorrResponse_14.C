{
gROOT->Reset();

gStyle->SetPalette(1);
gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

gStyle->SetCanvasColor(10);
gStyle->SetFrameFillColor(10);


TFile f("../../CorrectedJetResponseMidPoint_R05_all.root");

JetResponseEt10Eta2->Add(JetResponseEt10Eta29,1);
JetResponseEt12Eta2->Add(JetResponseEt12Eta29,1);
JetResponseEt15Eta2->Add(JetResponseEt15Eta29,1);
JetResponseEt20Eta2->Add(JetResponseEt20Eta29,1);
JetResponseEt27Eta2->Add(JetResponseEt27Eta29,1);
JetResponseEt35Eta2->Add(JetResponseEt35Eta29,1);
JetResponseEt45Eta2->Add(JetResponseEt45Eta29,1);
JetResponseEt57Eta2->Add(JetResponseEt57Eta29,1);
JetResponseEt72Eta2->Add(JetResponseEt72Eta29,1);
JetResponseEt90Eta2->Add(JetResponseEt90Eta29,1);
JetResponseEt120Eta2->Add(JetResponseEt120Eta29,1);
JetResponseEt150Eta2->Add(JetResponseEt150Eta29,1);
JetResponseEt200Eta2->Add(JetResponseEt200Eta29,1);
JetResponseEt300Eta2->Add(JetResponseEt300Eta29,1);
JetResponseEt400Eta2->Add(JetResponseEt400Eta29,1);
JetResponseEt550Eta2->Add(JetResponseEt550Eta29,1);
JetResponseEt750Eta2->Add(JetResponseEt750Eta29,1);
JetResponseEt1000Eta2->Add(JetResponseEt1000Eta29,1);
JetResponseEt1400Eta2->Add(JetResponseEt1400Eta29,1);
JetResponseEt2000Eta2->Add(JetResponseEt2000Eta29,1);
JetResponseEt2900Eta2->Add(JetResponseEt2900Eta29,1);
JetResponseEt4500Eta2->Add(JetResponseEt4500Eta29,1);

EtGenJetEt10Eta2->Add(EtGenJetEt10Eta29,1);
EtGenJetEt12Eta2->Add(EtGenJetEt12Eta29,1);
EtGenJetEt15Eta2->Add(EtGenJetEt15Eta29,1);
EtGenJetEt20Eta2->Add(EtGenJetEt20Eta29,1);
EtGenJetEt27Eta2->Add(EtGenJetEt27Eta29,1);
EtGenJetEt35Eta2->Add(EtGenJetEt35Eta29,1);
EtGenJetEt45Eta2->Add(EtGenJetEt45Eta29,1);
EtGenJetEt57Eta2->Add(EtGenJetEt57Eta29,1);
EtGenJetEt72Eta2->Add(EtGenJetEt72Eta29,1);
EtGenJetEt90Eta2->Add(EtGenJetEt90Eta29,1);
EtGenJetEt120Eta2->Add(EtGenJetEt120Eta29,1);
EtGenJetEt150Eta2->Add(EtGenJetEt150Eta29,1);
EtGenJetEt200Eta2->Add(EtGenJetEt200Eta29,1);
EtGenJetEt300Eta2->Add(EtGenJetEt300Eta29,1);
EtGenJetEt400Eta2->Add(EtGenJetEt400Eta29,1);
EtGenJetEt550Eta2->Add(EtGenJetEt550Eta29,1);
EtGenJetEt750Eta2->Add(EtGenJetEt750Eta29,1);
EtGenJetEt1000Eta2->Add(EtGenJetEt1000Eta29,1);
EtGenJetEt1400Eta2->Add(EtGenJetEt1400Eta29,1);
EtGenJetEt2000Eta2->Add(EtGenJetEt2000Eta29,1);
EtGenJetEt2900Eta2->Add(EtGenJetEt2900Eta29,1);
EtGenJetEt4500Eta2->Add(EtGenJetEt4500Eta29,1);


Int_t n = 21;

TF1 *fit[n];
 
JetResponseEt10Eta2->Fit("gaus","","",0.5,1.5);
c1.Print("tmp/JetResponseEt10Eta2.gif");
fit[0] = JetResponseEt10Eta2->GetFunction("gaus");
 
JetResponseEt12Eta2->Fit("gaus","","",0.6,1.4);
c1.Print("tmp/JetResponseEt12Eta2.gif");
fit[1] = JetResponseEt12Eta2->GetFunction("gaus");
 
JetResponseEt15Eta2->Fit("gaus","","",0.7,1.3);
c1.Print("tmp/JetResponseEt15Eta2.gif");
fit[2] = JetResponseEt15Eta2->GetFunction("gaus");
 
JetResponseEt20Eta2->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt20Eta2.gif");
fit[3] = JetResponseEt20Eta2->GetFunction("gaus");
 
JetResponseEt27Eta2->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt27Eta2.gif");
fit[4] = JetResponseEt27Eta2->GetFunction("gaus");
 
JetResponseEt35Eta2->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt35Eta2.gif");
fit[5] = JetResponseEt35Eta2->GetFunction("gaus");
                                                                                
JetResponseEt45Eta2->Fit("gaus","","",0.81,1.19);
c1.Print("tmp/JetResponseEt45Eta2.gif");
fit[6] = JetResponseEt45Eta2->GetFunction("gaus");
 
JetResponseEt57Eta2->Fit("gaus","","",0.82,1.18);
c1.Print("tmp/JetResponseEt57Eta2.gif");
fit[7] = JetResponseEt57Eta2->GetFunction("gaus");

JetResponseEt72Eta2->Fit("gaus","","",0.84,1.16);
c1.Print("tmp/JetResponseEt72Eta2.gif");
fit[8] = JetResponseEt72Eta2->GetFunction("gaus");

JetResponseEt90Eta2->Fit("gaus","","",0.85,1.15);
c1.Print("tmp/JetResponseEt90Eta2.gif");
fit[9] = JetResponseEt90Eta2->GetFunction("gaus");

JetResponseEt120Eta2->Fit("gaus","","",0.87,1.13);
c1.Print("tmp/JetResponseEt120Eta2.gif");
fit[10] = JetResponseEt120Eta2->GetFunction("gaus");

JetResponseEt150Eta2->Fit("gaus","","",0.88,1.12);
c1.Print("tmp/JetResponseEt150Eta2.gif");
fit[11] = JetResponseEt150Eta2->GetFunction("gaus");

JetResponseEt200Eta2->Fit("gaus","","",0.85,1.15);
c1.Print("tmp/JetResponseEt200Eta2.gif");
fit[12] = JetResponseEt200Eta2->GetFunction("gaus");

JetResponseEt300Eta2->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt300Eta2.gif");
fit[13] = JetResponseEt300Eta2->GetFunction("gaus");

JetResponseEt400Eta2->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt400Eta2.gif");
fit[14] = JetResponseEt400Eta2->GetFunction("gaus");

JetResponseEt550Eta2->Fit("gaus","","",0.85,1.1);
c1.Print("tmp/JetResponseEt550Eta2.gif");
fit[15] = JetResponseEt550Eta2->GetFunction("gaus");

JetResponseEt750Eta2->Fit("gaus","","",0.92,1.08);
c1.Print("tmp/JetResponseEt750Eta2.gif");
fit[16] = JetResponseEt750Eta2->GetFunction("gaus");

JetResponseEt1000Eta2->Fit("gaus","","",0.95,1.05);
c1.Print("tmp/JetResponseEt1000Eta2.gif");
fit[17] = JetResponseEt1000Eta2->GetFunction("gaus");

JetResponseEt1400Eta2->Fit("gaus","","",0.94,1.04);
c1.Print("tmp/JetResponseEt1400Eta2.gif");
fit[18] = JetResponseEt1400Eta2->GetFunction("gaus");

JetResponseEt2000Eta2->Fit("gaus","","",0.94,1.04);
c1.Print("tmp/JetResponseEt2000Eta2.gif");
fit[19] = JetResponseEt2000Eta2->GetFunction("gaus");

JetResponseEt2900Eta2->Fit("gaus","","",0.92,1.0);
c1.Print("tmp/JetResponseEt2900Eta2.gif");
fit[20] = JetResponseEt2900Eta2->GetFunction("gaus");

//JetResponseEt4500Eta2->Fit("gaus");
//fit[21] = JetResponseEt4500Eta2->GetFunction("gaus");

Double_t x[n], y[n], xe[n], ye[n];

xe[0]=fit[0]->GetParameter(2) / sqrt(JetResponseEt10Eta2->GetEntries());
xe[1]=fit[1]->GetParameter(2) / sqrt(JetResponseEt12Eta2->GetEntries());
xe[2]=fit[2]->GetParameter(2) / sqrt(JetResponseEt15Eta2->GetEntries());
xe[3]=fit[3]->GetParameter(2) / sqrt(JetResponseEt20Eta2->GetEntries());
xe[4]=fit[4]->GetParameter(2) / sqrt(JetResponseEt27Eta2->GetEntries());
xe[5]=fit[5]->GetParameter(2) / sqrt(JetResponseEt35Eta2->GetEntries());
xe[6]=fit[6]->GetParameter(2) / sqrt(JetResponseEt45Eta2->GetEntries());
xe[7]=fit[7]->GetParameter(2) / sqrt(JetResponseEt57Eta2->GetEntries());
xe[8]=fit[8]->GetParameter(2) / sqrt(JetResponseEt72Eta2->GetEntries());
xe[9]=fit[9]->GetParameter(2) / sqrt(JetResponseEt90Eta2->GetEntries());
xe[10]=fit[10]->GetParameter(2) / sqrt(JetResponseEt120Eta2->GetEntries());
xe[11]=fit[11]->GetParameter(2) / sqrt(JetResponseEt150Eta2->GetEntries());
xe[12]=fit[12]->GetParameter(2) / sqrt(JetResponseEt200Eta2->GetEntries());
xe[13]=fit[13]->GetParameter(2) / sqrt(JetResponseEt300Eta2->GetEntries());
//xe[14]=fit[14]->GetParameter(2) / sqrt(JetResponseEt400Eta2->GetEntries());
//xe[15]=fit[15]->GetParameter(2) / sqrt(JetResponseEt550Eta2->GetEntries());
//xe[16]=fit[16]->GetParameter(2) / sqrt(JetResponseEt750Eta2->GetEntries());
//xe[17]=fit[17]->GetParameter(2) / sqrt(JetResponseEt1000Eta2->GetEntries());
//xe[18]=fit[18]->GetParameter(2) / sqrt(JetResponseEt1400Eta2->GetEntries());
//xe[19]=fit[19]->GetParameter(2) / sqrt(JetResponseEt2000Eta2->GetEntries());
//xe[20]=fit[20]->GetParameter(2) / sqrt(JetResponseEt2900Eta2->GetEntries());
//xe[21]=fit[21]->GetParameter(2) / sqrt(JetResponseEt4500Eta2->GetEntries());

for (Int_t igogo=0; igogo<n; igogo++){
 x[igogo]=fit[igogo]->GetParameter(1);
 xe[igogo]=fit[igogo]->GetParError(1);
}

for (Int_t igogo=0; igogo<n; igogo++){
 cout<<"   "<< xe[igogo] << endl; 
}

 cout<< endl;
 cout<<"  0  "<< x[0] << "  " << JetResponseEt10Eta2->GetEntries() << "  " <<  EtGenJetEt10Eta2->GetMean() << endl;
 cout<<"  1  "<< x[1] << "  " << JetResponseEt12Eta2->GetEntries() << "  " <<  EtGenJetEt12Eta2->GetMean() << endl;
 cout<<"  2  "<< x[2] << "  " << JetResponseEt15Eta2->GetEntries() << "  " <<  EtGenJetEt15Eta2->GetMean()  << endl;
 cout<<"  3  "<< x[3] << "  " << JetResponseEt20Eta2->GetEntries() << "  " <<  EtGenJetEt20Eta2->GetMean()  << endl;
 cout<<"  4  "<< x[4] << "  " << JetResponseEt27Eta2->GetEntries() << "  " <<  EtGenJetEt27Eta2->GetMean()  << endl;
 cout<<"  5  "<< x[5] << "  " << JetResponseEt35Eta2->GetEntries() << "  " <<  EtGenJetEt35Eta2->GetMean()  << endl;
 cout<<"  6  "<< x[6] << "  " << JetResponseEt45Eta2->GetEntries() << "  " <<  EtGenJetEt45Eta2->GetMean()  << endl;
 cout<<"  7  "<< x[7] << "  " << JetResponseEt57Eta2->GetEntries() << "  " <<  EtGenJetEt57Eta2->GetMean()  << endl;
 cout<<"  8  "<< x[8] << "  " << JetResponseEt72Eta2->GetEntries() << "  " <<  EtGenJetEt72Eta2->GetMean()  << endl;
 cout<<"  9  "<< x[9] << "  " << JetResponseEt90Eta2->GetEntries()  << "  " <<  EtGenJetEt90Eta2->GetMean() << endl;
 cout<<" 10  "<< x[10] << "  " << JetResponseEt120Eta2->GetEntries()  << "  " <<  EtGenJetEt120Eta2->GetMean() << endl;
 cout<<" 11  "<< x[11] << "  " << JetResponseEt150Eta2->GetEntries()  << "  " <<  EtGenJetEt150Eta2->GetMean() << endl;
 cout<<" 12  "<< x[12] << "  " << JetResponseEt200Eta2->GetEntries() << "  " <<  EtGenJetEt200Eta2->GetMean()  << endl;
 cout<<" 13  "<< x[13] << "  " << JetResponseEt300Eta2->GetEntries()  << "  " <<  EtGenJetEt300Eta2->GetMean() << endl;
 cout<<" 14  "<< x[14] << "  " << JetResponseEt400Eta2->GetEntries()  << "  " <<  EtGenJetEt400Eta2->GetMean() << endl;
 cout<<" 15  "<< x[15] << "  " << JetResponseEt550Eta2->GetEntries()  << "  " <<  EtGenJetEt550Eta2->GetMean() << endl;
 cout<<" 16  "<< x[16] << "  " << JetResponseEt750Eta2->GetEntries()  << "  " <<  EtGenJetEt750Eta2->GetMean() << endl;
 cout<<" 17  "<< x[17] << "  " << JetResponseEt1000Eta2->GetEntries()  << "  " <<  EtGenJetEt1000Eta2->GetMean() << endl;
 cout<<" 18  "<< x[18] << "  " << JetResponseEt1400Eta2->GetEntries()  << "  " <<  EtGenJetEt1400Eta2->GetMean() << endl;
 cout<<" 19  "<< x[19] << "  " << JetResponseEt2000Eta2->GetEntries()  << "  " <<  EtGenJetEt2000Eta2->GetMean() << endl;
 cout<<" 20  "<< x[20] << "  " << JetResponseEt2900Eta2->GetEntries()  << "  " <<  EtGenJetEt2900Eta2->GetMean() << endl;
// cout<<" 21 "<< x[21] << "  " << JetResponseEt27Eta2->GetEntries() << endl;
 cout<< endl;


y[0]=EtGenJetEt10Eta2->GetMean();
y[1]=EtGenJetEt12Eta2->GetMean();
y[2]=EtGenJetEt15Eta2->GetMean();
y[3]=EtGenJetEt20Eta2->GetMean();
y[4]=EtGenJetEt27Eta2->GetMean();
y[5]=EtGenJetEt35Eta2->GetMean();
y[6]=EtGenJetEt45Eta2->GetMean();
y[7]=EtGenJetEt57Eta2->GetMean();
y[8]=EtGenJetEt72Eta2->GetMean();
y[9]=EtGenJetEt90Eta2->GetMean();
y[10]=EtGenJetEt120Eta2->GetMean();
y[11]=EtGenJetEt150Eta2->GetMean();
y[12]=EtGenJetEt200Eta2->GetMean();
y[13]=EtGenJetEt300Eta2->GetMean();
y[14]=EtGenJetEt400Eta2->GetMean();
y[15]=EtGenJetEt550Eta2->GetMean();
y[16]=EtGenJetEt750Eta2->GetMean();
y[17]=EtGenJetEt1000Eta2->GetMean();
y[18]=EtGenJetEt1400Eta2->GetMean();
y[19]=EtGenJetEt2000Eta2->GetMean();
y[20]=EtGenJetEt2900Eta2->GetMean();
//y[20]=EtGenJetEt4500Eta2->GetMean();

ye[0]=EtGenJetEt10Eta2->GetRMS() / sqrt(EtGenJetEt10Eta2->GetEntries());
ye[1]=EtGenJetEt12Eta2->GetRMS() / sqrt(EtGenJetEt12Eta2->GetEntries());
ye[2]=EtGenJetEt15Eta2->GetRMS() / sqrt(EtGenJetEt15Eta2->GetEntries());
ye[3]=EtGenJetEt20Eta2->GetRMS() / sqrt(EtGenJetEt20Eta2->GetEntries());
ye[4]=EtGenJetEt27Eta2->GetRMS() / sqrt(EtGenJetEt27Eta2->GetEntries());
ye[5]=EtGenJetEt35Eta2->GetRMS() / sqrt(EtGenJetEt35Eta2->GetEntries());
ye[6]=EtGenJetEt45Eta2->GetRMS() / sqrt(EtGenJetEt45Eta2->GetEntries());
ye[7]=EtGenJetEt57Eta2->GetRMS() / sqrt(EtGenJetEt57Eta2->GetEntries());
ye[8]=EtGenJetEt72Eta2->GetRMS() / sqrt(EtGenJetEt72Eta2->GetEntries());
ye[9]=EtGenJetEt90Eta2->GetRMS() / sqrt(EtGenJetEt90Eta2->GetEntries());
ye[10]=EtGenJetEt120Eta2->GetRMS() / sqrt(EtGenJetEt120Eta2->GetEntries());
ye[11]=EtGenJetEt150Eta2->GetRMS() / sqrt(EtGenJetEt150Eta2->GetEntries());
ye[12]=EtGenJetEt200Eta2->GetRMS() / sqrt(EtGenJetEt200Eta2->GetEntries());
ye[13]=EtGenJetEt300Eta2->GetRMS() / sqrt(EtGenJetEt300Eta2->GetEntries());
//ye[14]=EtGenJetEt400Eta2->GetRMS() / sqrt(EtGenJetEt400Eta2->GetEntries());
//ye[15]=EtGenJetEt550Eta2->GetRMS() / sqrt(EtGenJetEt550Eta2->GetEntries());
//ye[16]=EtGenJetEt750Eta2->GetRMS() / sqrt(EtGenJetEt750Eta2->GetEntries());
//ye[17]=EtGenJetEt1000Eta2->GetRMS() / sqrt(EtGenJetEt1000Eta2->GetEntries());
//ye[18]=EtGenJetEt1400Eta2->GetRMS() / sqrt(EtGenJetEt1400Eta2->GetEntries());
//ye[19]=EtGenJetEt2000Eta2->GetRMS() / sqrt(EtGenJetEt2000Eta2->GetEntries());
//ye[20]=EtGenJetEt2900Eta2->GetRMS() / sqrt(EtGenJetEt2900Eta2->GetEntries());
//ye[21]=EtGenJetEt4500Eta2->GetRMS() / sqrt(EtGenJetEt4500Eta2->GetEntries());

ofstream outFile("CorrResponse_14.dat");
for (Int_t i=0; i<n-7; i++){
  outFile << "  " << y[i] << "  " << x[i] << "  " << xe[i] << endl;
}

gr2 = new TGraphErrors (n-7,y,x,ye,xe);

gr2->SetTitle("MC Jets Calibration 3.284 < |#eta| < 4.000");
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
gr2->GetXaxis()->SetRangeUser(10.,400.);
gr2->Draw("AP");


l = new TLine(8.0,1.0,300.,1.0);
l->SetLineStyle(2);
l->Draw();

c2hA.Print("CorrResponse_14.eps");
c2hA.Print("CorrResponse_14.gif");

}
