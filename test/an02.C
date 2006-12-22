{
gROOT->Reset();

gStyle->SetPalette(1);
gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

gStyle->SetCanvasColor(10);
gStyle->SetFrameFillColor(10);


TFile f("SimJetResponseMidPoint_R05_all_new.root");

JetResponseEt10Eta14->Add(JetResponseEt10Eta17,1);
JetResponseEt12Eta14->Add(JetResponseEt12Eta17,1);
JetResponseEt15Eta14->Add(JetResponseEt15Eta17,1);
JetResponseEt20Eta14->Add(JetResponseEt20Eta17,1);
JetResponseEt27Eta14->Add(JetResponseEt27Eta17,1);
JetResponseEt35Eta14->Add(JetResponseEt35Eta17,1);
JetResponseEt45Eta14->Add(JetResponseEt45Eta17,1);
JetResponseEt57Eta14->Add(JetResponseEt57Eta17,1);
JetResponseEt72Eta14->Add(JetResponseEt72Eta17,1);
JetResponseEt90Eta14->Add(JetResponseEt90Eta17,1);
JetResponseEt120Eta14->Add(JetResponseEt120Eta17,1);
JetResponseEt150Eta14->Add(JetResponseEt150Eta17,1);
JetResponseEt200Eta14->Add(JetResponseEt200Eta17,1);
JetResponseEt300Eta14->Add(JetResponseEt300Eta17,1);
JetResponseEt400Eta14->Add(JetResponseEt400Eta17,1);
JetResponseEt550Eta14->Add(JetResponseEt550Eta17,1);
JetResponseEt750Eta14->Add(JetResponseEt750Eta17,1);
JetResponseEt1000Eta14->Add(JetResponseEt1000Eta17,1);
JetResponseEt1400Eta14->Add(JetResponseEt1400Eta17,1);
JetResponseEt2000Eta14->Add(JetResponseEt2000Eta17,1);
JetResponseEt2900Eta14->Add(JetResponseEt2900Eta17,1);
JetResponseEt4500Eta14->Add(JetResponseEt4500Eta17,1);

EtGenJetEt10Eta14->Add(EtGenJetEt10Eta17,1);
EtGenJetEt12Eta14->Add(EtGenJetEt12Eta17,1);
EtGenJetEt15Eta14->Add(EtGenJetEt15Eta17,1);
EtGenJetEt20Eta14->Add(EtGenJetEt20Eta17,1);
EtGenJetEt27Eta14->Add(EtGenJetEt27Eta17,1);
EtGenJetEt35Eta14->Add(EtGenJetEt35Eta17,1);
EtGenJetEt45Eta14->Add(EtGenJetEt45Eta17,1);
EtGenJetEt57Eta14->Add(EtGenJetEt57Eta17,1);
EtGenJetEt72Eta14->Add(EtGenJetEt72Eta17,1);
EtGenJetEt90Eta14->Add(EtGenJetEt90Eta17,1);
EtGenJetEt120Eta14->Add(EtGenJetEt120Eta17,1);
EtGenJetEt150Eta14->Add(EtGenJetEt150Eta17,1);
EtGenJetEt200Eta14->Add(EtGenJetEt200Eta17,1);
EtGenJetEt300Eta14->Add(EtGenJetEt300Eta17,1);
EtGenJetEt400Eta14->Add(EtGenJetEt400Eta17,1);
EtGenJetEt550Eta14->Add(EtGenJetEt550Eta17,1);
EtGenJetEt750Eta14->Add(EtGenJetEt750Eta17,1);
EtGenJetEt1000Eta14->Add(EtGenJetEt1000Eta17,1);
EtGenJetEt1400Eta14->Add(EtGenJetEt1400Eta17,1);
EtGenJetEt2000Eta14->Add(EtGenJetEt2000Eta17,1);
EtGenJetEt2900Eta14->Add(EtGenJetEt2900Eta17,1);
EtGenJetEt4500Eta14->Add(EtGenJetEt4500Eta17,1);


Int_t n = 21;

TF1 *fit[n];


JetResponseEt10Eta14->Fit("gaus","","",.16,.415);
c1.Print("tmp/JetResponseEt10Eta14.gif");
fit[0] = JetResponseEt10Eta14->GetFunction("gaus");

JetResponseEt12Eta14->Fit("gaus","","",0.15,0.43);
c1.Print("tmp/JetResponseEt12Eta14.gif");
fit[1] = JetResponseEt12Eta14->GetFunction("gaus");

JetResponseEt15Eta14->Fit("gaus","","",0.15,0.445);
c1.Print("tmp/JetResponseEt15Eta14.gif");
fit[2] = JetResponseEt15Eta14->GetFunction("gaus");

JetResponseEt20Eta14->Fit("gaus","","",0.18,0.49);
c1.Print("tmp/JetResponseEt20Eta14.gif");
fit[3] = JetResponseEt20Eta14->GetFunction("gaus");

JetResponseEt27Eta14->Fit("gaus","","",0.24,0.54);
c1.Print("tmp/JetResponseEt27Eta14.gif");
fit[4] = JetResponseEt27Eta14->GetFunction("gaus");

JetResponseEt35Eta14->Fit("gaus","","",0.30,0.58);
c1.Print("tmp/JetResponseEt35Eta14.gif");
fit[5] = JetResponseEt35Eta14->GetFunction("gaus");

JetResponseEt45Eta14->Fit("gaus","","",0.35,0.62);
c1.Print("tmp/JetResponseEt45Eta14.gif");
fit[6] = JetResponseEt45Eta14->GetFunction("gaus");

JetResponseEt57Eta14->Fit("gaus","","",0.4,0.65);
c1.Print("tmp/JetResponseEt57Eta14.gif");
fit[7] = JetResponseEt57Eta14->GetFunction("gaus");

JetResponseEt72Eta14->Fit("gaus","","",0.46,0.69);
c1.Print("tmp/JetResponseEt72Eta14.gif");
fit[8] = JetResponseEt72Eta14->GetFunction("gaus");

JetResponseEt90Eta14->Fit("gaus","","",0.5,0.73);
c1.Print("tmp/JetResponseEt90Eta14.gif");
fit[9] = JetResponseEt90Eta14->GetFunction("gaus");

JetResponseEt120Eta14->Fit("gaus","","",0.56,0.75);
c1.Print("tmp/JetResponseEt120Eta14.gif");
fit[10] = JetResponseEt120Eta14->GetFunction("gaus");

JetResponseEt150Eta14->Fit("gaus","","",0.60,0.79);
c1.Print("tmp/JetResponseEt150Eta14.gif");
fit[11] = JetResponseEt150Eta14->GetFunction("gaus");

JetResponseEt200Eta14->Fit("gaus","","",0.66,0.82);
c1.Print("tmp/JetResponseEt200Eta14.gif");
fit[12] = JetResponseEt200Eta14->GetFunction("gaus");

JetResponseEt300Eta14->Fit("gaus","","",0.7,0.84);
c1.Print("tmp/JetResponseEt300Eta14.gif");
fit[13] = JetResponseEt300Eta14->GetFunction("gaus");

JetResponseEt400Eta14->Fit("gaus","","",0.73,0.86);
c1.Print("tmp/JetResponseEt400Eta14.gif");
fit[14] = JetResponseEt400Eta14->GetFunction("gaus");

JetResponseEt550Eta14->Fit("gaus","","",0.76,0.875);
c1.Print("tmp/JetResponseEt550Eta14.gif");
fit[15] = JetResponseEt550Eta14->GetFunction("gaus");

JetResponseEt750Eta14->Fit("gaus","","",0.78,0.89);
c1.Print("tmp/JetResponseEt750Eta14.gif");
fit[16] = JetResponseEt750Eta14->GetFunction("gaus");

JetResponseEt1000Eta14->Fit("gaus","","",0.81,0.905);
c1.Print("tmp/JetResponseEt1000Eta14.gif");
fit[17] = JetResponseEt1000Eta14->GetFunction("gaus");

JetResponseEt1400Eta14->Fit("gaus","","",.8305,.92);
c1.Print("tmp/JetResponseEt1400Eta14.gif");
fit[18] = JetResponseEt1400Eta14->GetFunction("gaus");

JetResponseEt2000Eta14->Fit("gaus","","",.85,.9302);
c1.Print("tmp/JetResponseEt2000Eta14.gif");
fit[19] = JetResponseEt2000Eta14->GetFunction("gaus");

JetResponseEt2900Eta14->Fit("gaus","","",.865,.93);
c1.Print("tmp/JetResponseEt2900Eta14.gif");
fit[20] = JetResponseEt2900Eta14->GetFunction("gaus");

//JetResponseEt4500Eta14->Fit("gaus");
//fit[21] = JetResponseEt4500Eta14->GetFunction("gaus");

Double_t x[n], y[n], xe[n], ye[n];

xe[0]=fit[0]->GetParameter(2) / sqrt(JetResponseEt10Eta14->GetEntries());
xe[1]=fit[1]->GetParameter(2) / sqrt(JetResponseEt12Eta14->GetEntries());
xe[2]=fit[2]->GetParameter(2) / sqrt(JetResponseEt15Eta14->GetEntries());
xe[3]=fit[3]->GetParameter(2) / sqrt(JetResponseEt20Eta14->GetEntries());
xe[4]=fit[4]->GetParameter(2) / sqrt(JetResponseEt27Eta14->GetEntries());
xe[5]=fit[5]->GetParameter(2) / sqrt(JetResponseEt35Eta14->GetEntries());
xe[6]=fit[6]->GetParameter(2) / sqrt(JetResponseEt45Eta14->GetEntries());
xe[7]=fit[7]->GetParameter(2) / sqrt(JetResponseEt57Eta14->GetEntries());
xe[8]=fit[8]->GetParameter(2) / sqrt(JetResponseEt72Eta14->GetEntries());
xe[9]=fit[9]->GetParameter(2) / sqrt(JetResponseEt90Eta14->GetEntries());
xe[10]=fit[10]->GetParameter(2) / sqrt(JetResponseEt120Eta14->GetEntries());
xe[11]=fit[11]->GetParameter(2) / sqrt(JetResponseEt150Eta14->GetEntries());
xe[12]=fit[12]->GetParameter(2) / sqrt(JetResponseEt200Eta14->GetEntries());
xe[13]=fit[13]->GetParameter(2) / sqrt(JetResponseEt300Eta14->GetEntries());
xe[14]=fit[14]->GetParameter(2) / sqrt(JetResponseEt400Eta14->GetEntries());
xe[15]=fit[15]->GetParameter(2) / sqrt(JetResponseEt550Eta14->GetEntries());
xe[16]=fit[16]->GetParameter(2) / sqrt(JetResponseEt750Eta14->GetEntries());
xe[17]=fit[17]->GetParameter(2) / sqrt(JetResponseEt1000Eta14->GetEntries());
xe[18]=fit[18]->GetParameter(2) / sqrt(JetResponseEt1400Eta14->GetEntries());
xe[19]=fit[19]->GetParameter(2) / sqrt(JetResponseEt2000Eta14->GetEntries());
xe[20]=fit[20]->GetParameter(2) / sqrt(JetResponseEt2900Eta14->GetEntries());
//xe[21]=fit[21]->GetParameter(2) / sqrt(JetResponseEt4500Eta14->GetEntries());

for (Int_t igogo=0; igogo<n; igogo++){
 x[igogo]=fit[igogo]->GetParameter(1);
 xe[igogo]=fit[igogo]->GetParError(1);
}

for (Int_t igogo=0; igogo<n; igogo++){
 cout<<"   "<< xe[igogo] << endl; 
}

 cout<< endl;
 cout<<"  0  "<< x[0] << "  " << JetResponseEt10Eta14->GetEntries() << "  " <<  EtGenJetEt10Eta14->GetMean() << endl;
 cout<<"  1  "<< x[1] << "  " << JetResponseEt12Eta14->GetEntries() << "  " <<  EtGenJetEt12Eta14->GetMean() << endl;
 cout<<"  2  "<< x[2] << "  " << JetResponseEt15Eta14->GetEntries() << "  " <<  EtGenJetEt15Eta14->GetMean()  << endl;
 cout<<"  3  "<< x[3] << "  " << JetResponseEt20Eta14->GetEntries() << "  " <<  EtGenJetEt20Eta14->GetMean()  << endl;
 cout<<"  4  "<< x[4] << "  " << JetResponseEt27Eta14->GetEntries() << "  " <<  EtGenJetEt27Eta14->GetMean()  << endl;
 cout<<"  5  "<< x[5] << "  " << JetResponseEt35Eta14->GetEntries() << "  " <<  EtGenJetEt35Eta14->GetMean()  << endl;
 cout<<"  6  "<< x[6] << "  " << JetResponseEt45Eta14->GetEntries() << "  " <<  EtGenJetEt45Eta14->GetMean()  << endl;
 cout<<"  7  "<< x[7] << "  " << JetResponseEt57Eta14->GetEntries() << "  " <<  EtGenJetEt57Eta14->GetMean()  << endl;
 cout<<"  8  "<< x[8] << "  " << JetResponseEt72Eta14->GetEntries() << "  " <<  EtGenJetEt72Eta14->GetMean()  << endl;
 cout<<"  9  "<< x[9] << "  " << JetResponseEt90Eta14->GetEntries()  << "  " <<  EtGenJetEt90Eta14->GetMean() << endl;
 cout<<" 10  "<< x[10] << "  " << JetResponseEt120Eta14->GetEntries()  << "  " <<  EtGenJetEt120Eta14->GetMean() << endl;
 cout<<" 11  "<< x[11] << "  " << JetResponseEt150Eta14->GetEntries()  << "  " <<  EtGenJetEt150Eta14->GetMean() << endl;
 cout<<" 12  "<< x[12] << "  " << JetResponseEt200Eta14->GetEntries() << "  " <<  EtGenJetEt200Eta14->GetMean()  << endl;
 cout<<" 13  "<< x[13] << "  " << JetResponseEt300Eta14->GetEntries()  << "  " <<  EtGenJetEt300Eta14->GetMean() << endl;
 cout<<" 14  "<< x[14] << "  " << JetResponseEt400Eta14->GetEntries()  << "  " <<  EtGenJetEt400Eta14->GetMean() << endl;
 cout<<" 15  "<< x[15] << "  " << JetResponseEt550Eta14->GetEntries()  << "  " <<  EtGenJetEt550Eta14->GetMean() << endl;
 cout<<" 16  "<< x[16] << "  " << JetResponseEt750Eta14->GetEntries()  << "  " <<  EtGenJetEt750Eta14->GetMean() << endl;
 cout<<" 17  "<< x[17] << "  " << JetResponseEt1000Eta14->GetEntries()  << "  " <<  EtGenJetEt1000Eta14->GetMean() << endl;
 cout<<" 18  "<< x[18] << "  " << JetResponseEt1400Eta14->GetEntries()  << "  " <<  EtGenJetEt1400Eta14->GetMean() << endl;
 cout<<" 19  "<< x[19] << "  " << JetResponseEt2000Eta14->GetEntries()  << "  " <<  EtGenJetEt2000Eta14->GetMean() << endl;
 cout<<" 20  "<< x[20] << "  " << JetResponseEt2900Eta14->GetEntries()  << "  " <<  EtGenJetEt2900Eta14->GetMean() << endl;
// cout<<" 21 "<< x[21] << "  " << JetResponseEt27Eta14->GetEntries() << endl;
 cout<< endl;


y[0]=EtGenJetEt10Eta14->GetMean();
y[1]=EtGenJetEt12Eta14->GetMean();
y[2]=EtGenJetEt15Eta14->GetMean();
y[3]=EtGenJetEt20Eta14->GetMean();
y[4]=EtGenJetEt27Eta14->GetMean();
y[5]=EtGenJetEt35Eta14->GetMean();
y[6]=EtGenJetEt45Eta14->GetMean();
y[7]=EtGenJetEt57Eta14->GetMean();
y[8]=EtGenJetEt72Eta14->GetMean();
y[9]=EtGenJetEt90Eta14->GetMean();
y[10]=EtGenJetEt120Eta14->GetMean();
y[11]=EtGenJetEt150Eta14->GetMean();
y[12]=EtGenJetEt200Eta14->GetMean();
y[13]=EtGenJetEt300Eta14->GetMean();
y[14]=EtGenJetEt400Eta14->GetMean();
y[15]=EtGenJetEt550Eta14->GetMean();
y[16]=EtGenJetEt750Eta14->GetMean();
y[17]=EtGenJetEt1000Eta14->GetMean();
y[18]=EtGenJetEt1400Eta14->GetMean();
y[19]=EtGenJetEt2000Eta14->GetMean();
y[20]=EtGenJetEt2900Eta14->GetMean();
//y[20]=EtGenJetEt4500Eta14->GetMean();

ye[0]=EtGenJetEt10Eta14->GetRMS() / sqrt(EtGenJetEt10Eta14->GetEntries());
ye[1]=EtGenJetEt12Eta14->GetRMS() / sqrt(EtGenJetEt12Eta14->GetEntries());
ye[2]=EtGenJetEt15Eta14->GetRMS() / sqrt(EtGenJetEt15Eta14->GetEntries());
ye[3]=EtGenJetEt20Eta14->GetRMS() / sqrt(EtGenJetEt20Eta14->GetEntries());
ye[4]=EtGenJetEt27Eta14->GetRMS() / sqrt(EtGenJetEt27Eta14->GetEntries());
ye[5]=EtGenJetEt35Eta14->GetRMS() / sqrt(EtGenJetEt35Eta14->GetEntries());
ye[6]=EtGenJetEt45Eta14->GetRMS() / sqrt(EtGenJetEt45Eta14->GetEntries());
ye[7]=EtGenJetEt57Eta14->GetRMS() / sqrt(EtGenJetEt57Eta14->GetEntries());
ye[8]=EtGenJetEt72Eta14->GetRMS() / sqrt(EtGenJetEt72Eta14->GetEntries());
ye[9]=EtGenJetEt90Eta14->GetRMS() / sqrt(EtGenJetEt90Eta14->GetEntries());
ye[10]=EtGenJetEt120Eta14->GetRMS() / sqrt(EtGenJetEt120Eta14->GetEntries());
ye[11]=EtGenJetEt150Eta14->GetRMS() / sqrt(EtGenJetEt150Eta14->GetEntries());
ye[12]=EtGenJetEt200Eta14->GetRMS() / sqrt(EtGenJetEt200Eta14->GetEntries());
ye[13]=EtGenJetEt300Eta14->GetRMS() / sqrt(EtGenJetEt300Eta14->GetEntries());
ye[14]=EtGenJetEt400Eta14->GetRMS() / sqrt(EtGenJetEt400Eta14->GetEntries());
ye[15]=EtGenJetEt550Eta14->GetRMS() / sqrt(EtGenJetEt550Eta14->GetEntries());
ye[16]=EtGenJetEt750Eta14->GetRMS() / sqrt(EtGenJetEt750Eta14->GetEntries());
ye[17]=EtGenJetEt1000Eta14->GetRMS() / sqrt(EtGenJetEt1000Eta14->GetEntries());
ye[18]=EtGenJetEt1400Eta14->GetRMS() / sqrt(EtGenJetEt1400Eta14->GetEntries());
ye[19]=EtGenJetEt2000Eta14->GetRMS() / sqrt(EtGenJetEt2000Eta14->GetEntries());
ye[20]=EtGenJetEt2900Eta14->GetRMS() / sqrt(EtGenJetEt2900Eta14->GetEntries());
//ye[21]=EtGenJetEt4500Eta14->GetRMS() / sqrt(EtGenJetEt4500Eta14->GetEntries());

gr1 = new TGraphErrors (n,y,x,ye,xe);
gr2 = new TGraphErrors (n,y,x,ye,xe);

gr1->SetTitle("MC Jets Calibration");
gr1->SetMarkerStyle(20);
gr1->SetMarkerSize(1.5);
gr1->SetMarkerColor(1);
gr2->SetTitle("MC Jets Calibration 0.226 < | #eta | < 0.441");
gr2->SetMarkerStyle(20);
gr2->SetMarkerSize(1.3);
gr2->SetMarkerColor(1);

gr1->Draw("AP");
Double_t por1, por2;

por1 = 21.;
por2 = 26.;

TF1 *func1 = new TF1("func1","[0]*sqrt(x +[1]) + [2]",10.,por2);
TF1 *func2 = new TF1("func2","[0]/(sqrt([1]*x + [2])) + [3] ",por1,5000.);
TF1 *func3 = new TF1("func3","pol1 ",por1,por2);

func2->SetParameter(0,-3.);
//func2->SetParameter(2,-5.);
func2->SetParameter(3,1.);
//func2->SetParameter(1,1.);
func2->SetParLimits(1,0.1,10.);
func2->SetParLimits(2,-1.5,10000.);

gr1->Fit("func2", "R",  "r", por1, 5000);
TF1 *fitM1 = gr1->GetFunction("func2");


gr1->Fit("func1", "R+", "r", 10, por2);
TF1 *fitM2 = gr1->GetFunction("func1");

Double_t par[7];
func1->GetParameters(&par[0]);
func2->GetParameters(&par[3]);

cout<<"  "<< par[0]<<"  "<< par[1]<<"  "<< par[2]
<<"  "<< par[3]<<"  "<< par[4]<<"  "<< par[5]
<<"  "<< par[6] << endl;

Double_t a1,a2;

a2 = par[3]/(sqrt(fabs(par[4]*por2 + par[5]))) + par[6];
a1 = par[0]*sqrt(por1 +par[1]) + par[2];

func3->SetParameter(0,(a1*por2 - a2*por1)/(por2-por1));
func3->SetParameter(1,(a2-a1)/(por2-por1));

func3->Draw("same");

cout<<"  "<< a1 <<"  "<< a2 << endl;

TF1 *funcA1 = new TF1("funcA1","[0]*sqrt(x +[1]) + [2]",10.,por1);
TF1 *funcA2 = new TF1("funcA2","[0]/(sqrt([1]*x + [2])) + [3] ",por2,5000.);

funcA1->SetParameter(0,par[0]);
funcA1->SetParameter(1,par[1]);
funcA1->SetParameter(2,par[2]);

funcA2->SetParameter(0,par[3]);
funcA2->SetParameter(1,par[4]);
funcA2->SetParameter(2,par[5]);
funcA2->SetParameter(3,par[6]);

TCanvas c2hA("c2hA"," ",10,10,800,600);
Int_t cancolor = 10;
c2hA.SetFillColor(cancolor);
c2hA->SetLogx();
gr2->Draw("AP");

funcA1->Draw("same");
funcA2->Draw("same");
func3->Draw("same");

Double_t porog1 = 45.;
Double_t porog2 = 55.;

TF1 *ORCAfunc1 = new TF1("func1","0.40483*sqrt(x +1064.52743) -12.95957",10.,porog1);
TF1 *ORCAfunc2 = new TF1("func2","-9.90135/(sqrt(10.*x -1.)) + 0.98794 ",porog2,5000.);
TF1 *ORCAfunc3 = new TF1("func3","pol1 ",45.,55.);

a1 = 0.40483*sqrt(45. +1064.52743) -12.95957;
a2 = -9.90135/(sqrt(10.*55. -1.)) + 0.98794;

ORCAfunc3->SetParameter(0,(a1*porog2 - a2*porog1)/(porog2-porog1));
ORCAfunc3->SetParameter(1,(a2-a1)/(porog2-porog1));

//ORCAfunc1->Draw("same");
//ORCAfunc2->Draw("same");
//ORCAfunc3->Draw("same");

TLatex* lt = new TLatex(500.,0.15,"E_{T} jet GEN, GeV");
lt->SetTextFont(62);
lt->Draw();

TLatex* lt1 = new TLatex(6.4,0.47," E_{T} jet REC / E_{T} jet GEN ");
lt1->SetTextAngle(90);
lt1->SetTextFont(62);
lt1->Draw();
  
c2hA.Print("Et_mc02.eps");
c2hA.Print("Et_mc02.gif");

       Float_t e0 = 0.;      
       Float_t e1 = 0.226;
       Float_t e2 = 0.441;
       Float_t e3 = 0.751;
       Float_t e4 = 0.991;
       Float_t e5 = 1.260;
       Float_t e6 = 1.496;
       Float_t e7 = 1.757;
       Float_t e8 = 2.046;
       Float_t e9 = 2.295;
       Float_t e10 = 2.487;
       Float_t e11 = 2.690;
       Float_t e12 = 2.916;

FILE *Out1 = fopen("h02.txt", "w+");

fprintf(Out1," %.3f %.1f %.1f %.5f %.5f %.5f %.5f %.5f %.5f %.5f\n", 
e2, por1, por2, par[0], par[1], par[2], par[3], par[4], par[5], par[6]);

fclose(Out1);

//JetResponseEt4500Eta17->Draw();

}
