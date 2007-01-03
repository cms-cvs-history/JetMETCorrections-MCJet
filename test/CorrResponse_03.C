{
gROOT->Reset();

gStyle->SetPalette(1);
gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

gStyle->SetCanvasColor(10);
gStyle->SetFrameFillColor(10);


TFile f("../../CorrectedJetResponseMidPoint_R05_all.root");

JetResponseEt10Eta13->Add(JetResponseEt10Eta18,1);
JetResponseEt12Eta13->Add(JetResponseEt12Eta18,1);
JetResponseEt15Eta13->Add(JetResponseEt15Eta18,1);
JetResponseEt20Eta13->Add(JetResponseEt20Eta18,1);
JetResponseEt27Eta13->Add(JetResponseEt27Eta18,1);
JetResponseEt35Eta13->Add(JetResponseEt35Eta18,1);
JetResponseEt45Eta13->Add(JetResponseEt45Eta18,1);
JetResponseEt57Eta13->Add(JetResponseEt57Eta18,1);
JetResponseEt72Eta13->Add(JetResponseEt72Eta18,1);
JetResponseEt90Eta13->Add(JetResponseEt90Eta18,1);
JetResponseEt120Eta13->Add(JetResponseEt120Eta18,1);
JetResponseEt150Eta13->Add(JetResponseEt150Eta18,1);
JetResponseEt200Eta13->Add(JetResponseEt200Eta18,1);
JetResponseEt300Eta13->Add(JetResponseEt300Eta18,1);
JetResponseEt400Eta13->Add(JetResponseEt400Eta18,1);
JetResponseEt550Eta13->Add(JetResponseEt550Eta18,1);
JetResponseEt750Eta13->Add(JetResponseEt750Eta18,1);
JetResponseEt1000Eta13->Add(JetResponseEt1000Eta18,1);
JetResponseEt1400Eta13->Add(JetResponseEt1400Eta18,1);
JetResponseEt2000Eta13->Add(JetResponseEt2000Eta18,1);
JetResponseEt2900Eta13->Add(JetResponseEt2900Eta18,1);
JetResponseEt4500Eta13->Add(JetResponseEt4500Eta18,1);

EtGenJetEt10Eta13->Add(EtGenJetEt10Eta18,1);
EtGenJetEt12Eta13->Add(EtGenJetEt12Eta18,1);
EtGenJetEt15Eta13->Add(EtGenJetEt15Eta18,1);
EtGenJetEt20Eta13->Add(EtGenJetEt20Eta18,1);
EtGenJetEt27Eta13->Add(EtGenJetEt27Eta18,1);
EtGenJetEt35Eta13->Add(EtGenJetEt35Eta18,1);
EtGenJetEt45Eta13->Add(EtGenJetEt45Eta18,1);
EtGenJetEt57Eta13->Add(EtGenJetEt57Eta18,1);
EtGenJetEt72Eta13->Add(EtGenJetEt72Eta18,1);
EtGenJetEt90Eta13->Add(EtGenJetEt90Eta18,1);
EtGenJetEt120Eta13->Add(EtGenJetEt120Eta18,1);
EtGenJetEt150Eta13->Add(EtGenJetEt150Eta18,1);
EtGenJetEt200Eta13->Add(EtGenJetEt200Eta18,1);
EtGenJetEt300Eta13->Add(EtGenJetEt300Eta18,1);
EtGenJetEt400Eta13->Add(EtGenJetEt400Eta18,1);
EtGenJetEt550Eta13->Add(EtGenJetEt550Eta18,1);
EtGenJetEt750Eta13->Add(EtGenJetEt750Eta18,1);
EtGenJetEt1000Eta13->Add(EtGenJetEt1000Eta18,1);
EtGenJetEt1400Eta13->Add(EtGenJetEt1400Eta18,1);
EtGenJetEt2000Eta13->Add(EtGenJetEt2000Eta18,1);
EtGenJetEt2900Eta13->Add(EtGenJetEt2900Eta18,1);
EtGenJetEt4500Eta13->Add(EtGenJetEt4500Eta18,1);


Int_t n = 21;

TF1 *fit[n];
 
JetResponseEt10Eta13->Fit("gaus","","",0.5,1.5);
c1.Print("tmp/JetResponseEt10Eta13.gif");
fit[0] = JetResponseEt10Eta13->GetFunction("gaus");
 
JetResponseEt12Eta13->Fit("gaus","","",0.6,1.4);
c1.Print("tmp/JetResponseEt12Eta13.gif");
fit[1] = JetResponseEt12Eta13->GetFunction("gaus");
 
JetResponseEt15Eta13->Fit("gaus","","",0.7,1.3);
c1.Print("tmp/JetResponseEt15Eta13.gif");
fit[2] = JetResponseEt15Eta13->GetFunction("gaus");
 
JetResponseEt20Eta13->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt20Eta13.gif");
fit[3] = JetResponseEt20Eta13->GetFunction("gaus");
 
JetResponseEt27Eta13->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt27Eta13.gif");
fit[4] = JetResponseEt27Eta13->GetFunction("gaus");
 
JetResponseEt35Eta13->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt35Eta13.gif");
fit[5] = JetResponseEt35Eta13->GetFunction("gaus");
                                                                                
JetResponseEt45Eta13->Fit("gaus","","",0.81,1.19);
c1.Print("tmp/JetResponseEt45Eta13.gif");
fit[6] = JetResponseEt45Eta13->GetFunction("gaus");
 
JetResponseEt57Eta13->Fit("gaus","","",0.82,1.18);
c1.Print("tmp/JetResponseEt57Eta13.gif");
fit[7] = JetResponseEt57Eta13->GetFunction("gaus");

JetResponseEt72Eta13->Fit("gaus","","",0.84,1.16);
c1.Print("tmp/JetResponseEt72Eta13.gif");
fit[8] = JetResponseEt72Eta13->GetFunction("gaus");

JetResponseEt90Eta13->Fit("gaus","","",0.85,1.15);
c1.Print("tmp/JetResponseEt90Eta13.gif");
fit[9] = JetResponseEt90Eta13->GetFunction("gaus");

JetResponseEt120Eta13->Fit("gaus","","",0.87,1.13);
c1.Print("tmp/JetResponseEt120Eta13.gif");
fit[10] = JetResponseEt120Eta13->GetFunction("gaus");

JetResponseEt150Eta13->Fit("gaus","","",0.88,1.12);
c1.Print("tmp/JetResponseEt150Eta13.gif");
fit[11] = JetResponseEt150Eta13->GetFunction("gaus");

JetResponseEt200Eta13->Fit("gaus","","",0.88,1.12);
c1.Print("tmp/JetResponseEt200Eta13.gif");
fit[12] = JetResponseEt200Eta13->GetFunction("gaus");

JetResponseEt300Eta13->Fit("gaus","","",0.90,1.10);
c1.Print("tmp/JetResponseEt300Eta13.gif");
fit[13] = JetResponseEt300Eta13->GetFunction("gaus");

JetResponseEt400Eta13->Fit("gaus","","",0.92,1.08);
c1.Print("tmp/JetResponseEt400Eta13.gif");
fit[14] = JetResponseEt400Eta13->GetFunction("gaus");

JetResponseEt550Eta13->Fit("gaus","","",0.93,1.07);
c1.Print("tmp/JetResponseEt550Eta13.gif");
fit[15] = JetResponseEt550Eta13->GetFunction("gaus");

JetResponseEt750Eta13->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt750Eta13.gif");
fit[16] = JetResponseEt750Eta13->GetFunction("gaus");

JetResponseEt1000Eta13->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt1000Eta13.gif");
fit[17] = JetResponseEt1000Eta13->GetFunction("gaus");

JetResponseEt1400Eta13->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt1400Eta13.gif");
fit[18] = JetResponseEt1400Eta13->GetFunction("gaus");

JetResponseEt2000Eta13->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt2000Eta13.gif");
fit[19] = JetResponseEt2000Eta13->GetFunction("gaus");

JetResponseEt2900Eta13->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt2900Eta13.gif");
fit[20] = JetResponseEt2900Eta13->GetFunction("gaus");

//JetResponseEt4500Eta13->Fit("gaus");
//fit[21] = JetResponseEt4500Eta13->GetFunction("gaus");

Double_t x[n], y[n], xe[n], ye[n];

xe[0]=fit[0]->GetParameter(2) / sqrt(JetResponseEt10Eta13->GetEntries());
xe[1]=fit[1]->GetParameter(2) / sqrt(JetResponseEt12Eta13->GetEntries());
xe[2]=fit[2]->GetParameter(2) / sqrt(JetResponseEt15Eta13->GetEntries());
xe[3]=fit[3]->GetParameter(2) / sqrt(JetResponseEt20Eta13->GetEntries());
xe[4]=fit[4]->GetParameter(2) / sqrt(JetResponseEt27Eta13->GetEntries());
xe[5]=fit[5]->GetParameter(2) / sqrt(JetResponseEt35Eta13->GetEntries());
xe[6]=fit[6]->GetParameter(2) / sqrt(JetResponseEt45Eta13->GetEntries());
xe[7]=fit[7]->GetParameter(2) / sqrt(JetResponseEt57Eta13->GetEntries());
xe[8]=fit[8]->GetParameter(2) / sqrt(JetResponseEt72Eta13->GetEntries());
xe[9]=fit[9]->GetParameter(2) / sqrt(JetResponseEt90Eta13->GetEntries());
xe[10]=fit[10]->GetParameter(2) / sqrt(JetResponseEt120Eta13->GetEntries());
xe[11]=fit[11]->GetParameter(2) / sqrt(JetResponseEt150Eta13->GetEntries());
xe[12]=fit[12]->GetParameter(2) / sqrt(JetResponseEt200Eta13->GetEntries());
xe[13]=fit[13]->GetParameter(2) / sqrt(JetResponseEt300Eta13->GetEntries());
xe[14]=fit[14]->GetParameter(2) / sqrt(JetResponseEt400Eta13->GetEntries());
xe[15]=fit[15]->GetParameter(2) / sqrt(JetResponseEt550Eta13->GetEntries());
xe[16]=fit[16]->GetParameter(2) / sqrt(JetResponseEt750Eta13->GetEntries());
xe[17]=fit[17]->GetParameter(2) / sqrt(JetResponseEt1000Eta13->GetEntries());
xe[18]=fit[18]->GetParameter(2) / sqrt(JetResponseEt1400Eta13->GetEntries());
xe[19]=fit[19]->GetParameter(2) / sqrt(JetResponseEt2000Eta13->GetEntries());
xe[20]=fit[20]->GetParameter(2) / sqrt(JetResponseEt2900Eta13->GetEntries());
//xe[21]=fit[21]->GetParameter(2) / sqrt(JetResponseEt4500Eta13->GetEntries());

for (Int_t igogo=0; igogo<n; igogo++){
 x[igogo]=fit[igogo]->GetParameter(1);
 xe[igogo]=fit[igogo]->GetParError(1);
}

for (Int_t igogo=0; igogo<n; igogo++){
 cout<<"   "<< xe[igogo] << endl; 
}

 cout<< endl;
 cout<<"  0  "<< x[0] << "  " << JetResponseEt10Eta13->GetEntries() << "  " <<  EtGenJetEt10Eta13->GetMean() << endl;
 cout<<"  1  "<< x[1] << "  " << JetResponseEt12Eta13->GetEntries() << "  " <<  EtGenJetEt12Eta13->GetMean() << endl;
 cout<<"  2  "<< x[2] << "  " << JetResponseEt15Eta13->GetEntries() << "  " <<  EtGenJetEt15Eta13->GetMean()  << endl;
 cout<<"  3  "<< x[3] << "  " << JetResponseEt20Eta13->GetEntries() << "  " <<  EtGenJetEt20Eta13->GetMean()  << endl;
 cout<<"  4  "<< x[4] << "  " << JetResponseEt27Eta13->GetEntries() << "  " <<  EtGenJetEt27Eta13->GetMean()  << endl;
 cout<<"  5  "<< x[5] << "  " << JetResponseEt35Eta13->GetEntries() << "  " <<  EtGenJetEt35Eta13->GetMean()  << endl;
 cout<<"  6  "<< x[6] << "  " << JetResponseEt45Eta13->GetEntries() << "  " <<  EtGenJetEt45Eta13->GetMean()  << endl;
 cout<<"  7  "<< x[7] << "  " << JetResponseEt57Eta13->GetEntries() << "  " <<  EtGenJetEt57Eta13->GetMean()  << endl;
 cout<<"  8  "<< x[8] << "  " << JetResponseEt72Eta13->GetEntries() << "  " <<  EtGenJetEt72Eta13->GetMean()  << endl;
 cout<<"  9  "<< x[9] << "  " << JetResponseEt90Eta13->GetEntries()  << "  " <<  EtGenJetEt90Eta13->GetMean() << endl;
 cout<<" 10  "<< x[10] << "  " << JetResponseEt120Eta13->GetEntries()  << "  " <<  EtGenJetEt120Eta13->GetMean() << endl;
 cout<<" 11  "<< x[11] << "  " << JetResponseEt150Eta13->GetEntries()  << "  " <<  EtGenJetEt150Eta13->GetMean() << endl;
 cout<<" 12  "<< x[12] << "  " << JetResponseEt200Eta13->GetEntries() << "  " <<  EtGenJetEt200Eta13->GetMean()  << endl;
 cout<<" 13  "<< x[13] << "  " << JetResponseEt300Eta13->GetEntries()  << "  " <<  EtGenJetEt300Eta13->GetMean() << endl;
 cout<<" 14  "<< x[14] << "  " << JetResponseEt400Eta13->GetEntries()  << "  " <<  EtGenJetEt400Eta13->GetMean() << endl;
 cout<<" 15  "<< x[15] << "  " << JetResponseEt550Eta13->GetEntries()  << "  " <<  EtGenJetEt550Eta13->GetMean() << endl;
 cout<<" 16  "<< x[16] << "  " << JetResponseEt750Eta13->GetEntries()  << "  " <<  EtGenJetEt750Eta13->GetMean() << endl;
 cout<<" 17  "<< x[17] << "  " << JetResponseEt1000Eta13->GetEntries()  << "  " <<  EtGenJetEt1000Eta13->GetMean() << endl;
 cout<<" 18  "<< x[18] << "  " << JetResponseEt1400Eta13->GetEntries()  << "  " <<  EtGenJetEt1400Eta13->GetMean() << endl;
 cout<<" 19  "<< x[19] << "  " << JetResponseEt2000Eta13->GetEntries()  << "  " <<  EtGenJetEt2000Eta13->GetMean() << endl;
 cout<<" 20  "<< x[20] << "  " << JetResponseEt2900Eta13->GetEntries()  << "  " <<  EtGenJetEt2900Eta13->GetMean() << endl;
// cout<<" 21 "<< x[21] << "  " << JetResponseEt27Eta13->GetEntries() << endl;
 cout<< endl;


y[0]=EtGenJetEt10Eta13->GetMean();
y[1]=EtGenJetEt12Eta13->GetMean();
y[2]=EtGenJetEt15Eta13->GetMean();
y[3]=EtGenJetEt20Eta13->GetMean();
y[4]=EtGenJetEt27Eta13->GetMean();
y[5]=EtGenJetEt35Eta13->GetMean();
y[6]=EtGenJetEt45Eta13->GetMean();
y[7]=EtGenJetEt57Eta13->GetMean();
y[8]=EtGenJetEt72Eta13->GetMean();
y[9]=EtGenJetEt90Eta13->GetMean();
y[10]=EtGenJetEt120Eta13->GetMean();
y[11]=EtGenJetEt150Eta13->GetMean();
y[12]=EtGenJetEt200Eta13->GetMean();
y[13]=EtGenJetEt300Eta13->GetMean();
y[14]=EtGenJetEt400Eta13->GetMean();
y[15]=EtGenJetEt550Eta13->GetMean();
y[16]=EtGenJetEt750Eta13->GetMean();
y[17]=EtGenJetEt1000Eta13->GetMean();
y[18]=EtGenJetEt1400Eta13->GetMean();
y[19]=EtGenJetEt2000Eta13->GetMean();
y[20]=EtGenJetEt2900Eta13->GetMean();
//y[20]=EtGenJetEt4500Eta13->GetMean();

ye[0]=EtGenJetEt10Eta13->GetRMS() / sqrt(EtGenJetEt10Eta13->GetEntries());
ye[1]=EtGenJetEt12Eta13->GetRMS() / sqrt(EtGenJetEt12Eta13->GetEntries());
ye[2]=EtGenJetEt15Eta13->GetRMS() / sqrt(EtGenJetEt15Eta13->GetEntries());
ye[3]=EtGenJetEt20Eta13->GetRMS() / sqrt(EtGenJetEt20Eta13->GetEntries());
ye[4]=EtGenJetEt27Eta13->GetRMS() / sqrt(EtGenJetEt27Eta13->GetEntries());
ye[5]=EtGenJetEt35Eta13->GetRMS() / sqrt(EtGenJetEt35Eta13->GetEntries());
ye[6]=EtGenJetEt45Eta13->GetRMS() / sqrt(EtGenJetEt45Eta13->GetEntries());
ye[7]=EtGenJetEt57Eta13->GetRMS() / sqrt(EtGenJetEt57Eta13->GetEntries());
ye[8]=EtGenJetEt72Eta13->GetRMS() / sqrt(EtGenJetEt72Eta13->GetEntries());
ye[9]=EtGenJetEt90Eta13->GetRMS() / sqrt(EtGenJetEt90Eta13->GetEntries());
ye[10]=EtGenJetEt120Eta13->GetRMS() / sqrt(EtGenJetEt120Eta13->GetEntries());
ye[11]=EtGenJetEt150Eta13->GetRMS() / sqrt(EtGenJetEt150Eta13->GetEntries());
ye[12]=EtGenJetEt200Eta13->GetRMS() / sqrt(EtGenJetEt200Eta13->GetEntries());
ye[13]=EtGenJetEt300Eta13->GetRMS() / sqrt(EtGenJetEt300Eta13->GetEntries());
ye[14]=EtGenJetEt400Eta13->GetRMS() / sqrt(EtGenJetEt400Eta13->GetEntries());
ye[15]=EtGenJetEt550Eta13->GetRMS() / sqrt(EtGenJetEt550Eta13->GetEntries());
ye[16]=EtGenJetEt750Eta13->GetRMS() / sqrt(EtGenJetEt750Eta13->GetEntries());
ye[17]=EtGenJetEt1000Eta13->GetRMS() / sqrt(EtGenJetEt1000Eta13->GetEntries());
ye[18]=EtGenJetEt1400Eta13->GetRMS() / sqrt(EtGenJetEt1400Eta13->GetEntries());
ye[19]=EtGenJetEt2000Eta13->GetRMS() / sqrt(EtGenJetEt2000Eta13->GetEntries());
ye[20]=EtGenJetEt2900Eta13->GetRMS() / sqrt(EtGenJetEt2900Eta13->GetEntries());
//ye[21]=EtGenJetEt4500Eta13->GetRMS() / sqrt(EtGenJetEt4500Eta13->GetEntries());

ofstream outFile("CorrResponse_03.dat");
for (Int_t i=0; i<n; i++){
  outFile << "  " << y[i] << "  " << x[i] << "  " << xe[i] << endl;
}

gr2 = new TGraphErrors (n,y,x,ye,xe);

gr2->SetTitle("MC Jets Calibration 0.441 < | #eta | < 0.751");
gr2->SetMarkerStyle(20);
gr2->SetMarkerSize(1.3);
gr2->SetMarkerColor(1);


TCanvas c2hA("c2hA"," ",10,10,800,600);
Int_t cancolor = 10;
c2hA.SetFillColor(cancolor);
c2hA->SetLogx();
gPad->SetTicks(1,1);
gr2->SetMaximum(1.15);
gr2->SetMinimum(0.95);
gr2->GetYaxis()->SetTitle("Corrected Jet Response");
//gr2->GetYaxis()->SetTitleOffset(1.1);
gr2->GetYaxis()->SetTitleSize(0.05);
gr2->GetXaxis()->SetTitle("Gen Jet E_{T} (GeV)");
gr2->GetXaxis()->SetTitleOffset(1.2);
gr2->GetXaxis()->SetRangeUser(10.,4000.);
gr2->Draw("AP");


l = new TLine(10,1.0,3500,1.0);
l->SetLineStyle(2);
l->Draw();

c2hA.Print("CorrResponse_03.eps");
c2hA.Print("CorrResponse_03.gif");

}
