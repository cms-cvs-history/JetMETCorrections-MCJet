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

  JetResponseEt20Eta7->Add(JetResponseEt20Eta24,1);
  JetResponseEt20Eta7.SetLineColor(1);
  JetResponseEt20Eta7.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta7," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta7->Add(JetResponseEt15Eta24,1);
  JetResponseEt15Eta7.SetLineColor(2);
  JetResponseEt15Eta7.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta7," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta7->Add(JetResponseEt12Eta24,1);
  JetResponseEt12Eta7.SetLineColor(3);
  JetResponseEt12Eta7.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta7," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta7->Add(JetResponseEt10Eta24,1);
  JetResponseEt10Eta7.SetLineColor(4);
  JetResponseEt10Eta7.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta7," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta7->Add(JetResponseEt5Eta24,1);
  JetResponseEt5Eta7.SetLineColor(15);
  JetResponseEt5Eta7.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta7," 5 < Et < 10 ","l");

  JetResponseEt5Eta7.SetTitle("Midpoint Cone R=0.5, 2.046<|#eta|<2.295");
  JetResponseEt5Eta7.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta7.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta7.SetYTitle("Jets");

  JetResponseEt5Eta7.Draw();
  JetResponseEt20Eta7.Draw("SAME");
  JetResponseEt15Eta7.Draw("SAME");
  JetResponseEt12Eta7.Draw("SAME");
  JetResponseEt10Eta7.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta7->Add(JetResponseEt72Eta24,1);
  JetResponseEt72Eta7.SetLineColor(1);
  JetResponseEt72Eta7.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta7," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta7->Add(JetResponseEt57Eta24,1);
  JetResponseEt57Eta7.SetLineColor(2);
  JetResponseEt57Eta7.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta7," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta7->Add(JetResponseEt45Eta24,1);
  JetResponseEt45Eta7.SetLineColor(3);
  JetResponseEt45Eta7.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta7," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta7->Add(JetResponseEt35Eta24,1);
  JetResponseEt35Eta7.SetLineColor(4);
  JetResponseEt35Eta7.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta7," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta7->Add(JetResponseEt27Eta24,1);
   JetResponseEt27Eta7.SetLineColor(15);
  JetResponseEt27Eta7.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta7," 27 < Et < 35 ","l");

  JetResponseEt27Eta7.SetTitle("Midpoint Cone R=0.5, 2.046<|#eta|<2.295");
  JetResponseEt27Eta7.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta7.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta7.SetYTitle("Jets");

  JetResponseEt27Eta7.Draw();
  JetResponseEt72Eta7.Draw("SAME");
  JetResponseEt57Eta7.Draw("SAME");
  JetResponseEt45Eta7.Draw("SAME");
  JetResponseEt35Eta7.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta7->Add(JetResponseEt1000Eta24,1);
  JetResponseEt1000Eta7.SetLineColor(1);
  JetResponseEt1000Eta7.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta7," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta7->Add(JetResponseEt750Eta24,1);
  JetResponseEt750Eta7.SetLineColor(2);
  JetResponseEt750Eta7.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta7," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta7->Add(JetResponseEt550Eta24,1);
  JetResponseEt550Eta7.SetLineColor(3);
  JetResponseEt550Eta7.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta7," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta7->Add(JetResponseEt400Eta24,1);
   JetResponseEt400Eta7.SetLineColor(4);
  JetResponseEt400Eta7.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta7," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta7->Add(JetResponseEt300Eta24,1);
  JetResponseEt300Eta7.SetLineColor(15);
  JetResponseEt300Eta7.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta7," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta7->Add(JetResponseEt200Eta24,1);
  JetResponseEt200Eta7.SetLineColor(6);
  JetResponseEt200Eta7.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta7," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta7->Add(JetResponseEt150Eta24,1);
  JetResponseEt150Eta7.SetLineColor(7);
  JetResponseEt150Eta7.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta7," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta7->Add(JetResponseEt120Eta24,1);
  JetResponseEt120Eta7.SetLineColor(8);
  JetResponseEt120Eta7.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta7," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta7->Add(JetResponseEt90Eta24,1);
  JetResponseEt90Eta7.SetLineColor(9);
  JetResponseEt90Eta7.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta7," 90 < Et < 120 ","l");

  JetResponseEt200Eta7.SetTitle("Midpoint Cone R=0.5, 2.046<|#eta|<2.295");
  JetResponseEt200Eta7.SetTitleOffset(1.4,"Y");
  JetResponseEt200Eta7.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt200Eta7.SetYTitle("Jets");

  JetResponseEt200Eta7.Draw(); 
  JetResponseEt1000Eta7.Draw("SAME");
  JetResponseEt750Eta7.Draw("SAME");
  JetResponseEt550Eta7.Draw("SAME"); 
  JetResponseEt300Eta7.Draw("SAME"); 
  JetResponseEt90Eta7.Draw("SAME"); 
  JetResponseEt150Eta7.Draw("SAME"); 
  JetResponseEt120Eta7.Draw("SAME"); 
  JetResponseEt400Eta7.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta7->Add(JetResponseEt4500Eta24,1);
  JetResponseEt4500Eta7.SetLineColor(1);
  JetResponseEt4500Eta7.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta7," Et > 4500 ","l");

  JetResponseEt2900Eta7->Add(JetResponseEt2900Eta24,1);
  JetResponseEt2900Eta7.SetLineColor(2);
  JetResponseEt2900Eta7.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta7," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta7->Add(JetResponseEt2000Eta24,1);
  JetResponseEt2000Eta7.SetLineColor(3);
  JetResponseEt2000Eta7.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta7," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta7->Add(JetResponseEt1400Eta24,1);
  JetResponseEt1400Eta7.SetLineColor(4);
  JetResponseEt1400Eta7.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta7," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta7.SetTitle("Midpoint Cone R=0.5, 2.046<|#eta|<2.295");
  JetResponseEt1400Eta7.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta7.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta7.SetYTitle("Jets");

  JetResponseEt1400Eta7.Draw();
  JetResponseEt2000Eta7.Draw("SAME");
  JetResponseEt2900Eta7.Draw("SAME");
  JetResponseEt4500Eta7.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta2046-2295Resp.ps");  
  myc1->Print("MC5eta2046-2295Resp.eps");  
  myc1->Print("MC5eta2046-2295Resp.gif");  

}
