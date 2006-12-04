{

  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(00000);
  TFile f1("SimJetResponseMidPoint_R05_all.root");
  //TFile f1("SimJetResponseMidPoint_R05_all.root");

  TCanvas *myc1 = new TCanvas("myc1","",1000,1000);
  myc1->Divide(2,2);  

  myc1->cd(1);

  TLegend *leg1 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg1->SetFillColor(0);

  JetResponseEt20Eta13->Add(JetResponseEt20Eta18,1);
  JetResponseEt20Eta13.SetLineColor(1);
  JetResponseEt20Eta13.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta13," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta13->Add(JetResponseEt15Eta18,1);
  JetResponseEt15Eta13.SetLineColor(2);
  JetResponseEt15Eta13.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta13," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta13->Add(JetResponseEt12Eta18,1);
  JetResponseEt12Eta13.SetLineColor(3);
  JetResponseEt12Eta13.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta13," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta13->Add(JetResponseEt10Eta18,1);
  JetResponseEt10Eta13.SetLineColor(4);
  JetResponseEt10Eta13.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta13," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta13->Add(JetResponseEt5Eta18,1);
  JetResponseEt5Eta13.SetLineColor(15);
  JetResponseEt5Eta13.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta13," 5 < Et < 10 ","l");

  JetResponseEt5Eta13.SetTitle("Midpoint Cone R=0.5, 0.441<|#eta|<0.751");
  JetResponseEt5Eta13.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta13.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta13.SetYTitle("Jets");

  JetResponseEt5Eta13.Draw();
  JetResponseEt20Eta13.Draw("SAME");
  JetResponseEt15Eta13.Draw("SAME");
  JetResponseEt12Eta13.Draw("SAME");
  JetResponseEt10Eta13.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta13->Add(JetResponseEt72Eta18,1);
  JetResponseEt72Eta13.SetLineColor(1);
  JetResponseEt72Eta13.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta13," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta13->Add(JetResponseEt57Eta18,1);
  JetResponseEt57Eta13.SetLineColor(2);
  JetResponseEt57Eta13.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta13," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta13->Add(JetResponseEt45Eta18,1);
  JetResponseEt45Eta13.SetLineColor(3);
  JetResponseEt45Eta13.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta13," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta13->Add(JetResponseEt35Eta18,1);
  JetResponseEt35Eta13.SetLineColor(4);
  JetResponseEt35Eta13.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta13," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta13->Add(JetResponseEt27Eta18,1);
   JetResponseEt27Eta13.SetLineColor(15);
  JetResponseEt27Eta13.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta13," 27 < Et < 35 ","l");

  JetResponseEt27Eta13.SetTitle("Midpoint Cone R=0.5, 0.441<|#eta|<0.751");
  JetResponseEt27Eta13.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta13.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta13.SetYTitle("Jets");

  JetResponseEt27Eta13.Draw();
  JetResponseEt72Eta13.Draw("SAME");
  JetResponseEt57Eta13.Draw("SAME");
  JetResponseEt45Eta13.Draw("SAME");
  JetResponseEt35Eta13.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta13->Add(JetResponseEt1000Eta18,1);
  JetResponseEt1000Eta13.SetLineColor(1);
  JetResponseEt1000Eta13.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta13," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta13->Add(JetResponseEt750Eta18,1);
  JetResponseEt750Eta13.SetLineColor(2);
  JetResponseEt750Eta13.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta13," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta13->Add(JetResponseEt550Eta18,1);
  JetResponseEt550Eta13.SetLineColor(3);
  JetResponseEt550Eta13.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta13," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta13->Add(JetResponseEt400Eta18,1);
   JetResponseEt400Eta13.SetLineColor(4);
  JetResponseEt400Eta13.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta13," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta13->Add(JetResponseEt300Eta18,1);
  JetResponseEt300Eta13.SetLineColor(15);
  JetResponseEt300Eta13.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta13," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta13->Add(JetResponseEt200Eta18,1);
  JetResponseEt200Eta13.SetLineColor(6);
  JetResponseEt200Eta13.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta13," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta13->Add(JetResponseEt150Eta18,1);
  JetResponseEt150Eta13.SetLineColor(7);
  JetResponseEt150Eta13.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta13," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta13->Add(JetResponseEt120Eta18,1);
  JetResponseEt120Eta13.SetLineColor(8);
  JetResponseEt120Eta13.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta13," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta13->Add(JetResponseEt90Eta18,1);
  JetResponseEt90Eta13.SetLineColor(9);
  JetResponseEt90Eta13.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta13," 90 < Et < 120 ","l");

  JetResponseEt400Eta13.SetTitle("Midpoint Cone R=0.5, 0.441<|#eta|<0.751");
  JetResponseEt400Eta13.SetTitleOffset(1.4,"Y");
  JetResponseEt400Eta13.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt400Eta13.SetYTitle("Jets");

  JetResponseEt400Eta13.Draw(); 
  JetResponseEt1000Eta13.Draw("SAME");
  JetResponseEt750Eta13.Draw("SAME");
  JetResponseEt550Eta13.Draw("SAME"); 
  JetResponseEt300Eta13.Draw("SAME"); 
  JetResponseEt200Eta13.Draw("SAME"); 
  JetResponseEt150Eta13.Draw("SAME"); 
  JetResponseEt120Eta13.Draw("SAME"); 
  JetResponseEt90Eta13.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta13->Add(JetResponseEt4500Eta18,1);
  JetResponseEt4500Eta13.SetLineColor(1);
  JetResponseEt4500Eta13.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta13," Et > 4500 ","l");

  JetResponseEt2900Eta13->Add(JetResponseEt2900Eta18,1);
  JetResponseEt2900Eta13.SetLineColor(2);
  JetResponseEt2900Eta13.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta13," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta13->Add(JetResponseEt2000Eta18,1);
  JetResponseEt2000Eta13.SetLineColor(3);
  JetResponseEt2000Eta13.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta13," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta13->Add(JetResponseEt1400Eta18,1);
  JetResponseEt1400Eta13.SetLineColor(4);
  JetResponseEt1400Eta13.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta13," 1400 < Et < 2000 ","l");

  JetResponseEt2000Eta13.SetTitle("Midpoint Cone R=0.5, 0.441<|#eta|<0.751");
  JetResponseEt2000Eta13.SetTitleOffset(1.4,"Y");
  JetResponseEt2000Eta13.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt2000Eta13.SetYTitle("Jets");

  JetResponseEt2000Eta13.Draw();
  JetResponseEt1400Eta13.Draw("SAME");
  JetResponseEt2900Eta13.Draw("SAME");
  JetResponseEt4500Eta13.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta441-751Resp.ps");  
  myc1->Print("MC5eta441-751Resp.eps");  
  myc1->Print("MC5eta441-751Resp.gif");  

}
