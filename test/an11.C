{
gROOT->Reset();

gStyle->SetPalette(1);
gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

gStyle->SetCanvasColor(10);
gStyle->SetFrameFillColor(10);


TFile f("../SimJetResponseMidPoint_R05_all.root");

JetResponseEt10Eta5->Add(JetResponseEt10Eta26,1);
JetResponseEt12Eta5->Add(JetResponseEt12Eta26,1);
JetResponseEt15Eta5->Add(JetResponseEt15Eta26,1);
JetResponseEt20Eta5->Add(JetResponseEt20Eta26,1);
JetResponseEt27Eta5->Add(JetResponseEt27Eta26,1);
JetResponseEt35Eta5->Add(JetResponseEt35Eta26,1);
JetResponseEt45Eta5->Add(JetResponseEt45Eta26,1);
JetResponseEt57Eta5->Add(JetResponseEt57Eta26,1);
JetResponseEt72Eta5->Add(JetResponseEt72Eta26,1);
JetResponseEt90Eta5->Add(JetResponseEt90Eta26,1);
JetResponseEt120Eta5->Add(JetResponseEt120Eta26,1);
JetResponseEt150Eta5->Add(JetResponseEt150Eta26,1);
JetResponseEt200Eta5->Add(JetResponseEt200Eta26,1);
JetResponseEt300Eta5->Add(JetResponseEt300Eta26,1);
JetResponseEt400Eta5->Add(JetResponseEt400Eta26,1);
JetResponseEt550Eta5->Add(JetResponseEt550Eta26,1);
JetResponseEt750Eta5->Add(JetResponseEt750Eta26,1);
JetResponseEt1000Eta5->Add(JetResponseEt1000Eta26,1);
JetResponseEt1400Eta5->Add(JetResponseEt1400Eta26,1);
JetResponseEt2000Eta5->Add(JetResponseEt2000Eta26,1);
JetResponseEt2900Eta5->Add(JetResponseEt2900Eta26,1);
JetResponseEt4500Eta5->Add(JetResponseEt4500Eta26,1);

EtGenJetEt10Eta5->Add(EtGenJetEt10Eta26,1);
EtGenJetEt12Eta5->Add(EtGenJetEt12Eta26,1);
EtGenJetEt15Eta5->Add(EtGenJetEt15Eta26,1);
EtGenJetEt20Eta5->Add(EtGenJetEt20Eta26,1);
EtGenJetEt27Eta5->Add(EtGenJetEt27Eta26,1);
EtGenJetEt35Eta5->Add(EtGenJetEt35Eta26,1);
EtGenJetEt45Eta5->Add(EtGenJetEt45Eta26,1);
EtGenJetEt57Eta5->Add(EtGenJetEt57Eta26,1);
EtGenJetEt72Eta5->Add(EtGenJetEt72Eta26,1);
EtGenJetEt90Eta5->Add(EtGenJetEt90Eta26,1);
EtGenJetEt120Eta5->Add(EtGenJetEt120Eta26,1);
EtGenJetEt150Eta5->Add(EtGenJetEt150Eta26,1);
EtGenJetEt200Eta5->Add(EtGenJetEt200Eta26,1);
EtGenJetEt300Eta5->Add(EtGenJetEt300Eta26,1);
EtGenJetEt400Eta5->Add(EtGenJetEt400Eta26,1);
EtGenJetEt550Eta5->Add(EtGenJetEt550Eta26,1);
EtGenJetEt750Eta5->Add(EtGenJetEt750Eta26,1);
EtGenJetEt1000Eta5->Add(EtGenJetEt1000Eta26,1);
EtGenJetEt1400Eta5->Add(EtGenJetEt1400Eta26,1);
EtGenJetEt2000Eta5->Add(EtGenJetEt2000Eta26,1);
EtGenJetEt2900Eta5->Add(EtGenJetEt2900Eta26,1);
EtGenJetEt4500Eta5->Add(EtGenJetEt4500Eta26,1);


Int_t n = 21;

TF1 *fit[n];

JetResponseEt10Eta5->Fit("gaus","","",.184,.43);
c1.Print("tmp/JetResponseEt10Eta5.gif");
fit[0] = JetResponseEt10Eta5->GetFunction("gaus");

JetResponseEt12Eta5->Fit("gaus","","",0.189,0.44);
c1.Print("tmp/JetResponseEt12Eta5.gif");
fit[1] = JetResponseEt12Eta5->GetFunction("gaus");

JetResponseEt15Eta5->Fit("gaus","","",0.218,0.472);
c1.Print("tmp/JetResponseEt15Eta5.gif");
fit[2] = JetResponseEt15Eta5->GetFunction("gaus");

JetResponseEt20Eta5->Fit("gaus","","",0.281,0.516);
c1.Print("tmp/JetResponseEt20Eta5.gif");
fit[3] = JetResponseEt20Eta5->GetFunction("gaus");

JetResponseEt27Eta5->Fit("gaus","","",0.357,0.567);
c1.Print("tmp/JetResponseEt27Eta5.gif");
fit[4] = JetResponseEt27Eta5->GetFunction("gaus");

JetResponseEt35Eta5->Fit("gaus","","",0.41,0.61);
c1.Print("tmp/JetResponseEt35Eta5.gif");
fit[5] = JetResponseEt35Eta5->GetFunction("gaus");

JetResponseEt45Eta5->Fit("gaus","","",0.457,0.637);
c1.Print("tmp/JetResponseEt45Eta5.gif");
fit[6] = JetResponseEt45Eta5->GetFunction("gaus");

JetResponseEt57Eta5->Fit("gaus","","",0.502,0.654);
c1.Print("tmp/JetResponseEt57Eta5.gif");
fit[7] = JetResponseEt57Eta5->GetFunction("gaus");

JetResponseEt72Eta5->Fit("gaus","","",0.524,0.68);
c1.Print("tmp/JetResponseEt72Eta5.gif");
fit[8] = JetResponseEt72Eta5->GetFunction("gaus");

JetResponseEt90Eta5->Fit("gaus","","",0.56,0.695);
c1.Print("tmp/JetResponseEt90Eta5.gif");
fit[9] = JetResponseEt90Eta5->GetFunction("gaus");

JetResponseEt120Eta5->Fit("gaus","","",0.587,0.715);
c1.Print("tmp/JetResponseEt120Eta5.gif");
fit[10] = JetResponseEt120Eta5->GetFunction("gaus");

JetResponseEt150Eta5->Fit("gaus","","",0.615,0.719);
c1.Print("tmp/JetResponseEt150Eta5.gif");
fit[11] = JetResponseEt150Eta5->GetFunction("gaus");

JetResponseEt200Eta5->Fit("gaus","","",0.635,0.747);
c1.Print("tmp/JetResponseEt200Eta5.gif");
fit[12] = JetResponseEt200Eta5->GetFunction("gaus");

JetResponseEt300Eta5->Fit("gaus","","",0.643,0.76);
c1.Print("tmp/JetResponseEt300Eta5.gif");
fit[13] = JetResponseEt300Eta5->GetFunction("gaus");

JetResponseEt400Eta5->Fit("gaus","","",0.655,0.8);
c1.Print("tmp/JetResponseEt400Eta5.gif");
fit[14] = JetResponseEt400Eta5->GetFunction("gaus");




JetResponseEt550Eta5->Fit("gaus","","",0.656,0.779);
c1.Print("tmp/JetResponseEt550Eta5.gif");
fit[15] = JetResponseEt550Eta5->GetFunction("gaus");

JetResponseEt750Eta5->Fit("gaus","","",0.67,0.7875);
c1.Print("tmp/JetResponseEt750Eta5.gif");
fit[16] = JetResponseEt750Eta5->GetFunction("gaus");

JetResponseEt1000Eta5->Fit("gaus","","",0.686,0.772);
c1.Print("tmp/JetResponseEt1000Eta5.gif");
fit[17] = JetResponseEt1000Eta5->GetFunction("gaus");

JetResponseEt1400Eta5->Fit("gaus","","",.697,.874);
c1.Print("tmp/JetResponseEt1400Eta5.gif");
fit[18] = JetResponseEt1400Eta5->GetFunction("gaus");

JetResponseEt2000Eta5->Fit("gaus","","",.717,.895);
c1.Print("tmp/JetResponseEt2000Eta5.gif");
fit[19] = JetResponseEt2000Eta5->GetFunction("gaus");

JetResponseEt2900Eta5->Fit("gaus","","",.849,.919);
c1.Print("tmp/JetResponseEt2900Eta5.gif");
fit[20] = JetResponseEt2900Eta5->GetFunction("gaus");

//JetResponseEt4500Eta5->Fit("gaus");
//fit[21] = JetResponseEt4500Eta5->GetFunction("gaus");

Double_t x[n], y[n], xe[n], ye[n];

xe[0]=fit[0]->GetParameter(2) / sqrt(JetResponseEt10Eta5->GetEntries());
xe[1]=fit[1]->GetParameter(2) / sqrt(JetResponseEt12Eta5->GetEntries());
xe[2]=fit[2]->GetParameter(2) / sqrt(JetResponseEt15Eta5->GetEntries());
xe[3]=fit[3]->GetParameter(2) / sqrt(JetResponseEt20Eta5->GetEntries());
xe[4]=fit[4]->GetParameter(2) / sqrt(JetResponseEt27Eta5->GetEntries());
xe[5]=fit[5]->GetParameter(2) / sqrt(JetResponseEt35Eta5->GetEntries());
xe[6]=fit[6]->GetParameter(2) / sqrt(JetResponseEt45Eta5->GetEntries());
xe[7]=fit[7]->GetParameter(2) / sqrt(JetResponseEt57Eta5->GetEntries());
xe[8]=fit[8]->GetParameter(2) / sqrt(JetResponseEt72Eta5->GetEntries());
xe[9]=fit[9]->GetParameter(2) / sqrt(JetResponseEt90Eta5->GetEntries());
xe[10]=fit[10]->GetParameter(2) / sqrt(JetResponseEt120Eta5->GetEntries());
xe[11]=fit[11]->GetParameter(2) / sqrt(JetResponseEt150Eta5->GetEntries());
xe[12]=fit[12]->GetParameter(2) / sqrt(JetResponseEt200Eta5->GetEntries());
xe[13]=fit[13]->GetParameter(2) / sqrt(JetResponseEt300Eta5->GetEntries());
xe[14]=fit[14]->GetParameter(2) / sqrt(JetResponseEt400Eta5->GetEntries());
xe[15]=fit[15]->GetParameter(2) / sqrt(JetResponseEt550Eta5->GetEntries());
xe[16]=fit[16]->GetParameter(2) / sqrt(JetResponseEt750Eta5->GetEntries());
//xe[17]=fit[17]->GetParameter(2) / sqrt(JetResponseEt1000Eta5->GetEntries());
//xe[18]=fit[18]->GetParameter(2) / sqrt(JetResponseEt1400Eta5->GetEntries());
//xe[19]=fit[19]->GetParameter(2) / sqrt(JetResponseEt2000Eta5->GetEntries());
//xe[20]=fit[20]->GetParameter(2) / sqrt(JetResponseEt2900Eta5->GetEntries());
//xe[21]=fit[21]->GetParameter(2) / sqrt(JetResponseEt4500Eta5->GetEntries());

for (Int_t igogo=0; igogo<n; igogo++){
 x[igogo]=fit[igogo]->GetParameter(1);
 xe[igogo]=fit[igogo]->GetParError(1);
}

for (Int_t igogo=0; igogo<n; igogo++){
 cout<<"   "<< xe[igogo] << endl; 
}

 cout<< endl;
 cout<<"  0  "<< x[0] << "  " << JetResponseEt10Eta5->GetEntries() << "  " <<  EtGenJetEt10Eta5->GetMean() << endl;
 cout<<"  1  "<< x[1] << "  " << JetResponseEt12Eta5->GetEntries() << "  " <<  EtGenJetEt12Eta5->GetMean() << endl;
 cout<<"  2  "<< x[2] << "  " << JetResponseEt15Eta5->GetEntries() << "  " <<  EtGenJetEt15Eta5->GetMean()  << endl;
 cout<<"  3  "<< x[3] << "  " << JetResponseEt20Eta5->GetEntries() << "  " <<  EtGenJetEt20Eta5->GetMean()  << endl;
 cout<<"  4  "<< x[4] << "  " << JetResponseEt27Eta5->GetEntries() << "  " <<  EtGenJetEt27Eta5->GetMean()  << endl;
 cout<<"  5  "<< x[5] << "  " << JetResponseEt35Eta5->GetEntries() << "  " <<  EtGenJetEt35Eta5->GetMean()  << endl;
 cout<<"  6  "<< x[6] << "  " << JetResponseEt45Eta5->GetEntries() << "  " <<  EtGenJetEt45Eta5->GetMean()  << endl;
 cout<<"  7  "<< x[7] << "  " << JetResponseEt57Eta5->GetEntries() << "  " <<  EtGenJetEt57Eta5->GetMean()  << endl;
 cout<<"  8  "<< x[8] << "  " << JetResponseEt72Eta5->GetEntries() << "  " <<  EtGenJetEt72Eta5->GetMean()  << endl;
 cout<<"  9  "<< x[9] << "  " << JetResponseEt90Eta5->GetEntries()  << "  " <<  EtGenJetEt90Eta5->GetMean() << endl;
 cout<<" 10  "<< x[10] << "  " << JetResponseEt120Eta5->GetEntries()  << "  " <<  EtGenJetEt120Eta5->GetMean() << endl;
 cout<<" 11  "<< x[11] << "  " << JetResponseEt150Eta5->GetEntries()  << "  " <<  EtGenJetEt150Eta5->GetMean() << endl;
 cout<<" 12  "<< x[12] << "  " << JetResponseEt200Eta5->GetEntries() << "  " <<  EtGenJetEt200Eta5->GetMean()  << endl;
 cout<<" 13  "<< x[13] << "  " << JetResponseEt300Eta5->GetEntries()  << "  " <<  EtGenJetEt300Eta5->GetMean() << endl;
 cout<<" 14  "<< x[14] << "  " << JetResponseEt400Eta5->GetEntries()  << "  " <<  EtGenJetEt400Eta5->GetMean() << endl;
 cout<<" 15  "<< x[15] << "  " << JetResponseEt550Eta5->GetEntries()  << "  " <<  EtGenJetEt550Eta5->GetMean() << endl;
 cout<<" 16  "<< x[16] << "  " << JetResponseEt750Eta5->GetEntries()  << "  " <<  EtGenJetEt750Eta5->GetMean() << endl;
 cout<<" 17  "<< x[17] << "  " << JetResponseEt1000Eta5->GetEntries()  << "  " <<  EtGenJetEt1000Eta5->GetMean() << endl;
 cout<<" 18  "<< x[18] << "  " << JetResponseEt1400Eta5->GetEntries()  << "  " <<  EtGenJetEt1400Eta5->GetMean() << endl;
 cout<<" 19  "<< x[19] << "  " << JetResponseEt2000Eta5->GetEntries()  << "  " <<  EtGenJetEt2000Eta5->GetMean() << endl;
 cout<<" 20  "<< x[20] << "  " << JetResponseEt2900Eta5->GetEntries()  << "  " <<  EtGenJetEt2900Eta5->GetMean() << endl;
// cout<<" 21 "<< x[21] << "  " << JetResponseEt27Eta5->GetEntries() << endl;
 cout<< endl;


y[0]=EtGenJetEt10Eta5->GetMean();
y[1]=EtGenJetEt12Eta5->GetMean();
y[2]=EtGenJetEt15Eta5->GetMean();
y[3]=EtGenJetEt20Eta5->GetMean();
y[4]=EtGenJetEt27Eta5->GetMean();
y[5]=EtGenJetEt35Eta5->GetMean();
y[6]=EtGenJetEt45Eta5->GetMean();
y[7]=EtGenJetEt57Eta5->GetMean();
y[8]=EtGenJetEt72Eta5->GetMean();
y[9]=EtGenJetEt90Eta5->GetMean();
y[10]=EtGenJetEt120Eta5->GetMean();
y[11]=EtGenJetEt150Eta5->GetMean();
y[12]=EtGenJetEt200Eta5->GetMean();
y[13]=EtGenJetEt300Eta5->GetMean();
y[14]=EtGenJetEt400Eta5->GetMean();
y[15]=EtGenJetEt550Eta5->GetMean();
y[16]=EtGenJetEt750Eta5->GetMean();
y[17]=EtGenJetEt1000Eta5->GetMean();
y[18]=EtGenJetEt1400Eta5->GetMean();
y[19]=EtGenJetEt2000Eta5->GetMean();
y[20]=EtGenJetEt2900Eta5->GetMean();
//y[20]=EtGenJetEt4500Eta5->GetMean();

ye[0]=EtGenJetEt10Eta5->GetRMS() / sqrt(EtGenJetEt10Eta5->GetEntries());
ye[1]=EtGenJetEt12Eta5->GetRMS() / sqrt(EtGenJetEt12Eta5->GetEntries());
ye[2]=EtGenJetEt15Eta5->GetRMS() / sqrt(EtGenJetEt15Eta5->GetEntries());
ye[3]=EtGenJetEt20Eta5->GetRMS() / sqrt(EtGenJetEt20Eta5->GetEntries());
ye[4]=EtGenJetEt27Eta5->GetRMS() / sqrt(EtGenJetEt27Eta5->GetEntries());
ye[5]=EtGenJetEt35Eta5->GetRMS() / sqrt(EtGenJetEt35Eta5->GetEntries());
ye[6]=EtGenJetEt45Eta5->GetRMS() / sqrt(EtGenJetEt45Eta5->GetEntries());
ye[7]=EtGenJetEt57Eta5->GetRMS() / sqrt(EtGenJetEt57Eta5->GetEntries());
ye[8]=EtGenJetEt72Eta5->GetRMS() / sqrt(EtGenJetEt72Eta5->GetEntries());
ye[9]=EtGenJetEt90Eta5->GetRMS() / sqrt(EtGenJetEt90Eta5->GetEntries());
ye[10]=EtGenJetEt120Eta5->GetRMS() / sqrt(EtGenJetEt120Eta5->GetEntries());
ye[11]=EtGenJetEt150Eta5->GetRMS() / sqrt(EtGenJetEt150Eta5->GetEntries());
ye[12]=EtGenJetEt200Eta5->GetRMS() / sqrt(EtGenJetEt200Eta5->GetEntries());
ye[13]=EtGenJetEt300Eta5->GetRMS() / sqrt(EtGenJetEt300Eta5->GetEntries());
ye[14]=EtGenJetEt400Eta5->GetRMS() / sqrt(EtGenJetEt400Eta5->GetEntries());
ye[15]=EtGenJetEt550Eta5->GetRMS() / sqrt(EtGenJetEt550Eta5->GetEntries());
ye[16]=EtGenJetEt750Eta5->GetRMS() / sqrt(EtGenJetEt750Eta5->GetEntries());
//ye[17]=EtGenJetEt1000Eta5->GetRMS() / sqrt(EtGenJetEt1000Eta5->GetEntries());
//ye[18]=EtGenJetEt1400Eta5->GetRMS() / sqrt(EtGenJetEt1400Eta5->GetEntries());
//ye[19]=EtGenJetEt2000Eta5->GetRMS() / sqrt(EtGenJetEt2000Eta5->GetEntries());
//ye[20]=EtGenJetEt2900Eta5->GetRMS() / sqrt(EtGenJetEt2900Eta5->GetEntries());
//ye[21]=EtGenJetEt4500Eta5->GetRMS() / sqrt(EtGenJetEt4500Eta5->GetEntries());

gr1 = new TGraphErrors (n-6,y,x,ye,xe);
gr2 = new TGraphErrors (n-6,y,x,ye,xe);

gr1->SetTitle("MC Jets Calibration");
gr1->SetMarkerStyle(20);
gr1->SetMarkerSize(1.5);
gr1->SetMarkerColor(1);
gr2->SetTitle("MC Jets Calibration 2.487 < |#eta| < 2.690");
gr2->SetMarkerStyle(20);
gr2->SetMarkerSize(1.3);
gr2->SetMarkerColor(1);

gr1->Draw("AP");
Double_t por1, por2;

por1 = 18.;
por2 = 22.;

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


TLatex* lt = new TLatex(170.,0.22,"E_{T} jet GEN, GeV");
lt->SetTextFont(62);
lt->Draw();

TLatex* lt1 = new TLatex(7.4,0.46," E_{T} jet REC / E_{T} jet GEN ");
lt1->SetTextAngle(90);
lt1->SetTextFont(62);
lt1->Draw();
  
c2hA.Print("Et_mc11.eps");
c2hA.Print("Et_mc11.gif");

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

FILE *Out1 = fopen("h11.txt", "w+");

fprintf(Out1," %.3f %.1f %.1f %.5f %.5f %.5f %.5f %.5f %.5f %.5f\n", 
e11, por1, por2, par[0], par[1], par[2], par[3], par[4], par[5], par[6]);

fclose(Out1);

//JetResponseEt4500Eta26->Draw();

}
