{
gROOT->Reset();

gStyle->SetPalette(1);
gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

gStyle->SetCanvasColor(10);
gStyle->SetFrameFillColor(10);


TFile f("../../CorrectedJetResponseMidPoint_R05_all.root");

JetResponseEt10Eta9->Add(JetResponseEt10Eta22,1);
JetResponseEt12Eta9->Add(JetResponseEt12Eta22,1);
JetResponseEt15Eta9->Add(JetResponseEt15Eta22,1);
JetResponseEt20Eta9->Add(JetResponseEt20Eta22,1);
JetResponseEt27Eta9->Add(JetResponseEt27Eta22,1);
JetResponseEt35Eta9->Add(JetResponseEt35Eta22,1);
JetResponseEt45Eta9->Add(JetResponseEt45Eta22,1);
JetResponseEt57Eta9->Add(JetResponseEt57Eta22,1);
JetResponseEt72Eta9->Add(JetResponseEt72Eta22,1);
JetResponseEt90Eta9->Add(JetResponseEt90Eta22,1);
JetResponseEt120Eta9->Add(JetResponseEt120Eta22,1);
JetResponseEt150Eta9->Add(JetResponseEt150Eta22,1);
JetResponseEt200Eta9->Add(JetResponseEt200Eta22,1);
JetResponseEt300Eta9->Add(JetResponseEt300Eta22,1);
JetResponseEt400Eta9->Add(JetResponseEt400Eta22,1);
JetResponseEt550Eta9->Add(JetResponseEt550Eta22,1);
JetResponseEt750Eta9->Add(JetResponseEt750Eta22,1);
JetResponseEt1000Eta9->Add(JetResponseEt1000Eta22,1);
JetResponseEt1400Eta9->Add(JetResponseEt1400Eta22,1);
JetResponseEt2000Eta9->Add(JetResponseEt2000Eta22,1);
JetResponseEt2900Eta9->Add(JetResponseEt2900Eta22,1);
JetResponseEt4500Eta9->Add(JetResponseEt4500Eta22,1);

EtGenJetEt10Eta9->Add(EtGenJetEt10Eta22,1);
EtGenJetEt12Eta9->Add(EtGenJetEt12Eta22,1);
EtGenJetEt15Eta9->Add(EtGenJetEt15Eta22,1);
EtGenJetEt20Eta9->Add(EtGenJetEt20Eta22,1);
EtGenJetEt27Eta9->Add(EtGenJetEt27Eta22,1);
EtGenJetEt35Eta9->Add(EtGenJetEt35Eta22,1);
EtGenJetEt45Eta9->Add(EtGenJetEt45Eta22,1);
EtGenJetEt57Eta9->Add(EtGenJetEt57Eta22,1);
EtGenJetEt72Eta9->Add(EtGenJetEt72Eta22,1);
EtGenJetEt90Eta9->Add(EtGenJetEt90Eta22,1);
EtGenJetEt120Eta9->Add(EtGenJetEt120Eta22,1);
EtGenJetEt150Eta9->Add(EtGenJetEt150Eta22,1);
EtGenJetEt200Eta9->Add(EtGenJetEt200Eta22,1);
EtGenJetEt300Eta9->Add(EtGenJetEt300Eta22,1);
EtGenJetEt400Eta9->Add(EtGenJetEt400Eta22,1);
EtGenJetEt550Eta9->Add(EtGenJetEt550Eta22,1);
EtGenJetEt750Eta9->Add(EtGenJetEt750Eta22,1);
EtGenJetEt1000Eta9->Add(EtGenJetEt1000Eta22,1);
EtGenJetEt1400Eta9->Add(EtGenJetEt1400Eta22,1);
EtGenJetEt2000Eta9->Add(EtGenJetEt2000Eta22,1);
EtGenJetEt2900Eta9->Add(EtGenJetEt2900Eta22,1);
EtGenJetEt4500Eta9->Add(EtGenJetEt4500Eta22,1);


Int_t n = 21;

TF1 *fit[n];
 
JetResponseEt10Eta9->Fit("gaus","","",0.5,1.5);
c1.Print("tmp/JetResponseEt10Eta9.gif");
fit[0] = JetResponseEt10Eta9->GetFunction("gaus");
 
JetResponseEt12Eta9->Fit("gaus","","",0.6,1.4);
c1.Print("tmp/JetResponseEt12Eta9.gif");
fit[1] = JetResponseEt12Eta9->GetFunction("gaus");
 
JetResponseEt15Eta9->Fit("gaus","","",0.7,1.3);
c1.Print("tmp/JetResponseEt15Eta9.gif");
fit[2] = JetResponseEt15Eta9->GetFunction("gaus");
 
JetResponseEt20Eta9->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt20Eta9.gif");
fit[3] = JetResponseEt20Eta9->GetFunction("gaus");
 
JetResponseEt27Eta9->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt27Eta9.gif");
fit[4] = JetResponseEt27Eta9->GetFunction("gaus");
 
JetResponseEt35Eta9->Fit("gaus","","",0.8,1.2);
c1.Print("tmp/JetResponseEt35Eta9.gif");
fit[5] = JetResponseEt35Eta9->GetFunction("gaus");
                                                                                
JetResponseEt45Eta9->Fit("gaus","","",0.81,1.19);
c1.Print("tmp/JetResponseEt45Eta9.gif");
fit[6] = JetResponseEt45Eta9->GetFunction("gaus");
 
JetResponseEt57Eta9->Fit("gaus","","",0.82,1.18);
c1.Print("tmp/JetResponseEt57Eta9.gif");
fit[7] = JetResponseEt57Eta9->GetFunction("gaus");

JetResponseEt72Eta9->Fit("gaus","","",0.84,1.16);
c1.Print("tmp/JetResponseEt72Eta9.gif");
fit[8] = JetResponseEt72Eta9->GetFunction("gaus");

JetResponseEt90Eta9->Fit("gaus","","",0.85,1.15);
c1.Print("tmp/JetResponseEt90Eta9.gif");
fit[9] = JetResponseEt90Eta9->GetFunction("gaus");

JetResponseEt120Eta9->Fit("gaus","","",0.87,1.13);
c1.Print("tmp/JetResponseEt120Eta9.gif");
fit[10] = JetResponseEt120Eta9->GetFunction("gaus");

JetResponseEt150Eta9->Fit("gaus","","",0.88,1.12);
c1.Print("tmp/JetResponseEt150Eta9.gif");
fit[11] = JetResponseEt150Eta9->GetFunction("gaus");

JetResponseEt200Eta9->Fit("gaus","","",0.88,1.12);
c1.Print("tmp/JetResponseEt200Eta9.gif");
fit[12] = JetResponseEt200Eta9->GetFunction("gaus");

JetResponseEt300Eta9->Fit("gaus","","",0.90,1.10);
c1.Print("tmp/JetResponseEt300Eta9.gif");
fit[13] = JetResponseEt300Eta9->GetFunction("gaus");

JetResponseEt400Eta9->Fit("gaus","","",0.92,1.08);
c1.Print("tmp/JetResponseEt400Eta9.gif");
fit[14] = JetResponseEt400Eta9->GetFunction("gaus");

JetResponseEt550Eta9->Fit("gaus","","",0.93,1.07);
c1.Print("tmp/JetResponseEt550Eta9.gif");
fit[15] = JetResponseEt550Eta9->GetFunction("gaus");

JetResponseEt750Eta9->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt750Eta9.gif");
fit[16] = JetResponseEt750Eta9->GetFunction("gaus");

JetResponseEt1000Eta9->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt1000Eta9.gif");
fit[17] = JetResponseEt1000Eta9->GetFunction("gaus");

JetResponseEt1400Eta9->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt1400Eta9.gif");
fit[18] = JetResponseEt1400Eta9->GetFunction("gaus");

JetResponseEt2000Eta9->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt2000Eta9.gif");
fit[19] = JetResponseEt2000Eta9->GetFunction("gaus");

JetResponseEt2900Eta9->Fit("gaus","","",0.94,1.06);
c1.Print("tmp/JetResponseEt2900Eta9.gif");
fit[20] = JetResponseEt2900Eta9->GetFunction("gaus");

//JetResponseEt4500Eta9->Fit("gaus");
//fit[21] = JetResponseEt4500Eta9->GetFunction("gaus");

Double_t x[n], y[n], xe[n], ye[n];

xe[0]=fit[0]->GetParameter(2) / sqrt(JetResponseEt10Eta9->GetEntries());
xe[1]=fit[1]->GetParameter(2) / sqrt(JetResponseEt12Eta9->GetEntries());
xe[2]=fit[2]->GetParameter(2) / sqrt(JetResponseEt15Eta9->GetEntries());
xe[3]=fit[3]->GetParameter(2) / sqrt(JetResponseEt20Eta9->GetEntries());
xe[4]=fit[4]->GetParameter(2) / sqrt(JetResponseEt27Eta9->GetEntries());
xe[5]=fit[5]->GetParameter(2) / sqrt(JetResponseEt35Eta9->GetEntries());
xe[6]=fit[6]->GetParameter(2) / sqrt(JetResponseEt45Eta9->GetEntries());
xe[7]=fit[7]->GetParameter(2) / sqrt(JetResponseEt57Eta9->GetEntries());
xe[8]=fit[8]->GetParameter(2) / sqrt(JetResponseEt72Eta9->GetEntries());
xe[9]=fit[9]->GetParameter(2) / sqrt(JetResponseEt90Eta9->GetEntries());
xe[10]=fit[10]->GetParameter(2) / sqrt(JetResponseEt120Eta9->GetEntries());
xe[11]=fit[11]->GetParameter(2) / sqrt(JetResponseEt150Eta9->GetEntries());
xe[12]=fit[12]->GetParameter(2) / sqrt(JetResponseEt200Eta9->GetEntries());
xe[13]=fit[13]->GetParameter(2) / sqrt(JetResponseEt300Eta9->GetEntries());
xe[14]=fit[14]->GetParameter(2) / sqrt(JetResponseEt400Eta9->GetEntries());
xe[15]=fit[15]->GetParameter(2) / sqrt(JetResponseEt550Eta9->GetEntries());
xe[16]=fit[16]->GetParameter(2) / sqrt(JetResponseEt750Eta9->GetEntries());
xe[17]=fit[17]->GetParameter(2) / sqrt(JetResponseEt1000Eta9->GetEntries());
xe[18]=fit[18]->GetParameter(2) / sqrt(JetResponseEt1400Eta9->GetEntries());
xe[19]=fit[19]->GetParameter(2) / sqrt(JetResponseEt2000Eta9->GetEntries());
//xe[20]=fit[20]->GetParameter(2) / sqrt(JetResponseEt2900Eta9->GetEntries());
//xe[21]=fit[21]->GetParameter(2) / sqrt(JetResponseEt4500Eta9->GetEntries());

for (Int_t igogo=0; igogo<n; igogo++){
 x[igogo]=fit[igogo]->GetParameter(1);
 xe[igogo]=fit[igogo]->GetParError(1);
}

for (Int_t igogo=0; igogo<n; igogo++){
 cout<<"   "<< xe[igogo] << endl; 
}

 cout<< endl;
 cout<<"  0  "<< x[0] << "  " << JetResponseEt10Eta9->GetEntries() << "  " <<  EtGenJetEt10Eta9->GetMean() << endl;
 cout<<"  1  "<< x[1] << "  " << JetResponseEt12Eta9->GetEntries() << "  " <<  EtGenJetEt12Eta9->GetMean() << endl;
 cout<<"  2  "<< x[2] << "  " << JetResponseEt15Eta9->GetEntries() << "  " <<  EtGenJetEt15Eta9->GetMean()  << endl;
 cout<<"  3  "<< x[3] << "  " << JetResponseEt20Eta9->GetEntries() << "  " <<  EtGenJetEt20Eta9->GetMean()  << endl;
 cout<<"  4  "<< x[4] << "  " << JetResponseEt27Eta9->GetEntries() << "  " <<  EtGenJetEt27Eta9->GetMean()  << endl;
 cout<<"  5  "<< x[5] << "  " << JetResponseEt35Eta9->GetEntries() << "  " <<  EtGenJetEt35Eta9->GetMean()  << endl;
 cout<<"  6  "<< x[6] << "  " << JetResponseEt45Eta9->GetEntries() << "  " <<  EtGenJetEt45Eta9->GetMean()  << endl;
 cout<<"  7  "<< x[7] << "  " << JetResponseEt57Eta9->GetEntries() << "  " <<  EtGenJetEt57Eta9->GetMean()  << endl;
 cout<<"  8  "<< x[8] << "  " << JetResponseEt72Eta9->GetEntries() << "  " <<  EtGenJetEt72Eta9->GetMean()  << endl;
 cout<<"  9  "<< x[9] << "  " << JetResponseEt90Eta9->GetEntries()  << "  " <<  EtGenJetEt90Eta9->GetMean() << endl;
 cout<<" 10  "<< x[10] << "  " << JetResponseEt120Eta9->GetEntries()  << "  " <<  EtGenJetEt120Eta9->GetMean() << endl;
 cout<<" 11  "<< x[11] << "  " << JetResponseEt150Eta9->GetEntries()  << "  " <<  EtGenJetEt150Eta9->GetMean() << endl;
 cout<<" 12  "<< x[12] << "  " << JetResponseEt200Eta9->GetEntries() << "  " <<  EtGenJetEt200Eta9->GetMean()  << endl;
 cout<<" 13  "<< x[13] << "  " << JetResponseEt300Eta9->GetEntries()  << "  " <<  EtGenJetEt300Eta9->GetMean() << endl;
 cout<<" 14  "<< x[14] << "  " << JetResponseEt400Eta9->GetEntries()  << "  " <<  EtGenJetEt400Eta9->GetMean() << endl;
 cout<<" 15  "<< x[15] << "  " << JetResponseEt550Eta9->GetEntries()  << "  " <<  EtGenJetEt550Eta9->GetMean() << endl;
 cout<<" 16  "<< x[16] << "  " << JetResponseEt750Eta9->GetEntries()  << "  " <<  EtGenJetEt750Eta9->GetMean() << endl;
 cout<<" 17  "<< x[17] << "  " << JetResponseEt1000Eta9->GetEntries()  << "  " <<  EtGenJetEt1000Eta9->GetMean() << endl;
 cout<<" 18  "<< x[18] << "  " << JetResponseEt1400Eta9->GetEntries()  << "  " <<  EtGenJetEt1400Eta9->GetMean() << endl;
 cout<<" 19  "<< x[19] << "  " << JetResponseEt2000Eta9->GetEntries()  << "  " <<  EtGenJetEt2000Eta9->GetMean() << endl;
 cout<<" 20  "<< x[20] << "  " << JetResponseEt2900Eta9->GetEntries()  << "  " <<  EtGenJetEt2900Eta9->GetMean() << endl;
// cout<<" 21 "<< x[21] << "  " << JetResponseEt27Eta9->GetEntries() << endl;
 cout<< endl;


y[0]=EtGenJetEt10Eta9->GetMean();
y[1]=EtGenJetEt12Eta9->GetMean();
y[2]=EtGenJetEt15Eta9->GetMean();
y[3]=EtGenJetEt20Eta9->GetMean();
y[4]=EtGenJetEt27Eta9->GetMean();
y[5]=EtGenJetEt35Eta9->GetMean();
y[6]=EtGenJetEt45Eta9->GetMean();
y[7]=EtGenJetEt57Eta9->GetMean();
y[8]=EtGenJetEt72Eta9->GetMean();
y[9]=EtGenJetEt90Eta9->GetMean();
y[10]=EtGenJetEt120Eta9->GetMean();
y[11]=EtGenJetEt150Eta9->GetMean();
y[12]=EtGenJetEt200Eta9->GetMean();
y[13]=EtGenJetEt300Eta9->GetMean();
y[14]=EtGenJetEt400Eta9->GetMean();
y[15]=EtGenJetEt550Eta9->GetMean();
y[16]=EtGenJetEt750Eta9->GetMean();
y[17]=EtGenJetEt1000Eta9->GetMean();
y[18]=EtGenJetEt1400Eta9->GetMean();
y[19]=EtGenJetEt2000Eta9->GetMean();
y[20]=EtGenJetEt2900Eta9->GetMean();
//y[20]=EtGenJetEt4500Eta9->GetMean();

ye[0]=EtGenJetEt10Eta9->GetRMS() / sqrt(EtGenJetEt10Eta9->GetEntries());
ye[1]=EtGenJetEt12Eta9->GetRMS() / sqrt(EtGenJetEt12Eta9->GetEntries());
ye[2]=EtGenJetEt15Eta9->GetRMS() / sqrt(EtGenJetEt15Eta9->GetEntries());
ye[3]=EtGenJetEt20Eta9->GetRMS() / sqrt(EtGenJetEt20Eta9->GetEntries());
ye[4]=EtGenJetEt27Eta9->GetRMS() / sqrt(EtGenJetEt27Eta9->GetEntries());
ye[5]=EtGenJetEt35Eta9->GetRMS() / sqrt(EtGenJetEt35Eta9->GetEntries());
ye[6]=EtGenJetEt45Eta9->GetRMS() / sqrt(EtGenJetEt45Eta9->GetEntries());
ye[7]=EtGenJetEt57Eta9->GetRMS() / sqrt(EtGenJetEt57Eta9->GetEntries());
ye[8]=EtGenJetEt72Eta9->GetRMS() / sqrt(EtGenJetEt72Eta9->GetEntries());
ye[9]=EtGenJetEt90Eta9->GetRMS() / sqrt(EtGenJetEt90Eta9->GetEntries());
ye[10]=EtGenJetEt120Eta9->GetRMS() / sqrt(EtGenJetEt120Eta9->GetEntries());
ye[11]=EtGenJetEt150Eta9->GetRMS() / sqrt(EtGenJetEt150Eta9->GetEntries());
ye[12]=EtGenJetEt200Eta9->GetRMS() / sqrt(EtGenJetEt200Eta9->GetEntries());
ye[13]=EtGenJetEt300Eta9->GetRMS() / sqrt(EtGenJetEt300Eta9->GetEntries());
ye[14]=EtGenJetEt400Eta9->GetRMS() / sqrt(EtGenJetEt400Eta9->GetEntries());
ye[15]=EtGenJetEt550Eta9->GetRMS() / sqrt(EtGenJetEt550Eta9->GetEntries());
ye[16]=EtGenJetEt750Eta9->GetRMS() / sqrt(EtGenJetEt750Eta9->GetEntries());
ye[17]=EtGenJetEt1000Eta9->GetRMS() / sqrt(EtGenJetEt1000Eta9->GetEntries());
ye[18]=EtGenJetEt1400Eta9->GetRMS() / sqrt(EtGenJetEt1400Eta9->GetEntries());
ye[19]=EtGenJetEt2000Eta9->GetRMS() / sqrt(EtGenJetEt2000Eta9->GetEntries());
//ye[20]=EtGenJetEt2900Eta9->GetRMS() / sqrt(EtGenJetEt2900Eta9->GetEntries());
//ye[21]=EtGenJetEt4500Eta9->GetRMS() / sqrt(EtGenJetEt4500Eta9->GetEntries());

ofstream outFile("CorrResponse_07_1sigma.dat");
for (Int_t i=0; i<n-3; i++){
  outFile << "  " << y[i] << "  " << x[i] << "  " << xe[i] << endl;
}

gr2 = new TGraphErrors (n-3,y,x,ye,xe);

gr2->SetTitle("MC Jets Calibration 1.496  < | #eta | < 1.757");
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
gr2->GetXaxis()->SetRangeUser(10.,1600.);
gr2->Draw("AP");


l = new TLine(10,1.0,1600,1.0);
l->SetLineStyle(2);
l->Draw();

c2hA.Print("CorrResponse_07_1sigma.eps");
c2hA.Print("CorrResponse_07_1sigma.gif");

}
