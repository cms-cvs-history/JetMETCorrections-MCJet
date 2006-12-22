{
gROOT->Reset();

gStyle->SetPalette(1);
gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

gStyle->SetCanvasColor(10);
gStyle->SetFrameFillColor(10);


TFile f("SimJetResponseMidPoint_R05_all_new.root");

JetResponseEt10Eta3->Add(JetResponseEt10Eta28,1);
JetResponseEt12Eta3->Add(JetResponseEt12Eta28,1);
JetResponseEt15Eta3->Add(JetResponseEt15Eta28,1);
JetResponseEt20Eta3->Add(JetResponseEt20Eta28,1);
JetResponseEt27Eta3->Add(JetResponseEt27Eta28,1);
JetResponseEt35Eta3->Add(JetResponseEt35Eta28,1);
JetResponseEt45Eta3->Add(JetResponseEt45Eta28,1);
JetResponseEt57Eta3->Add(JetResponseEt57Eta28,1);
JetResponseEt72Eta3->Add(JetResponseEt72Eta28,1);
JetResponseEt90Eta3->Add(JetResponseEt90Eta28,1);
JetResponseEt120Eta3->Add(JetResponseEt120Eta28,1);
JetResponseEt150Eta3->Add(JetResponseEt150Eta28,1);
JetResponseEt200Eta3->Add(JetResponseEt200Eta28,1);
JetResponseEt300Eta3->Add(JetResponseEt300Eta28,1);
JetResponseEt400Eta3->Add(JetResponseEt400Eta28,1);
JetResponseEt550Eta3->Add(JetResponseEt550Eta28,1);
JetResponseEt750Eta3->Add(JetResponseEt750Eta28,1);
JetResponseEt1000Eta3->Add(JetResponseEt1000Eta28,1);
JetResponseEt1400Eta3->Add(JetResponseEt1400Eta28,1);
JetResponseEt2000Eta3->Add(JetResponseEt2000Eta28,1);
JetResponseEt2900Eta3->Add(JetResponseEt2900Eta28,1);
JetResponseEt4500Eta3->Add(JetResponseEt4500Eta28,1);

EtGenJetEt10Eta3->Add(EtGenJetEt10Eta28,1);
EtGenJetEt12Eta3->Add(EtGenJetEt12Eta28,1);
EtGenJetEt15Eta3->Add(EtGenJetEt15Eta28,1);
EtGenJetEt20Eta3->Add(EtGenJetEt20Eta28,1);
EtGenJetEt27Eta3->Add(EtGenJetEt27Eta28,1);
EtGenJetEt35Eta3->Add(EtGenJetEt35Eta28,1);
EtGenJetEt45Eta3->Add(EtGenJetEt45Eta28,1);
EtGenJetEt57Eta3->Add(EtGenJetEt57Eta28,1);
EtGenJetEt72Eta3->Add(EtGenJetEt72Eta28,1);
EtGenJetEt90Eta3->Add(EtGenJetEt90Eta28,1);
EtGenJetEt120Eta3->Add(EtGenJetEt120Eta28,1);
EtGenJetEt150Eta3->Add(EtGenJetEt150Eta28,1);
EtGenJetEt200Eta3->Add(EtGenJetEt200Eta28,1);
EtGenJetEt300Eta3->Add(EtGenJetEt300Eta28,1);
EtGenJetEt400Eta3->Add(EtGenJetEt400Eta28,1);
EtGenJetEt550Eta3->Add(EtGenJetEt550Eta28,1);
EtGenJetEt750Eta3->Add(EtGenJetEt750Eta28,1);
EtGenJetEt1000Eta3->Add(EtGenJetEt1000Eta28,1);
EtGenJetEt1400Eta3->Add(EtGenJetEt1400Eta28,1);
EtGenJetEt2000Eta3->Add(EtGenJetEt2000Eta28,1);
EtGenJetEt2900Eta3->Add(EtGenJetEt2900Eta28,1);
EtGenJetEt4500Eta3->Add(EtGenJetEt4500Eta28,1);


Int_t n = 21;

TF1 *fit[n];


JetResponseEt10Eta3->Fit("gaus","","",.255,.55);
c1.Print("tmp/JetResponseEt10Eta3.gif");
fit[0] = JetResponseEt10Eta3->GetFunction("gaus");

JetResponseEt12Eta3->Fit("gaus","","",0.265,0.56);
c1.Print("tmp/JetResponseEt12Eta3.gif");
fit[1] = JetResponseEt12Eta3->GetFunction("gaus");

JetResponseEt15Eta3->Fit("gaus","","",0.3,0.59);
c1.Print("tmp/JetResponseEt15Eta3.gif");
fit[2] = JetResponseEt15Eta3->GetFunction("gaus");

JetResponseEt20Eta3->Fit("gaus","","",0.36,0.62);
c1.Print("tmp/JetResponseEt20Eta3.gif");
fit[3] = JetResponseEt20Eta3->GetFunction("gaus");

JetResponseEt27Eta3->Fit("gaus","","",0.406,0.664);
c1.Print("tmp/JetResponseEt27Eta3.gif");
fit[4] = JetResponseEt27Eta3->GetFunction("gaus");

JetResponseEt35Eta3->Fit("gaus","","",0.45,0.685);
c1.Print("tmp/JetResponseEt35Eta3.gif");
fit[5] = JetResponseEt35Eta3->GetFunction("gaus");

JetResponseEt45Eta3->Fit("gaus","","",0.485,0.71);
c1.Print("tmp/JetResponseEt45Eta3.gif");
fit[6] = JetResponseEt45Eta3->GetFunction("gaus");

JetResponseEt57Eta3->Fit("gaus","","",0.51,0.719);
c1.Print("tmp/JetResponseEt57Eta3.gif");
fit[7] = JetResponseEt57Eta3->GetFunction("gaus");

JetResponseEt72Eta3->Fit("gaus","","",0.54,0.74);
c1.Print("tmp/JetResponseEt72Eta3.gif");
fit[8] = JetResponseEt72Eta3->GetFunction("gaus");

JetResponseEt90Eta3->Fit("gaus","","",0.565,0.765);
c1.Print("tmp/JetResponseEt90Eta3.gif");
fit[9] = JetResponseEt90Eta3->GetFunction("gaus");

JetResponseEt120Eta3->Fit("gaus","","",0.59,0.77);
c1.Print("tmp/JetResponseEt120Eta3.gif");
fit[10] = JetResponseEt120Eta3->GetFunction("gaus");

JetResponseEt150Eta3->Fit("gaus","","",0.62,0.768);
c1.Print("tmp/JetResponseEt150Eta3.gif");
fit[11] = JetResponseEt150Eta3->GetFunction("gaus");

JetResponseEt200Eta3->Fit("gaus","","",0.63,0.81);
c1.Print("tmp/JetResponseEt200Eta3.gif");
fit[12] = JetResponseEt200Eta3->GetFunction("gaus");




JetResponseEt300Eta3->Fit("gaus","","",0.595,0.76);
c1.Print("tmp/JetResponseEt300Eta3.gif");
fit[13] = JetResponseEt300Eta3->GetFunction("gaus");

JetResponseEt400Eta3->Fit("gaus","","",0.593,0.8);
c1.Print("tmp/JetResponseEt400Eta3.gif");
fit[14] = JetResponseEt400Eta3->GetFunction("gaus");

JetResponseEt550Eta3->Fit("gaus","","",0.656,0.779);
c1.Print("tmp/JetResponseEt550Eta3.gif");
fit[15] = JetResponseEt550Eta3->GetFunction("gaus");

JetResponseEt750Eta3->Fit("gaus","","",0.67,0.7875);
c1.Print("tmp/JetResponseEt750Eta3.gif");
fit[16] = JetResponseEt750Eta3->GetFunction("gaus");

JetResponseEt1000Eta3->Fit("gaus","","",0.686,0.772);
c1.Print("tmp/JetResponseEt1000Eta3.gif");
fit[17] = JetResponseEt1000Eta3->GetFunction("gaus");

JetResponseEt1400Eta3->Fit("gaus","","",.697,.874);
c1.Print("tmp/JetResponseEt1400Eta3.gif");
fit[18] = JetResponseEt1400Eta3->GetFunction("gaus");

JetResponseEt2000Eta3->Fit("gaus","","",.717,.895);
c1.Print("tmp/JetResponseEt2000Eta3.gif");
fit[19] = JetResponseEt2000Eta3->GetFunction("gaus");

JetResponseEt2900Eta3->Fit("gaus","","",.849,.919);
c1.Print("tmp/JetResponseEt2900Eta3.gif");
fit[20] = JetResponseEt2900Eta3->GetFunction("gaus");


//JetResponseEt4500Eta3->Fit("gaus");
//fit[21] = JetResponseEt4500Eta3->GetFunction("gaus");

Double_t x[n], y[n], xe[n], ye[n];

xe[0]=fit[0]->GetParameter(2) / sqrt(JetResponseEt10Eta3->GetEntries());
xe[1]=fit[1]->GetParameter(2) / sqrt(JetResponseEt12Eta3->GetEntries());
xe[2]=fit[2]->GetParameter(2) / sqrt(JetResponseEt15Eta3->GetEntries());
xe[3]=fit[3]->GetParameter(2) / sqrt(JetResponseEt20Eta3->GetEntries());
xe[4]=fit[4]->GetParameter(2) / sqrt(JetResponseEt27Eta3->GetEntries());
xe[5]=fit[5]->GetParameter(2) / sqrt(JetResponseEt35Eta3->GetEntries());
xe[6]=fit[6]->GetParameter(2) / sqrt(JetResponseEt45Eta3->GetEntries());
xe[7]=fit[7]->GetParameter(2) / sqrt(JetResponseEt57Eta3->GetEntries());
xe[8]=fit[8]->GetParameter(2) / sqrt(JetResponseEt72Eta3->GetEntries());
xe[9]=fit[9]->GetParameter(2) / sqrt(JetResponseEt90Eta3->GetEntries());
xe[10]=fit[10]->GetParameter(2) / sqrt(JetResponseEt120Eta3->GetEntries());
xe[11]=fit[11]->GetParameter(2) / sqrt(JetResponseEt150Eta3->GetEntries());
xe[12]=fit[12]->GetParameter(2) / sqrt(JetResponseEt200Eta3->GetEntries());
xe[13]=fit[13]->GetParameter(2) / sqrt(JetResponseEt300Eta3->GetEntries());
xe[14]=fit[14]->GetParameter(2) / sqrt(JetResponseEt400Eta3->GetEntries());
xe[15]=fit[15]->GetParameter(2) / sqrt(JetResponseEt550Eta3->GetEntries());
//xe[16]=fit[16]->GetParameter(2) / sqrt(JetResponseEt750Eta3->GetEntries());
//xe[17]=fit[17]->GetParameter(2) / sqrt(JetResponseEt1000Eta3->GetEntries());
//xe[18]=fit[18]->GetParameter(2) / sqrt(JetResponseEt1400Eta3->GetEntries());
//xe[19]=fit[19]->GetParameter(2) / sqrt(JetResponseEt2000Eta3->GetEntries());
//xe[20]=fit[20]->GetParameter(2) / sqrt(JetResponseEt2900Eta3->GetEntries());
//xe[21]=fit[21]->GetParameter(2) / sqrt(JetResponseEt4500Eta3->GetEntries());

for (Int_t igogo=0; igogo<n; igogo++){
 x[igogo]=fit[igogo]->GetParameter(1);
 xe[igogo]=fit[igogo]->GetParError(1);
}

for (Int_t igogo=0; igogo<n; igogo++){
 cout<<"   "<< xe[igogo] << endl; 
}

 cout<< endl;
 cout<<"  0  "<< x[0] << "  " << JetResponseEt10Eta3->GetEntries() << "  " <<  EtGenJetEt10Eta3->GetMean() << endl;
 cout<<"  1  "<< x[1] << "  " << JetResponseEt12Eta3->GetEntries() << "  " <<  EtGenJetEt12Eta3->GetMean() << endl;
 cout<<"  2  "<< x[2] << "  " << JetResponseEt15Eta3->GetEntries() << "  " <<  EtGenJetEt15Eta3->GetMean()  << endl;
 cout<<"  3  "<< x[3] << "  " << JetResponseEt20Eta3->GetEntries() << "  " <<  EtGenJetEt20Eta3->GetMean()  << endl;
 cout<<"  4  "<< x[4] << "  " << JetResponseEt27Eta3->GetEntries() << "  " <<  EtGenJetEt27Eta3->GetMean()  << endl;
 cout<<"  5  "<< x[5] << "  " << JetResponseEt35Eta3->GetEntries() << "  " <<  EtGenJetEt35Eta3->GetMean()  << endl;
 cout<<"  6  "<< x[6] << "  " << JetResponseEt45Eta3->GetEntries() << "  " <<  EtGenJetEt45Eta3->GetMean()  << endl;
 cout<<"  7  "<< x[7] << "  " << JetResponseEt57Eta3->GetEntries() << "  " <<  EtGenJetEt57Eta3->GetMean()  << endl;
 cout<<"  8  "<< x[8] << "  " << JetResponseEt72Eta3->GetEntries() << "  " <<  EtGenJetEt72Eta3->GetMean()  << endl;
 cout<<"  9  "<< x[9] << "  " << JetResponseEt90Eta3->GetEntries()  << "  " <<  EtGenJetEt90Eta3->GetMean() << endl;
 cout<<" 10  "<< x[10] << "  " << JetResponseEt120Eta3->GetEntries()  << "  " <<  EtGenJetEt120Eta3->GetMean() << endl;
 cout<<" 11  "<< x[11] << "  " << JetResponseEt150Eta3->GetEntries()  << "  " <<  EtGenJetEt150Eta3->GetMean() << endl;
 cout<<" 12  "<< x[12] << "  " << JetResponseEt200Eta3->GetEntries() << "  " <<  EtGenJetEt200Eta3->GetMean()  << endl;
 cout<<" 13  "<< x[13] << "  " << JetResponseEt300Eta3->GetEntries()  << "  " <<  EtGenJetEt300Eta3->GetMean() << endl;
 cout<<" 14  "<< x[14] << "  " << JetResponseEt400Eta3->GetEntries()  << "  " <<  EtGenJetEt400Eta3->GetMean() << endl;
 cout<<" 15  "<< x[15] << "  " << JetResponseEt550Eta3->GetEntries()  << "  " <<  EtGenJetEt550Eta3->GetMean() << endl;
 cout<<" 16  "<< x[16] << "  " << JetResponseEt750Eta3->GetEntries()  << "  " <<  EtGenJetEt750Eta3->GetMean() << endl;
 cout<<" 17  "<< x[17] << "  " << JetResponseEt1000Eta3->GetEntries()  << "  " <<  EtGenJetEt1000Eta3->GetMean() << endl;
 cout<<" 18  "<< x[18] << "  " << JetResponseEt1400Eta3->GetEntries()  << "  " <<  EtGenJetEt1400Eta3->GetMean() << endl;
 cout<<" 19  "<< x[19] << "  " << JetResponseEt2000Eta3->GetEntries()  << "  " <<  EtGenJetEt2000Eta3->GetMean() << endl;
 cout<<" 20  "<< x[20] << "  " << JetResponseEt2900Eta3->GetEntries()  << "  " <<  EtGenJetEt2900Eta3->GetMean() << endl;
// cout<<" 21 "<< x[21] << "  " << JetResponseEt27Eta3->GetEntries() << endl;
 cout<< endl;


y[0]=EtGenJetEt10Eta3->GetMean();
y[1]=EtGenJetEt12Eta3->GetMean();
y[2]=EtGenJetEt15Eta3->GetMean();
y[3]=EtGenJetEt20Eta3->GetMean();
y[4]=EtGenJetEt27Eta3->GetMean();
y[5]=EtGenJetEt35Eta3->GetMean();
y[6]=EtGenJetEt45Eta3->GetMean();
y[7]=EtGenJetEt57Eta3->GetMean();
y[8]=EtGenJetEt72Eta3->GetMean();
y[9]=EtGenJetEt90Eta3->GetMean();
y[10]=EtGenJetEt120Eta3->GetMean();
y[11]=EtGenJetEt150Eta3->GetMean();
y[12]=EtGenJetEt200Eta3->GetMean();
y[13]=EtGenJetEt300Eta3->GetMean();
y[14]=EtGenJetEt400Eta3->GetMean();
y[15]=EtGenJetEt550Eta3->GetMean();
y[16]=EtGenJetEt750Eta3->GetMean();
y[17]=EtGenJetEt1000Eta3->GetMean();
y[18]=EtGenJetEt1400Eta3->GetMean();
y[19]=EtGenJetEt2000Eta3->GetMean();
y[20]=EtGenJetEt2900Eta3->GetMean();
//y[20]=EtGenJetEt4500Eta3->GetMean();

ye[0]=EtGenJetEt10Eta3->GetRMS() / sqrt(EtGenJetEt10Eta3->GetEntries());
ye[1]=EtGenJetEt12Eta3->GetRMS() / sqrt(EtGenJetEt12Eta3->GetEntries());
ye[2]=EtGenJetEt15Eta3->GetRMS() / sqrt(EtGenJetEt15Eta3->GetEntries());
ye[3]=EtGenJetEt20Eta3->GetRMS() / sqrt(EtGenJetEt20Eta3->GetEntries());
ye[4]=EtGenJetEt27Eta3->GetRMS() / sqrt(EtGenJetEt27Eta3->GetEntries());
ye[5]=EtGenJetEt35Eta3->GetRMS() / sqrt(EtGenJetEt35Eta3->GetEntries());
ye[6]=EtGenJetEt45Eta3->GetRMS() / sqrt(EtGenJetEt45Eta3->GetEntries());
ye[7]=EtGenJetEt57Eta3->GetRMS() / sqrt(EtGenJetEt57Eta3->GetEntries());
ye[8]=EtGenJetEt72Eta3->GetRMS() / sqrt(EtGenJetEt72Eta3->GetEntries());
ye[9]=EtGenJetEt90Eta3->GetRMS() / sqrt(EtGenJetEt90Eta3->GetEntries());
ye[10]=EtGenJetEt120Eta3->GetRMS() / sqrt(EtGenJetEt120Eta3->GetEntries());
ye[11]=EtGenJetEt150Eta3->GetRMS() / sqrt(EtGenJetEt150Eta3->GetEntries());
ye[12]=EtGenJetEt200Eta3->GetRMS() / sqrt(EtGenJetEt200Eta3->GetEntries());
ye[13]=EtGenJetEt300Eta3->GetRMS() / sqrt(EtGenJetEt300Eta3->GetEntries());
ye[14]=EtGenJetEt400Eta3->GetRMS() / sqrt(EtGenJetEt400Eta3->GetEntries());
ye[15]=EtGenJetEt550Eta3->GetRMS() / sqrt(EtGenJetEt550Eta3->GetEntries());
//ye[16]=EtGenJetEt750Eta3->GetRMS() / sqrt(EtGenJetEt750Eta3->GetEntries());
//ye[17]=EtGenJetEt1000Eta3->GetRMS() / sqrt(EtGenJetEt1000Eta3->GetEntries());
//ye[18]=EtGenJetEt1400Eta3->GetRMS() / sqrt(EtGenJetEt1400Eta3->GetEntries());
//ye[19]=EtGenJetEt2000Eta3->GetRMS() / sqrt(EtGenJetEt2000Eta3->GetEntries());
//ye[20]=EtGenJetEt2900Eta3->GetRMS() / sqrt(EtGenJetEt2900Eta3->GetEntries());
//ye[21]=EtGenJetEt4500Eta3->GetRMS() / sqrt(EtGenJetEt4500Eta3->GetEntries());

gr1 = new TGraphErrors (n-8,y,x,ye,xe);
gr2 = new TGraphErrors (n-8,y,x,ye,xe);

gr1->SetTitle("MC Jets Calibration");
gr1->SetMarkerStyle(20);
gr1->SetMarkerSize(1.5);
gr1->SetMarkerColor(1);
gr2->SetTitle("MC Jets Calibration 2.916 < |#eta| < 3.284");
gr2->SetMarkerStyle(20);
gr2->SetMarkerSize(1.3);
gr2->SetMarkerColor(1);

gr1->Draw("AP");
Double_t por1, por2;

por1 = 18.;
por2 = 23.;

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

TF1 *ORCAfunc1 = new TF1("func1","0.44388*sqrt(x +1160.70819) -14.76820",10.,porog1);
TF1 *ORCAfunc2 = new TF1("func2","-2.25344/(sqrt(1.15122*x -11.45218)) + 1.00273",porog2,5000.);
TF1 *ORCAfunc3 = new TF1("func3","pol1 ",45.,55.);

a1 = 0.44388*sqrt(45. +1160.70819) -14.76820;
a2 = -2.25344/(sqrt(1.15122*55. -11.45218)) + 1.00273;

ORCAfunc3->SetParameter(0,(a1*porog2 - a2*porog1)/(porog2-porog1));
ORCAfunc3->SetParameter(1,(a2-a1)/(porog2-porog1));

//ORCAfunc1->Draw("same");
//ORCAfunc2->Draw("same");
//ORCAfunc3->Draw("same");


TLatex* lt = new TLatex(110.,0.335,"E_{T} jet GEN, GeV");
lt->SetTextFont(62);
lt->Draw();

TLatex* lt1 = new TLatex(7.5,0.51," E_{T} jet REC / E_{T} jet GEN ");
lt1->SetTextAngle(90);
lt1->SetTextFont(62);
lt1->Draw();
  
c2hA.Print("Et_mc13.eps");
c2hA.Print("Et_mc13.gif");

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
       Float_t e13 = 3.284;
       Float_t e14 = 4.000;
       Float_t e15 = 4.400;
       Float_t e16 = 4.800;

FILE *Out1 = fopen("h13.txt", "w+");

fprintf(Out1," %.3f %.1f %.1f %.5f %.5f %.5f %.5f %.5f %.5f %.5f\n", 
e13, por1, por2, par[0], par[1], par[2], par[3], par[4], par[5], par[6]);

fclose(Out1);

//JetResponseEt4500Eta28->Draw();

}
