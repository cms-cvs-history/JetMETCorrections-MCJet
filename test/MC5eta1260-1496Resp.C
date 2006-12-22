{

  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(00000);
  TFile f1("../SimJetResponseMidPoint_R05_all.root");
  //TFile f1("../SimJetResponseMidPoint_R05_all.root");

  TCanvas *myc1 = new TCanvas("myc1","",1000,1000);
  myc1->Divide(2,2);  

  myc1->cd(1);

  TLegend *leg1 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg1->SetFillColor(0);

  JetResponseEt20Eta10->Add(JetResponseEt20Eta21,1);
  JetResponseEt20Eta10.SetLineColor(1);
  JetResponseEt20Eta10.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta10," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta10->Add(JetResponseEt15Eta21,1);
  JetResponseEt15Eta10.SetLineColor(2);
  JetResponseEt15Eta10.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta10," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta10->Add(JetResponseEt12Eta21,1);
  JetResponseEt12Eta10.SetLineColor(3);
  JetResponseEt12Eta10.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta10," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta10->Add(JetResponseEt10Eta21,1);
  JetResponseEt10Eta10.SetLineColor(4);
  JetResponseEt10Eta10.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta10," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta10->Add(JetResponseEt5Eta21,1);
  JetResponseEt5Eta10.SetLineColor(15);
  JetResponseEt5Eta10.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta10," 5 < Et < 10 ","l");

  JetResponseEt5Eta10.SetTitle("Midpoint Cone R=0.5, 1.260<|#eta|<1.496");
  JetResponseEt5Eta10.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta10.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta10.SetYTitle("Jets");

  JetResponseEt5Eta10.Draw();
  JetResponseEt20Eta10.Draw("SAME");
  JetResponseEt15Eta10.Draw("SAME");
  JetResponseEt12Eta10.Draw("SAME");
  JetResponseEt10Eta10.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta10->Add(JetResponseEt72Eta21,1);
  JetResponseEt72Eta10.SetLineColor(1);
  JetResponseEt72Eta10.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta10," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta10->Add(JetResponseEt57Eta21,1);
  JetResponseEt57Eta10.SetLineColor(2);
  JetResponseEt57Eta10.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta10," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta10->Add(JetResponseEt45Eta21,1);
  JetResponseEt45Eta10.SetLineColor(3);
  JetResponseEt45Eta10.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta10," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta10->Add(JetResponseEt35Eta21,1);
  JetResponseEt35Eta10.SetLineColor(4);
  JetResponseEt35Eta10.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta10," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta10->Add(JetResponseEt27Eta21,1);
   JetResponseEt27Eta10.SetLineColor(15);
  JetResponseEt27Eta10.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta10," 27 < Et < 35 ","l");

  JetResponseEt27Eta10.SetTitle("Midpoint Cone R=0.5, 1.260<|#eta|<1.496");
  JetResponseEt27Eta10.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta10.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta10.SetYTitle("Jets");

  JetResponseEt27Eta10.Draw();
  JetResponseEt72Eta10.Draw("SAME");
  JetResponseEt57Eta10.Draw("SAME");
  JetResponseEt45Eta10.Draw("SAME");
  JetResponseEt35Eta10.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta10->Add(JetResponseEt1000Eta21,1);
  JetResponseEt1000Eta10.SetLineColor(1);
  JetResponseEt1000Eta10.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta10," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta10->Add(JetResponseEt750Eta21,1);
  JetResponseEt750Eta10.SetLineColor(2);
  JetResponseEt750Eta10.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta10," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta10->Add(JetResponseEt550Eta21,1);
  JetResponseEt550Eta10.SetLineColor(3);
  JetResponseEt550Eta10.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta10," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta10->Add(JetResponseEt400Eta21,1);
   JetResponseEt400Eta10.SetLineColor(4);
  JetResponseEt400Eta10.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta10," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta10->Add(JetResponseEt300Eta21,1);
  JetResponseEt300Eta10.SetLineColor(15);
  JetResponseEt300Eta10.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta10," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta10->Add(JetResponseEt200Eta21,1);
  JetResponseEt200Eta10.SetLineColor(6);
  JetResponseEt200Eta10.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta10," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta10->Add(JetResponseEt150Eta21,1);
  JetResponseEt150Eta10.SetLineColor(7);
  JetResponseEt150Eta10.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta10," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta10->Add(JetResponseEt120Eta21,1);
  JetResponseEt120Eta10.SetLineColor(8);
  JetResponseEt120Eta10.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta10," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta10->Add(JetResponseEt90Eta21,1);
  JetResponseEt90Eta10.SetLineColor(9);
  JetResponseEt90Eta10.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta10," 90 < Et < 120 ","l");

  JetResponseEt200Eta10.SetTitle("Midpoint Cone R=0.5, 1.260<|#eta|<1.496");
  JetResponseEt200Eta10.SetTitleOffset(1.4,"Y");
  JetResponseEt200Eta10.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt200Eta10.SetYTitle("Jets");

  JetResponseEt200Eta10.Draw(); 
  JetResponseEt1000Eta10.Draw("SAME");
  JetResponseEt750Eta10.Draw("SAME");
  JetResponseEt550Eta10.Draw("SAME"); 
  JetResponseEt300Eta10.Draw("SAME"); 
  JetResponseEt400Eta10.Draw("SAME"); 
  JetResponseEt150Eta10.Draw("SAME"); 
  JetResponseEt120Eta10.Draw("SAME"); 
  JetResponseEt90Eta10.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta10->Add(JetResponseEt4500Eta21,1);
  JetResponseEt4500Eta10.SetLineColor(1);
  JetResponseEt4500Eta10.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta10," Et > 4500 ","l");

  JetResponseEt2900Eta10->Add(JetResponseEt2900Eta21,1);
  JetResponseEt2900Eta10.SetLineColor(2);
  JetResponseEt2900Eta10.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta10," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta10->Add(JetResponseEt2000Eta21,1);
  JetResponseEt2000Eta10.SetLineColor(3);
  JetResponseEt2000Eta10.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta10," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta10->Add(JetResponseEt1400Eta21,1);
  JetResponseEt1400Eta10.SetLineColor(4);
  JetResponseEt1400Eta10.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta10," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta10.SetTitle("Midpoint Cone R=0.5, 1.260<|#eta|<1.496");
  JetResponseEt1400Eta10.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta10.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta10.SetYTitle("Jets");

  JetResponseEt1400Eta10.Draw();
  JetResponseEt2000Eta10.Draw("SAME");
  JetResponseEt2900Eta10.Draw("SAME");
  JetResponseEt4500Eta10.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta1260-1496Resp.ps");  
  myc1->Print("MC5eta1260-1496Resp.eps");  
  myc1->Print("MC5eta1260-1496Resp.gif");  

}
