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

  JetResponseEt20Eta3->Add(JetResponseEt20Eta28,1);
  JetResponseEt20Eta3.SetLineColor(1);
  JetResponseEt20Eta3.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta3," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta3->Add(JetResponseEt15Eta28,1);
  JetResponseEt15Eta3.SetLineColor(2);
  JetResponseEt15Eta3.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta3," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta3->Add(JetResponseEt12Eta28,1);
  JetResponseEt12Eta3.SetLineColor(3);
  JetResponseEt12Eta3.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta3," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta3->Add(JetResponseEt10Eta28,1);
  JetResponseEt10Eta3.SetLineColor(4);
  JetResponseEt10Eta3.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta3," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta3->Add(JetResponseEt5Eta28,1);
  JetResponseEt5Eta3.SetLineColor(15);
  JetResponseEt5Eta3.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta3," 5 < Et < 10 ","l");

  JetResponseEt5Eta3.SetTitle("Midpoint Cone R=0.5, 2.916<|#eta|<3.284");
  JetResponseEt5Eta3.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta3.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta3.SetYTitle("Jets");

  JetResponseEt5Eta3.Draw();
  JetResponseEt20Eta3.Draw("SAME");
  JetResponseEt15Eta3.Draw("SAME");
  JetResponseEt12Eta3.Draw("SAME");
  JetResponseEt10Eta3.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta3->Add(JetResponseEt72Eta28,1);
  JetResponseEt72Eta3.SetLineColor(1);
  JetResponseEt72Eta3.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta3," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta3->Add(JetResponseEt57Eta28,1);
  JetResponseEt57Eta3.SetLineColor(2);
  JetResponseEt57Eta3.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta3," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta3->Add(JetResponseEt45Eta28,1);
  JetResponseEt45Eta3.SetLineColor(3);
  JetResponseEt45Eta3.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta3," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta3->Add(JetResponseEt35Eta28,1);
  JetResponseEt35Eta3.SetLineColor(4);
  JetResponseEt35Eta3.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta3," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta3->Add(JetResponseEt27Eta28,1);
   JetResponseEt27Eta3.SetLineColor(15);
  JetResponseEt27Eta3.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta3," 27 < Et < 35 ","l");

  JetResponseEt27Eta3.SetTitle("Midpoint Cone R=0.5, 2.916<|#eta|<3.284");
  JetResponseEt27Eta3.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta3.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta3.SetYTitle("Jets");

  JetResponseEt27Eta3.Draw();
  JetResponseEt72Eta3.Draw("SAME");
  JetResponseEt57Eta3.Draw("SAME");
  JetResponseEt45Eta3.Draw("SAME");
  JetResponseEt35Eta3.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta3->Add(JetResponseEt1000Eta28,1);
  JetResponseEt1000Eta3.SetLineColor(1);
  JetResponseEt1000Eta3.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta3," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta3->Add(JetResponseEt750Eta28,1);
  JetResponseEt750Eta3.SetLineColor(2);
  JetResponseEt750Eta3.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta3," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta3->Add(JetResponseEt550Eta28,1);
  JetResponseEt550Eta3.SetLineColor(3);
  JetResponseEt550Eta3.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta3," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta3->Add(JetResponseEt400Eta28,1);
   JetResponseEt400Eta3.SetLineColor(4);
  JetResponseEt400Eta3.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta3," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta3->Add(JetResponseEt300Eta28,1);
  JetResponseEt300Eta3.SetLineColor(15);
  JetResponseEt300Eta3.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta3," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta3->Add(JetResponseEt200Eta28,1);
  JetResponseEt200Eta3.SetLineColor(6);
  JetResponseEt200Eta3.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta3," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta3->Add(JetResponseEt150Eta28,1);
  JetResponseEt150Eta3.SetLineColor(7);
  JetResponseEt150Eta3.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta3," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta3->Add(JetResponseEt120Eta28,1);
  JetResponseEt120Eta3.SetLineColor(8);
  JetResponseEt120Eta3.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta3," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta3->Add(JetResponseEt90Eta28,1);
  JetResponseEt90Eta3.SetLineColor(9);
  JetResponseEt90Eta3.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta3," 90 < Et < 120 ","l");

  JetResponseEt90Eta3.SetTitle("Midpoint Cone R=0.5, 2.916<|#eta|<3.284");
  JetResponseEt90Eta3.SetTitleOffset(1.4,"Y");
  JetResponseEt90Eta3.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt90Eta3.SetYTitle("Jets");

  JetResponseEt90Eta3.Draw(); 
  JetResponseEt1000Eta3.Draw("SAME");
  JetResponseEt750Eta3.Draw("SAME");
  JetResponseEt550Eta3.Draw("SAME"); 
  JetResponseEt300Eta3.Draw("SAME"); 
  JetResponseEt200Eta3.Draw("SAME"); 
  JetResponseEt150Eta3.Draw("SAME"); 
  JetResponseEt120Eta3.Draw("SAME"); 
  JetResponseEt400Eta3.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta3->Add(JetResponseEt4500Eta28,1);
  JetResponseEt4500Eta3.SetLineColor(1);
  JetResponseEt4500Eta3.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta3," Et > 4500 ","l");

  JetResponseEt2900Eta3->Add(JetResponseEt2900Eta28,1);
  JetResponseEt2900Eta3.SetLineColor(2);
  JetResponseEt2900Eta3.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta3," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta3->Add(JetResponseEt2000Eta28,1);
  JetResponseEt2000Eta3.SetLineColor(3);
  JetResponseEt2000Eta3.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta3," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta3->Add(JetResponseEt1400Eta28,1);
  JetResponseEt1400Eta3.SetLineColor(4);
  JetResponseEt1400Eta3.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta3," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta3.SetTitle("Midpoint Cone R=0.5, 2.916<|#eta|<3.284");
  JetResponseEt1400Eta3.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta3.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta3.SetYTitle("Jets");

  JetResponseEt1400Eta3.Draw();
  JetResponseEt2000Eta3.Draw("SAME");
  JetResponseEt2900Eta3.Draw("SAME");
  JetResponseEt4500Eta3.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta2916-3284Resp.ps");  
  myc1->Print("MC5eta2916-3284Resp.eps");  
  myc1->Print("MC5eta2916-3284Resp.gif");  

}
