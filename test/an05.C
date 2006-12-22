{
gROOT->Reset();

gStyle->SetPalette(1);
gStyle->SetHistFillStyle(1);
gStyle->SetOptStat(1111);
gStyle->SetOptFit(111); 

gStyle->SetCanvasColor(10);
gStyle->SetFrameFillColor(10);


TFile f("../SimJetResponseMidPoint_R05_all.root");

JetResponseEt10Eta11->Add(JetResponseEt10Eta20,1);
JetResponseEt12Eta11->Add(JetResponseEt12Eta20,1);
JetResponseEt15Eta11->Add(JetResponseEt15Eta20,1);
JetResponseEt20Eta11->Add(JetResponseEt20Eta20,1);
JetResponseEt27Eta11->Add(JetResponseEt27Eta20,1);
JetResponseEt35Eta11->Add(JetResponseEt35Eta20,1);
JetResponseEt45Eta11->Add(JetResponseEt45Eta20,1);
JetResponseEt57Eta11->Add(JetResponseEt57Eta20,1);
JetResponseEt72Eta11->Add(JetResponseEt72Eta20,1);
JetResponseEt90Eta11->Add(JetResponseEt90Eta20,1);
JetResponseEt120Eta11->Add(JetResponseEt120Eta20,1);
JetResponseEt150Eta11->Add(JetResponseEt150Eta20,1);
JetResponseEt200Eta11->Add(JetResponseEt200Eta20,1);
JetResponseEt300Eta11->Add(JetResponseEt300Eta20,1);
JetResponseEt400Eta11->Add(JetResponseEt400Eta20,1);
JetResponseEt550Eta11->Add(JetResponseEt550Eta20,1);
JetResponseEt750Eta11->Add(JetResponseEt750Eta20,1);
JetResponseEt1000Eta11->Add(JetResponseEt1000Eta20,1);
JetResponseEt1400Eta11->Add(JetResponseEt1400Eta20,1);
JetResponseEt2000Eta11->Add(JetResponseEt2000Eta20,1);
JetResponseEt2900Eta11->Add(JetResponseEt2900Eta20,1);
JetResponseEt4500Eta11->Add(JetResponseEt4500Eta20,1);

EtGenJetEt10Eta11->Add(EtGenJetEt10Eta20,1);
EtGenJetEt12Eta11->Add(EtGenJetEt12Eta20,1);
EtGenJetEt15Eta11->Add(EtGenJetEt15Eta20,1);
EtGenJetEt20Eta11->Add(EtGenJetEt20Eta20,1);
EtGenJetEt27Eta11->Add(EtGenJetEt27Eta20,1);
EtGenJetEt35Eta11->Add(EtGenJetEt35Eta20,1);
EtGenJetEt45Eta11->Add(EtGenJetEt45Eta20,1);
EtGenJetEt57Eta11->Add(EtGenJetEt57Eta20,1);
EtGenJetEt72Eta11->Add(EtGenJetEt72Eta20,1);
EtGenJetEt90Eta11->Add(EtGenJetEt90Eta20,1);
EtGenJetEt120Eta11->Add(EtGenJetEt120Eta20,1);
EtGenJetEt150Eta11->Add(EtGenJetEt150Eta20,1);
EtGenJetEt200Eta11->Add(EtGenJetEt200Eta20,1);
EtGenJetEt300Eta11->Add(EtGenJetEt300Eta20,1);
EtGenJetEt400Eta11->Add(EtGenJetEt400Eta20,1);
EtGenJetEt550Eta11->Add(EtGenJetEt550Eta20,1);
EtGenJetEt750Eta11->Add(EtGenJetEt750Eta20,1);
EtGenJetEt1000Eta11->Add(EtGenJetEt1000Eta20,1);
EtGenJetEt1400Eta11->Add(EtGenJetEt1400Eta20,1);
EtGenJetEt2000Eta11->Add(EtGenJetEt2000Eta20,1);
EtGenJetEt2900Eta11->Add(EtGenJetEt2900Eta20,1);
EtGenJetEt4500Eta11->Add(EtGenJetEt4500Eta20,1);


Int_t n = 21;

TF1 *fit[n];

JetResponseEt10Eta11->Fit("gaus","","",.15,.42);
c1.Print("tmp/JetResponseEt10Eta11.gif");
fit[0] = JetResponseEt10Eta11->GetFunction("gaus");

JetResponseEt12Eta11->Fit("gaus","","",0.158,0.41);
c1.Print("tmp/JetResponseEt12Eta11.gif");
fit[1] = JetResponseEt12Eta11->GetFunction("gaus");

JetResponseEt15Eta11->Fit("gaus","","",0.14,0.45);
c1.Print("tmp/JetResponseEt15Eta11.gif");
fit[2] = JetResponseEt15Eta11->GetFunction("gaus");

JetResponseEt20Eta11->Fit("gaus","","",0.182,0.46);
c1.Print("tmp/JetResponseEt20Eta11.gif");
fit[3] = JetResponseEt20Eta11->GetFunction("gaus");

JetResponseEt27Eta11->Fit("gaus","","",0.224,0.507);
c1.Print("tmp/JetResponseEt27Eta11.gif");
fit[4] = JetResponseEt27Eta11->GetFunction("gaus");

JetResponseEt35Eta11->Fit("gaus","","",0.28,0.552);
c1.Print("tmp/JetResponseEt35Eta11.gif");
fit[5] = JetResponseEt35Eta11->GetFunction("gaus");

JetResponseEt45Eta11->Fit("gaus","","",0.338,0.591);
c1.Print("tmp/JetResponseEt45Eta11.gif");
fit[6] = JetResponseEt45Eta11->GetFunction("gaus");

JetResponseEt57Eta11->Fit("gaus","","",0.391,0.621);
c1.Print("tmp/JetResponseEt57Eta11.gif");
fit[7] = JetResponseEt57Eta11->GetFunction("gaus");

JetResponseEt72Eta11->Fit("gaus","","",0.428,0.66);
c1.Print("tmp/JetResponseEt72Eta11.gif");
fit[8] = JetResponseEt72Eta11->GetFunction("gaus");

JetResponseEt90Eta11->Fit("gaus","","",0.486,0.702);
c1.Print("tmp/JetResponseEt90Eta11.gif");
fit[9] = JetResponseEt90Eta11->GetFunction("gaus");

JetResponseEt120Eta11->Fit("gaus","","",0.529,0.733);
c1.Print("tmp/JetResponseEt120Eta11.gif");
fit[10] = JetResponseEt120Eta11->GetFunction("gaus");

JetResponseEt150Eta11->Fit("gaus","","",0.575,0.76);
c1.Print("tmp/JetResponseEt150Eta11.gif");
fit[11] = JetResponseEt150Eta11->GetFunction("gaus");

JetResponseEt200Eta11->Fit("gaus","","",0.631,0.793);
c1.Print("tmp/JetResponseEt200Eta11.gif");
fit[12] = JetResponseEt200Eta11->GetFunction("gaus");

JetResponseEt300Eta11->Fit("gaus","","",0.675,0.825);
c1.Print("tmp/JetResponseEt300Eta11.gif");
fit[13] = JetResponseEt300Eta11->GetFunction("gaus");

JetResponseEt400Eta11->Fit("gaus","","",0.714,0.844);
c1.Print("tmp/JetResponseEt400Eta11.gif");
fit[14] = JetResponseEt400Eta11->GetFunction("gaus");

JetResponseEt550Eta11->Fit("gaus","","",0.738,0.867);
c1.Print("tmp/JetResponseEt550Eta11.gif");
fit[15] = JetResponseEt550Eta11->GetFunction("gaus");

JetResponseEt750Eta11->Fit("gaus","","",0.768,0.883);
c1.Print("tmp/JetResponseEt750Eta11.gif");
fit[16] = JetResponseEt750Eta11->GetFunction("gaus");

JetResponseEt1000Eta11->Fit("gaus","","",0.792,0.897);
c1.Print("tmp/JetResponseEt1000Eta11.gif");
fit[17] = JetResponseEt1000Eta11->GetFunction("gaus");

JetResponseEt1400Eta11->Fit("gaus","","",.815,.9115);
c1.Print("tmp/JetResponseEt1400Eta11.gif");
fit[18] = JetResponseEt1400Eta11->GetFunction("gaus");

JetResponseEt2000Eta11->Fit("gaus","","",.831,.92);
c1.Print("tmp/JetResponseEt2000Eta11.gif");
fit[19] = JetResponseEt2000Eta11->GetFunction("gaus");

JetResponseEt2900Eta11->Fit("gaus","","",.849,.919);
c1.Print("tmp/JetResponseEt2900Eta11.gif");
fit[20] = JetResponseEt2900Eta11->GetFunction("gaus");
//JetResponseEt4500Eta11->Fit("gaus");
//fit[21] = JetResponseEt4500Eta11->GetFunction("gaus");

Double_t x[n], y[n], xe[n], ye[n];

xe[0]=fit[0]->GetParameter(2) / sqrt(JetResponseEt10Eta11->GetEntries());
xe[1]=fit[1]->GetParameter(2) / sqrt(JetResponseEt12Eta11->GetEntries());
xe[2]=fit[2]->GetParameter(2) / sqrt(JetResponseEt15Eta11->GetEntries());
xe[3]=fit[3]->GetParameter(2) / sqrt(JetResponseEt20Eta11->GetEntries());
xe[4]=fit[4]->GetParameter(2) / sqrt(JetResponseEt27Eta11->GetEntries());
xe[5]=fit[5]->GetParameter(2) / sqrt(JetResponseEt35Eta11->GetEntries());
xe[6]=fit[6]->GetParameter(2) / sqrt(JetResponseEt45Eta11->GetEntries());
xe[7]=fit[7]->GetParameter(2) / sqrt(JetResponseEt57Eta11->GetEntries());
xe[8]=fit[8]->GetParameter(2) / sqrt(JetResponseEt72Eta11->GetEntries());
xe[9]=fit[9]->GetParameter(2) / sqrt(JetResponseEt90Eta11->GetEntries());
xe[10]=fit[10]->GetParameter(2) / sqrt(JetResponseEt120Eta11->GetEntries());
xe[11]=fit[11]->GetParameter(2) / sqrt(JetResponseEt150Eta11->GetEntries());
xe[12]=fit[12]->GetParameter(2) / sqrt(JetResponseEt200Eta11->GetEntries());
xe[13]=fit[13]->GetParameter(2) / sqrt(JetResponseEt300Eta11->GetEntries());
xe[14]=fit[14]->GetParameter(2) / sqrt(JetResponseEt400Eta11->GetEntries());
xe[15]=fit[15]->GetParameter(2) / sqrt(JetResponseEt550Eta11->GetEntries());
xe[16]=fit[16]->GetParameter(2) / sqrt(JetResponseEt750Eta11->GetEntries());
xe[17]=fit[17]->GetParameter(2) / sqrt(JetResponseEt1000Eta11->GetEntries());
xe[18]=fit[18]->GetParameter(2) / sqrt(JetResponseEt1400Eta11->GetEntries());
xe[19]=fit[19]->GetParameter(2) / sqrt(JetResponseEt2000Eta11->GetEntries());
xe[20]=fit[20]->GetParameter(2) / sqrt(JetResponseEt2900Eta11->GetEntries());
//xe[21]=fit[21]->GetParameter(2) / sqrt(JetResponseEt4500Eta11->GetEntries());

for (Int_t igogo=0; igogo<n; igogo++){
 x[igogo]=fit[igogo]->GetParameter(1);
 xe[igogo]=fit[igogo]->GetParError(1);
}

for (Int_t igogo=0; igogo<n; igogo++){
 cout<<"   "<< xe[igogo] << endl; 
}

 cout<< endl;
 cout<<"  0  "<< x[0] << "  " << JetResponseEt10Eta11->GetEntries() << "  " <<  EtGenJetEt10Eta11->GetMean() << endl;
 cout<<"  1  "<< x[1] << "  " << JetResponseEt12Eta11->GetEntries() << "  " <<  EtGenJetEt12Eta11->GetMean() << endl;
 cout<<"  2  "<< x[2] << "  " << JetResponseEt15Eta11->GetEntries() << "  " <<  EtGenJetEt15Eta11->GetMean()  << endl;
 cout<<"  3  "<< x[3] << "  " << JetResponseEt20Eta11->GetEntries() << "  " <<  EtGenJetEt20Eta11->GetMean()  << endl;
 cout<<"  4  "<< x[4] << "  " << JetResponseEt27Eta11->GetEntries() << "  " <<  EtGenJetEt27Eta11->GetMean()  << endl;
 cout<<"  5  "<< x[5] << "  " << JetResponseEt35Eta11->GetEntries() << "  " <<  EtGenJetEt35Eta11->GetMean()  << endl;
 cout<<"  6  "<< x[6] << "  " << JetResponseEt45Eta11->GetEntries() << "  " <<  EtGenJetEt45Eta11->GetMean()  << endl;
 cout<<"  7  "<< x[7] << "  " << JetResponseEt57Eta11->GetEntries() << "  " <<  EtGenJetEt57Eta11->GetMean()  << endl;
 cout<<"  8  "<< x[8] << "  " << JetResponseEt72Eta11->GetEntries() << "  " <<  EtGenJetEt72Eta11->GetMean()  << endl;
 cout<<"  9  "<< x[9] << "  " << JetResponseEt90Eta11->GetEntries()  << "  " <<  EtGenJetEt90Eta11->GetMean() << endl;
 cout<<" 10  "<< x[10] << "  " << JetResponseEt120Eta11->GetEntries()  << "  " <<  EtGenJetEt120Eta11->GetMean() << endl;
 cout<<" 11  "<< x[11] << "  " << JetResponseEt150Eta11->GetEntries()  << "  " <<  EtGenJetEt150Eta11->GetMean() << endl;
 cout<<" 12  "<< x[12] << "  " << JetResponseEt200Eta11->GetEntries() << "  " <<  EtGenJetEt200Eta11->GetMean()  << endl;
 cout<<" 13  "<< x[13] << "  " << JetResponseEt300Eta11->GetEntries()  << "  " <<  EtGenJetEt300Eta11->GetMean() << endl;
 cout<<" 14  "<< x[14] << "  " << JetResponseEt400Eta11->GetEntries()  << "  " <<  EtGenJetEt400Eta11->GetMean() << endl;
 cout<<" 15  "<< x[15] << "  " << JetResponseEt550Eta11->GetEntries()  << "  " <<  EtGenJetEt550Eta11->GetMean() << endl;
 cout<<" 16  "<< x[16] << "  " << JetResponseEt750Eta11->GetEntries()  << "  " <<  EtGenJetEt750Eta11->GetMean() << endl;
 cout<<" 17  "<< x[17] << "  " << JetResponseEt1000Eta11->GetEntries()  << "  " <<  EtGenJetEt1000Eta11->GetMean() << endl;
 cout<<" 18  "<< x[18] << "  " << JetResponseEt1400Eta11->GetEntries()  << "  " <<  EtGenJetEt1400Eta11->GetMean() << endl;
 cout<<" 19  "<< x[19] << "  " << JetResponseEt2000Eta11->GetEntries()  << "  " <<  EtGenJetEt2000Eta11->GetMean() << endl;
 cout<<" 20  "<< x[20] << "  " << JetResponseEt2900Eta11->GetEntries()  << "  " <<  EtGenJetEt2900Eta11->GetMean() << endl;
// cout<<" 21 "<< x[21] << "  " << JetResponseEt27Eta11->GetEntries() << endl;
 cout<< endl;


y[0]=EtGenJetEt10Eta11->GetMean();
y[1]=EtGenJetEt12Eta11->GetMean();
y[2]=EtGenJetEt15Eta11->GetMean();
y[3]=EtGenJetEt20Eta11->GetMean();
y[4]=EtGenJetEt27Eta11->GetMean();
y[5]=EtGenJetEt35Eta11->GetMean();
y[6]=EtGenJetEt45Eta11->GetMean();
y[7]=EtGenJetEt57Eta11->GetMean();
y[8]=EtGenJetEt72Eta11->GetMean();
y[9]=EtGenJetEt90Eta11->GetMean();
y[10]=EtGenJetEt120Eta11->GetMean();
y[11]=EtGenJetEt150Eta11->GetMean();
y[12]=EtGenJetEt200Eta11->GetMean();
y[13]=EtGenJetEt300Eta11->GetMean();
y[14]=EtGenJetEt400Eta11->GetMean();
y[15]=EtGenJetEt550Eta11->GetMean();
y[16]=EtGenJetEt750Eta11->GetMean();
y[17]=EtGenJetEt1000Eta11->GetMean();
y[18]=EtGenJetEt1400Eta11->GetMean();
y[19]=EtGenJetEt2000Eta11->GetMean();
y[20]=EtGenJetEt2900Eta11->GetMean();
//y[20]=EtGenJetEt4500Eta11->GetMean();

ye[0]=EtGenJetEt10Eta11->GetRMS() / sqrt(EtGenJetEt10Eta11->GetEntries());
ye[1]=EtGenJetEt12Eta11->GetRMS() / sqrt(EtGenJetEt12Eta11->GetEntries());
ye[2]=EtGenJetEt15Eta11->GetRMS() / sqrt(EtGenJetEt15Eta11->GetEntries());
ye[3]=EtGenJetEt20Eta11->GetRMS() / sqrt(EtGenJetEt20Eta11->GetEntries());
ye[4]=EtGenJetEt27Eta11->GetRMS() / sqrt(EtGenJetEt27Eta11->GetEntries());
ye[5]=EtGenJetEt35Eta11->GetRMS() / sqrt(EtGenJetEt35Eta11->GetEntries());
ye[6]=EtGenJetEt45Eta11->GetRMS() / sqrt(EtGenJetEt45Eta11->GetEntries());
ye[7]=EtGenJetEt57Eta11->GetRMS() / sqrt(EtGenJetEt57Eta11->GetEntries());
ye[8]=EtGenJetEt72Eta11->GetRMS() / sqrt(EtGenJetEt72Eta11->GetEntries());
ye[9]=EtGenJetEt90Eta11->GetRMS() / sqrt(EtGenJetEt90Eta11->GetEntries());
ye[10]=EtGenJetEt120Eta11->GetRMS() / sqrt(EtGenJetEt120Eta11->GetEntries());
ye[11]=EtGenJetEt150Eta11->GetRMS() / sqrt(EtGenJetEt150Eta11->GetEntries());
ye[12]=EtGenJetEt200Eta11->GetRMS() / sqrt(EtGenJetEt200Eta11->GetEntries());
ye[13]=EtGenJetEt300Eta11->GetRMS() / sqrt(EtGenJetEt300Eta11->GetEntries());
ye[14]=EtGenJetEt400Eta11->GetRMS() / sqrt(EtGenJetEt400Eta11->GetEntries());
ye[15]=EtGenJetEt550Eta11->GetRMS() / sqrt(EtGenJetEt550Eta11->GetEntries());
ye[16]=EtGenJetEt750Eta11->GetRMS() / sqrt(EtGenJetEt750Eta11->GetEntries());
ye[17]=EtGenJetEt1000Eta11->GetRMS() / sqrt(EtGenJetEt1000Eta11->GetEntries());
ye[18]=EtGenJetEt1400Eta11->GetRMS() / sqrt(EtGenJetEt1400Eta11->GetEntries());
ye[19]=EtGenJetEt2000Eta11->GetRMS() / sqrt(EtGenJetEt2000Eta11->GetEntries());
ye[20]=EtGenJetEt2900Eta11->GetRMS() / sqrt(EtGenJetEt2900Eta11->GetEntries());
//ye[21]=EtGenJetEt4500Eta11->GetRMS() / sqrt(EtGenJetEt4500Eta11->GetEntries());

gr1 = new TGraphErrors (n,y,x,ye,xe);
gr2 = new TGraphErrors (n,y,x,ye,xe);

gr1->SetTitle("MC Jets Calibration");
gr1->SetMarkerStyle(20);
gr1->SetMarkerSize(1.5);
gr1->SetMarkerColor(1);
gr2->SetTitle("MC Jets Calibration 0.991  < | #eta | < 1.260");
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

TLatex* lt = new TLatex(500.,0.157,"E_{T} jet GEN, GeV");
lt->SetTextFont(62);
lt->Draw();

TLatex* lt1 = new TLatex(6.4,0.47," E_{T} jet REC / E_{T} jet GEN ");
lt1->SetTextAngle(90);
lt1->SetTextFont(62);
lt1->Draw();
  
c2hA.Print("Et_mc05.eps");
c2hA.Print("Et_mc05.gif");

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

FILE *Out1 = fopen("h05.txt", "w+");

fprintf(Out1," %.3f %.1f %.1f %.5f %.5f %.5f %.5f %.5f %.5f %.5f\n", 
e5, por1, por2, par[0], par[1], par[2], par[3], par[4], par[5], par[6]);

fclose(Out1);

//JetResponseEt4500Eta20->Draw();

}
