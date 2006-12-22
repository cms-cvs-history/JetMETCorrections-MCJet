{
gROOT->Reset();

gStyle->SetPalette(1);
gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

gStyle->SetCanvasColor(10);
gStyle->SetFrameFillColor(10);


TFile f("../SimJetResponseMidPoint_R05_all.root");

JetResponseEt10Eta15->Add(JetResponseEt10Eta16,1);
JetResponseEt12Eta15->Add(JetResponseEt12Eta16,1);
JetResponseEt15Eta15->Add(JetResponseEt15Eta16,1);
JetResponseEt20Eta15->Add(JetResponseEt20Eta16,1);
JetResponseEt27Eta15->Add(JetResponseEt27Eta16,1);
JetResponseEt35Eta15->Add(JetResponseEt35Eta16,1);
JetResponseEt45Eta15->Add(JetResponseEt45Eta16,1);
JetResponseEt57Eta15->Add(JetResponseEt57Eta16,1);
JetResponseEt72Eta15->Add(JetResponseEt72Eta16,1);
JetResponseEt90Eta15->Add(JetResponseEt90Eta16,1);
JetResponseEt120Eta15->Add(JetResponseEt120Eta16,1);
JetResponseEt150Eta15->Add(JetResponseEt150Eta16,1);
JetResponseEt200Eta15->Add(JetResponseEt200Eta16,1);
JetResponseEt300Eta15->Add(JetResponseEt300Eta16,1);
JetResponseEt400Eta15->Add(JetResponseEt400Eta16,1);
JetResponseEt550Eta15->Add(JetResponseEt550Eta16,1);
JetResponseEt750Eta15->Add(JetResponseEt750Eta16,1);
JetResponseEt1000Eta15->Add(JetResponseEt1000Eta16,1);
JetResponseEt1400Eta15->Add(JetResponseEt1400Eta16,1);
JetResponseEt2000Eta15->Add(JetResponseEt2000Eta16,1);
JetResponseEt2900Eta15->Add(JetResponseEt2900Eta16,1);
JetResponseEt4500Eta15->Add(JetResponseEt4500Eta16,1);

EtGenJetEt10Eta15->Add(EtGenJetEt10Eta16,1);
EtGenJetEt12Eta15->Add(EtGenJetEt12Eta16,1);
EtGenJetEt15Eta15->Add(EtGenJetEt15Eta16,1);
EtGenJetEt20Eta15->Add(EtGenJetEt20Eta16,1);
EtGenJetEt27Eta15->Add(EtGenJetEt27Eta16,1);
EtGenJetEt35Eta15->Add(EtGenJetEt35Eta16,1);
EtGenJetEt45Eta15->Add(EtGenJetEt45Eta16,1);
EtGenJetEt57Eta15->Add(EtGenJetEt57Eta16,1);
EtGenJetEt72Eta15->Add(EtGenJetEt72Eta16,1);
EtGenJetEt90Eta15->Add(EtGenJetEt90Eta16,1);
EtGenJetEt120Eta15->Add(EtGenJetEt120Eta16,1);
EtGenJetEt150Eta15->Add(EtGenJetEt150Eta16,1);
EtGenJetEt200Eta15->Add(EtGenJetEt200Eta16,1);
EtGenJetEt300Eta15->Add(EtGenJetEt300Eta16,1);
EtGenJetEt400Eta15->Add(EtGenJetEt400Eta16,1);
EtGenJetEt550Eta15->Add(EtGenJetEt550Eta16,1);
EtGenJetEt750Eta15->Add(EtGenJetEt750Eta16,1);
EtGenJetEt1000Eta15->Add(EtGenJetEt1000Eta16,1);
EtGenJetEt1400Eta15->Add(EtGenJetEt1400Eta16,1);
EtGenJetEt2000Eta15->Add(EtGenJetEt2000Eta16,1);
EtGenJetEt2900Eta15->Add(EtGenJetEt2900Eta16,1);
EtGenJetEt4500Eta15->Add(EtGenJetEt4500Eta16,1);


Int_t n = 21;

TF1 *fit[n];

JetResponseEt10Eta15->Fit("gaus","","",.133,.44);
c1.Print("tmp/JetResponseEt10Eta15.gif");
fit[0] = JetResponseEt10Eta15->GetFunction("gaus");

JetResponseEt12Eta15->Fit("gaus","","",0.144669,0.425097);
c1.Print("tmp/JetResponseEt12Eta15.gif");
fit[1] = JetResponseEt12Eta15->GetFunction("gaus");

JetResponseEt15Eta15->Fit("gaus","","",0.152722,0.446012);
c1.Print("tmp/JetResponseEt15Eta15.gif");
fit[2] = JetResponseEt15Eta15->GetFunction("gaus");

JetResponseEt20Eta15->Fit("gaus","","",0.193721,0.495096);
c1.Print("tmp/JetResponseEt20Eta15.gif");
fit[3] = JetResponseEt20Eta15->GetFunction("gaus");

JetResponseEt27Eta15->Fit("gaus","","",0.244562,0.540006);
c1.Print("tmp/JetResponseEt27Eta15.gif");
fit[4] = JetResponseEt27Eta15->GetFunction("gaus");

JetResponseEt35Eta15->Fit("gaus","","",0.308936,0.588493);
c1.Print("tmp/JetResponseEt35Eta15.gif");
fit[5] = JetResponseEt35Eta15->GetFunction("gaus");

JetResponseEt45Eta15->Fit("gaus","","",0.361642,0.638896);
c1.Print("tmp/JetResponseEt45Eta15.gif");
fit[6] = JetResponseEt45Eta15->GetFunction("gaus");

JetResponseEt57Eta15->Fit("gaus","","",0.411069,0.662282);
c1.Print("tmp/JetResponseEt57Eta15.gif");
fit[7] = JetResponseEt57Eta15->GetFunction("gaus");

JetResponseEt72Eta15->Fit("gaus","","",0.46,0.69);
c1.Print("tmp/JetResponseEt72Eta15.gif");
fit[8] = JetResponseEt72Eta15->GetFunction("gaus");

JetResponseEt90Eta15->Fit("gaus","","",0.51,0.74);
c1.Print("tmp/JetResponseEt90Eta15.gif");
fit[9] = JetResponseEt90Eta15->GetFunction("gaus");

JetResponseEt120Eta15->Fit("gaus","","",0.57,0.77);
c1.Print("tmp/JetResponseEt120Eta15.gif");
fit[10] = JetResponseEt120Eta15->GetFunction("gaus");

JetResponseEt150Eta15->Fit("gaus","","",0.6,0.8);
c1.Print("tmp/JetResponseEt150Eta15.gif");
fit[11] = JetResponseEt150Eta15->GetFunction("gaus");

JetResponseEt200Eta15->Fit("gaus","","",0.67,0.83);
c1.Print("tmp/JetResponseEt200Eta15.gif");
fit[12] = JetResponseEt200Eta15->GetFunction("gaus");

JetResponseEt300Eta15->Fit("gaus","","",0.71,0.85);
c1.Print("tmp/JetResponseEt300Eta15.gif");
fit[13] = JetResponseEt300Eta15->GetFunction("gaus");

JetResponseEt400Eta15->Fit("gaus","","",0.74,0.87);
c1.Print("tmp/JetResponseEt400Eta15.gif");
fit[14] = JetResponseEt400Eta15->GetFunction("gaus");

JetResponseEt550Eta15->Fit("gaus","","",0.76,0.88);
c1.Print("tmp/JetResponseEt550Eta15.gif");
fit[15] = JetResponseEt550Eta15->GetFunction("gaus");

JetResponseEt750Eta15->Fit("gaus","","",0.8,0.9);
c1.Print("tmp/JetResponseEt750Eta15.gif");
fit[16] = JetResponseEt750Eta15->GetFunction("gaus");

JetResponseEt1000Eta15->Fit("gaus","","",0.82,0.91);
c1.Print("tmp/JetResponseEt1000Eta15.gif");
fit[17] = JetResponseEt1000Eta15->GetFunction("gaus");

JetResponseEt1400Eta15->Fit("gaus","","",.84,.925);
c1.Print("tmp/JetResponseEt1400Eta15.gif");
fit[18] = JetResponseEt1400Eta15->GetFunction("gaus");

JetResponseEt2000Eta15->Fit("gaus","","",.86,.93);
c1.Print("tmp/JetResponseEt2000Eta15.gif");
fit[19] = JetResponseEt2000Eta15->GetFunction("gaus");

JetResponseEt2900Eta15->Fit("gaus","","",.87,.94);
c1.Print("tmp/JetResponseEt2900Eta15.gif");
fit[20] = JetResponseEt2900Eta15->GetFunction("gaus");

//JetResponseEt4500Eta15->Fit("gaus");
//fit[21] = JetResponseEt4500Eta15->GetFunction("gaus");

Double_t x[n], y[n], xe[n], ye[n];

xe[0]=fit[0]->GetParameter(2) / sqrt(JetResponseEt10Eta15->GetEntries());
xe[1]=fit[1]->GetParameter(2) / sqrt(JetResponseEt12Eta15->GetEntries());
xe[2]=fit[2]->GetParameter(2) / sqrt(JetResponseEt15Eta15->GetEntries());
xe[3]=fit[3]->GetParameter(2) / sqrt(JetResponseEt20Eta15->GetEntries());
xe[4]=fit[4]->GetParameter(2) / sqrt(JetResponseEt27Eta15->GetEntries());
xe[5]=fit[5]->GetParameter(2) / sqrt(JetResponseEt35Eta15->GetEntries());
xe[6]=fit[6]->GetParameter(2) / sqrt(JetResponseEt45Eta15->GetEntries());
xe[7]=fit[7]->GetParameter(2) / sqrt(JetResponseEt57Eta15->GetEntries());
xe[8]=fit[8]->GetParameter(2) / sqrt(JetResponseEt72Eta15->GetEntries());
xe[9]=fit[9]->GetParameter(2) / sqrt(JetResponseEt90Eta15->GetEntries());
xe[10]=fit[10]->GetParameter(2) / sqrt(JetResponseEt120Eta15->GetEntries());
xe[11]=fit[11]->GetParameter(2) / sqrt(JetResponseEt150Eta15->GetEntries());
xe[12]=fit[12]->GetParameter(2) / sqrt(JetResponseEt200Eta15->GetEntries());
xe[13]=fit[13]->GetParameter(2) / sqrt(JetResponseEt300Eta15->GetEntries());
xe[14]=fit[14]->GetParameter(2) / sqrt(JetResponseEt400Eta15->GetEntries());
xe[15]=fit[15]->GetParameter(2) / sqrt(JetResponseEt550Eta15->GetEntries());
xe[16]=fit[16]->GetParameter(2) / sqrt(JetResponseEt750Eta15->GetEntries());
xe[17]=fit[17]->GetParameter(2) / sqrt(JetResponseEt1000Eta15->GetEntries());
xe[18]=fit[18]->GetParameter(2) / sqrt(JetResponseEt1400Eta15->GetEntries());
xe[19]=fit[19]->GetParameter(2) / sqrt(JetResponseEt2000Eta15->GetEntries());
xe[20]=fit[20]->GetParameter(2) / sqrt(JetResponseEt2900Eta15->GetEntries());
//xe[21]=fit[21]->GetParameter(2) / sqrt(JetResponseEt4500Eta15->GetEntries());




for (Int_t igogo=0; igogo<n; igogo++){
 x[igogo]=fit[igogo]->GetParameter(1);
 xe[igogo]=fit[igogo]->GetParError(1);
}

for (Int_t igogo=0; igogo<n; igogo++){
 cout<<"   "<< xe[igogo] << endl; 
}

 cout<< endl;
 cout<<"  0  "<< x[0] << "  " << JetResponseEt10Eta15->GetEntries() << "  " <<  EtGenJetEt10Eta15->GetMean() << endl;
 cout<<"  1  "<< x[1] << "  " << JetResponseEt12Eta15->GetEntries() << "  " <<  EtGenJetEt12Eta15->GetMean() << endl;
 cout<<"  2  "<< x[2] << "  " << JetResponseEt15Eta15->GetEntries() << "  " <<  EtGenJetEt15Eta15->GetMean()  << endl;
 cout<<"  3  "<< x[3] << "  " << JetResponseEt20Eta15->GetEntries() << "  " <<  EtGenJetEt20Eta15->GetMean()  << endl;
 cout<<"  4  "<< x[4] << "  " << JetResponseEt27Eta15->GetEntries() << "  " <<  EtGenJetEt27Eta15->GetMean()  << endl;
 cout<<"  5  "<< x[5] << "  " << JetResponseEt35Eta15->GetEntries() << "  " <<  EtGenJetEt35Eta15->GetMean()  << endl;
 cout<<"  6  "<< x[6] << "  " << JetResponseEt45Eta15->GetEntries() << "  " <<  EtGenJetEt45Eta15->GetMean()  << endl;
 cout<<"  7  "<< x[7] << "  " << JetResponseEt57Eta15->GetEntries() << "  " <<  EtGenJetEt57Eta15->GetMean()  << endl;
 cout<<"  8  "<< x[8] << "  " << JetResponseEt72Eta15->GetEntries() << "  " <<  EtGenJetEt72Eta15->GetMean()  << endl;
 cout<<"  9  "<< x[9] << "  " << JetResponseEt90Eta15->GetEntries()  << "  " <<  EtGenJetEt90Eta15->GetMean() << endl;
 cout<<" 10  "<< x[10] << "  " << JetResponseEt120Eta15->GetEntries()  << "  " <<  EtGenJetEt120Eta15->GetMean() << endl;
 cout<<" 11  "<< x[11] << "  " << JetResponseEt150Eta15->GetEntries()  << "  " <<  EtGenJetEt150Eta15->GetMean() << endl;
 cout<<" 12  "<< x[12] << "  " << JetResponseEt200Eta15->GetEntries() << "  " <<  EtGenJetEt200Eta15->GetMean()  << endl;
 cout<<" 13  "<< x[13] << "  " << JetResponseEt300Eta15->GetEntries()  << "  " <<  EtGenJetEt300Eta15->GetMean() << endl;
 cout<<" 14  "<< x[14] << "  " << JetResponseEt400Eta15->GetEntries()  << "  " <<  EtGenJetEt400Eta15->GetMean() << endl;
 cout<<" 15  "<< x[15] << "  " << JetResponseEt550Eta15->GetEntries()  << "  " <<  EtGenJetEt550Eta15->GetMean() << endl;
 cout<<" 16  "<< x[16] << "  " << JetResponseEt750Eta15->GetEntries()  << "  " <<  EtGenJetEt750Eta15->GetMean() << endl;
 cout<<" 17  "<< x[17] << "  " << JetResponseEt1000Eta15->GetEntries()  << "  " <<  EtGenJetEt1000Eta15->GetMean() << endl;
 cout<<" 18  "<< x[18] << "  " << JetResponseEt1400Eta15->GetEntries()  << "  " <<  EtGenJetEt1400Eta15->GetMean() << endl;
 cout<<" 19  "<< x[19] << "  " << JetResponseEt2000Eta15->GetEntries()  << "  " <<  EtGenJetEt2000Eta15->GetMean() << endl;
 cout<<" 20  "<< x[20] << "  " << JetResponseEt2900Eta15->GetEntries()  << "  " <<  EtGenJetEt2900Eta15->GetMean() << endl;
// cout<<" 21 "<< x[21] << "  " << JetResponseEt27Eta15->GetEntries() << endl;
 cout<< endl;


y[0]=EtGenJetEt10Eta15->GetMean();
y[1]=EtGenJetEt12Eta15->GetMean();
y[2]=EtGenJetEt15Eta15->GetMean();
y[3]=EtGenJetEt20Eta15->GetMean();
y[4]=EtGenJetEt27Eta15->GetMean();
y[5]=EtGenJetEt35Eta15->GetMean();
y[6]=EtGenJetEt45Eta15->GetMean();
y[7]=EtGenJetEt57Eta15->GetMean();
y[8]=EtGenJetEt72Eta15->GetMean();
y[9]=EtGenJetEt90Eta15->GetMean();
y[10]=EtGenJetEt120Eta15->GetMean();
y[11]=EtGenJetEt150Eta15->GetMean();
y[12]=EtGenJetEt200Eta15->GetMean();
y[13]=EtGenJetEt300Eta15->GetMean();
y[14]=EtGenJetEt400Eta15->GetMean();
y[15]=EtGenJetEt550Eta15->GetMean();
y[16]=EtGenJetEt750Eta15->GetMean();
y[17]=EtGenJetEt1000Eta15->GetMean();
y[18]=EtGenJetEt1400Eta15->GetMean();
y[19]=EtGenJetEt2000Eta15->GetMean();
y[20]=EtGenJetEt2900Eta15->GetMean();
//y[20]=EtGenJetEt4500Eta15->GetMean();

ye[0]=EtGenJetEt10Eta15->GetRMS() / sqrt(EtGenJetEt10Eta15->GetEntries());
ye[1]=EtGenJetEt12Eta15->GetRMS() / sqrt(EtGenJetEt12Eta15->GetEntries());
ye[2]=EtGenJetEt15Eta15->GetRMS() / sqrt(EtGenJetEt15Eta15->GetEntries());
ye[3]=EtGenJetEt20Eta15->GetRMS() / sqrt(EtGenJetEt20Eta15->GetEntries());
ye[4]=EtGenJetEt27Eta15->GetRMS() / sqrt(EtGenJetEt27Eta15->GetEntries());
ye[5]=EtGenJetEt35Eta15->GetRMS() / sqrt(EtGenJetEt35Eta15->GetEntries());
ye[6]=EtGenJetEt45Eta15->GetRMS() / sqrt(EtGenJetEt45Eta15->GetEntries());
ye[7]=EtGenJetEt57Eta15->GetRMS() / sqrt(EtGenJetEt57Eta15->GetEntries());
ye[8]=EtGenJetEt72Eta15->GetRMS() / sqrt(EtGenJetEt72Eta15->GetEntries());
ye[9]=EtGenJetEt90Eta15->GetRMS() / sqrt(EtGenJetEt90Eta15->GetEntries());
ye[10]=EtGenJetEt120Eta15->GetRMS() / sqrt(EtGenJetEt120Eta15->GetEntries());
ye[11]=EtGenJetEt150Eta15->GetRMS() / sqrt(EtGenJetEt150Eta15->GetEntries());
ye[12]=EtGenJetEt200Eta15->GetRMS() / sqrt(EtGenJetEt200Eta15->GetEntries());
ye[13]=EtGenJetEt300Eta15->GetRMS() / sqrt(EtGenJetEt300Eta15->GetEntries());
ye[14]=EtGenJetEt400Eta15->GetRMS() / sqrt(EtGenJetEt400Eta15->GetEntries());
ye[15]=EtGenJetEt550Eta15->GetRMS() / sqrt(EtGenJetEt550Eta15->GetEntries());
ye[16]=EtGenJetEt750Eta15->GetRMS() / sqrt(EtGenJetEt750Eta15->GetEntries());
ye[17]=EtGenJetEt1000Eta15->GetRMS() / sqrt(EtGenJetEt1000Eta15->GetEntries());
ye[18]=EtGenJetEt1400Eta15->GetRMS() / sqrt(EtGenJetEt1400Eta15->GetEntries());
ye[19]=EtGenJetEt2000Eta15->GetRMS() / sqrt(EtGenJetEt2000Eta15->GetEntries());
ye[20]=EtGenJetEt2900Eta15->GetRMS() / sqrt(EtGenJetEt2900Eta15->GetEntries());
//ye[21]=EtGenJetEt4500Eta15->GetRMS() / sqrt(EtGenJetEt4500Eta15->GetEntries());

gr1 = new TGraphErrors (n,y,x,ye,xe);
gr2 = new TGraphErrors (n,y,x,ye,xe);

gr1->SetTitle("MC Jets Calibration");
gr1->SetMarkerStyle(20);
gr1->SetMarkerSize(1.5);
gr1->SetMarkerColor(1);
gr2->SetTitle("MC Jets Calibration | #eta | < 0.226");
gr2->SetMarkerStyle(20);
gr2->SetMarkerSize(1.3);
gr2->SetMarkerColor(1);

gr1->Draw("AP");
Double_t por1, por2;

por1 = 18.;
por2 = 28.;

TF1 *func1 = new TF1("func1","[0]*sqrt(x +[1]) + [2]",10.,por2-5.);
TF1 *func2 = new TF1("func2","[0]/(sqrt([1]*x + [2])) + [3] ",por1,5000.);
TF1 *func3 = new TF1("func3","pol1 ",por1,por2);

func2->SetParameter(0,-3.);
//func2->SetParameter(2,-5.);
//func2->SetParameter(3,1.);
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

TF1 *ORCAfunc1 = new TF1("func1","0.28157*sqrt(x +372.95317) -5.22619",10.,porog1);
TF1 *ORCAfunc2 = new TF1("func2","-2.91031/(sqrt(0.79738*x + 4.15229)) + 0.99837 ",porog2,5000.);
TF1 *ORCAfunc3 = new TF1("func3","pol1 ",45.,55.);

a1 = 0.28157*sqrt(45. +372.95317) -5.22619;
a2 = -2.91031/(sqrt(0.79738*55. + 4.15229)) + 0.99837;

ORCAfunc3->SetParameter(0,(a1*porog2 - a2*porog1)/(porog2-porog1));
ORCAfunc3->SetParameter(1,(a2-a1)/(porog2-porog1));

//ORCAfunc1->Draw("same");
//ORCAfunc2->Draw("same");
//ORCAfunc3->Draw("same");

TLatex* lt = new TLatex(500.,0.14,"E_{T} jet GEN, GeV");
lt->SetTextFont(62);
lt->Draw();

TLatex* lt1 = new TLatex(6.4,0.47," E_{T} jet REC / E_{T} jet GEN ");
lt1->SetTextAngle(90);
lt1->SetTextFont(62);
lt1->Draw();
  
c2hA.Print("Et_mc01.eps");
c2hA.Print("Et_mc01.gif");

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

FILE *Out1 = fopen("h01.txt", "w+");

fprintf(Out1," %.3f %.1f %.1f %.5f %.5f %.5f %.5f %.5f %.5f %.5f\n", 
e1, por1, por2, par[0], par[1], par[2], par[3], par[4], par[5], par[6]);

fclose(Out1);

 cout<< endl;

Double_t xs[n];

for (Int_t igogo2=0; igogo2<n; igogo2++){
 xs[igogo2]=fit[igogo2]->GetParameter(2);
}

for (Int_t ij=0; ij<n; ij++)
 {
 cout << ij <<"    "<< x[ij] << "  " << x[ij]-xs[ij] << "  "<< x[ij]+xs[ij] << endl;
 }

//JetResponseEt4500Eta16->Draw();

}
