{

  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(00000);
  TFile f1("../../SimJetResponseMidPoint_R05_all.root");
  //TFile f1("../../SimJetResponseMidPoint_R05_all.root");

  TCanvas *myc1 = new TCanvas("myc1","",1000,1000);
  myc1->Divide(2,2);  

  myc1->cd(1);

  TLegend *leg1 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg1->SetFillColor(0);

  JetResponseEt20Eta2->Add(JetResponseEt20Eta29,1);
  JetResponseEt20Eta2.SetLineColor(1);
  JetResponseEt20Eta2.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta2," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta2->Add(JetResponseEt15Eta29,1);
  JetResponseEt15Eta2.SetLineColor(2);
  JetResponseEt15Eta2.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta2," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta2->Add(JetResponseEt12Eta29,1);
  JetResponseEt12Eta2.SetLineColor(3);
  JetResponseEt12Eta2.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta2," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta2->Add(JetResponseEt10Eta29,1);
  JetResponseEt10Eta2.SetLineColor(4);
  JetResponseEt10Eta2.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta2," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta2->Add(JetResponseEt5Eta29,1);
  JetResponseEt5Eta2.SetLineColor(15);
  JetResponseEt5Eta2.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta2," 5 < Et < 10 ","l");

  JetResponseEt5Eta2.SetTitle("Midpoint Cone R=0.5, 3.284<|#eta|<4.0");
  JetResponseEt5Eta2.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta2.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta2.SetYTitle("Jets");

  JetResponseEt5Eta2.Draw();
  JetResponseEt20Eta2.Draw("SAME");
  JetResponseEt15Eta2.Draw("SAME");
  JetResponseEt12Eta2.Draw("SAME");
  JetResponseEt10Eta2.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta2->Add(JetResponseEt72Eta29,1);
  JetResponseEt72Eta2.SetLineColor(1);
  JetResponseEt72Eta2.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta2," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta2->Add(JetResponseEt57Eta29,1);
  JetResponseEt57Eta2.SetLineColor(2);
  JetResponseEt57Eta2.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta2," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta2->Add(JetResponseEt45Eta29,1);
  JetResponseEt45Eta2.SetLineColor(3);
  JetResponseEt45Eta2.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta2," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta2->Add(JetResponseEt35Eta29,1);
  JetResponseEt35Eta2.SetLineColor(4);
  JetResponseEt35Eta2.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta2," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta2->Add(JetResponseEt27Eta29,1);
   JetResponseEt27Eta2.SetLineColor(15);
  JetResponseEt27Eta2.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta2," 27 < Et < 35 ","l");

  JetResponseEt27Eta2.SetTitle("Midpoint Cone R=0.5, 3.284<|#eta|<4.0");
  JetResponseEt27Eta2.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta2.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta2.SetYTitle("Jets");

  JetResponseEt27Eta2.Draw();
  JetResponseEt72Eta2.Draw("SAME");
  JetResponseEt57Eta2.Draw("SAME");
  JetResponseEt45Eta2.Draw("SAME");
  JetResponseEt35Eta2.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta2->Add(JetResponseEt1000Eta29,1);
  JetResponseEt1000Eta2.SetLineColor(1);
  JetResponseEt1000Eta2.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta2," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta2->Add(JetResponseEt750Eta29,1);
  JetResponseEt750Eta2.SetLineColor(2);
  JetResponseEt750Eta2.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta2," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta2->Add(JetResponseEt550Eta29,1);
  JetResponseEt550Eta2.SetLineColor(3);
  JetResponseEt550Eta2.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta2," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta2->Add(JetResponseEt400Eta29,1);
   JetResponseEt400Eta2.SetLineColor(4);
  JetResponseEt400Eta2.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta2," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta2->Add(JetResponseEt300Eta29,1);
  JetResponseEt300Eta2.SetLineColor(15);
  JetResponseEt300Eta2.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta2," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta2->Add(JetResponseEt200Eta29,1);
  JetResponseEt200Eta2.SetLineColor(6);
  JetResponseEt200Eta2.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta2," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta2->Add(JetResponseEt150Eta29,1);
  JetResponseEt150Eta2.SetLineColor(7);
  JetResponseEt150Eta2.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta2," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta2->Add(JetResponseEt120Eta29,1);
  JetResponseEt120Eta2.SetLineColor(8);
  JetResponseEt120Eta2.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta2," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta2->Add(JetResponseEt90Eta29,1);
  JetResponseEt90Eta2.SetLineColor(9);
  JetResponseEt90Eta2.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta2," 90 < Et < 120 ","l");

  JetResponseEt90Eta2.SetTitle("Midpoint Cone R=0.5, 3.284<|#eta|<4.0");
  JetResponseEt90Eta2.SetTitleOffset(1.4,"Y");
  JetResponseEt90Eta2.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt90Eta2.SetYTitle("Jets");

  JetResponseEt90Eta2.Draw(); 
  JetResponseEt1000Eta2.Draw("SAME");
  JetResponseEt750Eta2.Draw("SAME");
  JetResponseEt550Eta2.Draw("SAME"); 
  JetResponseEt300Eta2.Draw("SAME"); 
  JetResponseEt200Eta2.Draw("SAME"); 
  JetResponseEt150Eta2.Draw("SAME"); 
  JetResponseEt120Eta2.Draw("SAME"); 
  JetResponseEt400Eta2.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta2->Add(JetResponseEt4500Eta29,1);
  JetResponseEt4500Eta2.SetLineColor(1);
  JetResponseEt4500Eta2.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta2," Et > 4500 ","l");

  JetResponseEt2900Eta2->Add(JetResponseEt2900Eta29,1);
  JetResponseEt2900Eta2.SetLineColor(2);
  JetResponseEt2900Eta2.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta2," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta2->Add(JetResponseEt2000Eta29,1);
  JetResponseEt2000Eta2.SetLineColor(3);
  JetResponseEt2000Eta2.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta2," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta2->Add(JetResponseEt1400Eta29,1);
  JetResponseEt1400Eta2.SetLineColor(4);
  JetResponseEt1400Eta2.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta2," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta2.SetTitle("Midpoint Cone R=0.5, 3.284<|#eta|<4.0");
  JetResponseEt1400Eta2.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta2.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta2.SetYTitle("Jets");

  JetResponseEt1400Eta2.Draw();
  JetResponseEt2000Eta2.Draw("SAME");
  JetResponseEt2900Eta2.Draw("SAME");
  JetResponseEt4500Eta2.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta3284-4000Resp.ps");  
  myc1->Print("MC5eta3284-4000Resp.eps");  
  myc1->Print("MC5eta3284-4000Resp.gif");  

}
