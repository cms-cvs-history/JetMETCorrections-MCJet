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

  JetResponseEt20Eta1->Add(JetResponseEt20Eta30,1);
  JetResponseEt20Eta1.SetLineColor(1);
  JetResponseEt20Eta1.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta1," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta1->Add(JetResponseEt15Eta30,1);
  JetResponseEt15Eta1.SetLineColor(2);
  JetResponseEt15Eta1.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta1," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta1->Add(JetResponseEt12Eta30,1);
  JetResponseEt12Eta1.SetLineColor(3);
  JetResponseEt12Eta1.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta1," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta1->Add(JetResponseEt10Eta30,1);
  JetResponseEt10Eta1.SetLineColor(4);
  JetResponseEt10Eta1.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta1," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta1->Add(JetResponseEt5Eta30,1);
  JetResponseEt5Eta1.SetLineColor(15);
  JetResponseEt5Eta1.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta1," 5 < Et < 10 ","l");

  JetResponseEt5Eta1.SetTitle("Midpoint Cone R=0.5, 4.0<|#eta|<4.4");
  JetResponseEt5Eta1.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta1.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta1.SetYTitle("Jets");

  JetResponseEt5Eta1.Draw();
  JetResponseEt20Eta1.Draw("SAME");
  JetResponseEt15Eta1.Draw("SAME");
  JetResponseEt12Eta1.Draw("SAME");
  JetResponseEt10Eta1.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta1->Add(JetResponseEt72Eta30,1);
  JetResponseEt72Eta1.SetLineColor(1);
  JetResponseEt72Eta1.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta1," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta1->Add(JetResponseEt57Eta30,1);
  JetResponseEt57Eta1.SetLineColor(2);
  JetResponseEt57Eta1.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta1," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta1->Add(JetResponseEt45Eta30,1);
  JetResponseEt45Eta1.SetLineColor(3);
  JetResponseEt45Eta1.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta1," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta1->Add(JetResponseEt35Eta30,1);
  JetResponseEt35Eta1.SetLineColor(4);
  JetResponseEt35Eta1.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta1," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta1->Add(JetResponseEt27Eta30,1);
   JetResponseEt27Eta1.SetLineColor(15);
  JetResponseEt27Eta1.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta1," 27 < Et < 35 ","l");

  JetResponseEt27Eta1.SetTitle("Midpoint Cone R=0.5, 4.0<|#eta|<4.4");
  JetResponseEt27Eta1.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta1.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta1.SetYTitle("Jets");

  JetResponseEt27Eta1.Draw();
  JetResponseEt72Eta1.Draw("SAME");
  JetResponseEt57Eta1.Draw("SAME");
  JetResponseEt45Eta1.Draw("SAME");
  JetResponseEt35Eta1.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta1->Add(JetResponseEt1000Eta30,1);
  JetResponseEt1000Eta1.SetLineColor(1);
  JetResponseEt1000Eta1.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta1," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta1->Add(JetResponseEt750Eta30,1);
  JetResponseEt750Eta1.SetLineColor(2);
  JetResponseEt750Eta1.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta1," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta1->Add(JetResponseEt550Eta30,1);
  JetResponseEt550Eta1.SetLineColor(3);
  JetResponseEt550Eta1.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta1," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta1->Add(JetResponseEt400Eta30,1);
   JetResponseEt400Eta1.SetLineColor(4);
  JetResponseEt400Eta1.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta1," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta1->Add(JetResponseEt300Eta30,1);
  JetResponseEt300Eta1.SetLineColor(15);
  JetResponseEt300Eta1.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta1," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta1->Add(JetResponseEt200Eta30,1);
  JetResponseEt200Eta1.SetLineColor(6);
  JetResponseEt200Eta1.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta1," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta1->Add(JetResponseEt150Eta30,1);
  JetResponseEt150Eta1.SetLineColor(7);
  JetResponseEt150Eta1.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta1," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta1->Add(JetResponseEt120Eta30,1);
  JetResponseEt120Eta1.SetLineColor(8);
  JetResponseEt120Eta1.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta1," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta1->Add(JetResponseEt90Eta30,1);
  JetResponseEt90Eta1.SetLineColor(9);
  JetResponseEt90Eta1.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta1," 90 < Et < 120 ","l");

  JetResponseEt90Eta1.SetTitle("Midpoint Cone R=0.5, 4.0<|#eta|<4.4");
  JetResponseEt90Eta1.SetTitleOffset(1.4,"Y");
  JetResponseEt90Eta1.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt90Eta1.SetYTitle("Jets");

  JetResponseEt90Eta1.Draw(); 
  JetResponseEt1000Eta1.Draw("SAME");
  JetResponseEt750Eta1.Draw("SAME");
  JetResponseEt550Eta1.Draw("SAME"); 
  JetResponseEt300Eta1.Draw("SAME"); 
  JetResponseEt200Eta1.Draw("SAME"); 
  JetResponseEt150Eta1.Draw("SAME"); 
  JetResponseEt120Eta1.Draw("SAME"); 
  JetResponseEt400Eta1.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta1->Add(JetResponseEt4500Eta30,1);
  JetResponseEt4500Eta1.SetLineColor(1);
  JetResponseEt4500Eta1.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta1," Et > 4500 ","l");

  JetResponseEt2900Eta1->Add(JetResponseEt2900Eta30,1);
  JetResponseEt2900Eta1.SetLineColor(2);
  JetResponseEt2900Eta1.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta1," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta1->Add(JetResponseEt2000Eta30,1);
  JetResponseEt2000Eta1.SetLineColor(3);
  JetResponseEt2000Eta1.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta1," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta1->Add(JetResponseEt1400Eta30,1);
  JetResponseEt1400Eta1.SetLineColor(4);
  JetResponseEt1400Eta1.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta1," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta1.SetTitle("Midpoint Cone R=0.5, 4.0<|#eta|<4.4");
  JetResponseEt1400Eta1.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta1.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta1.SetYTitle("Jets");

  JetResponseEt1400Eta1.Draw();
  JetResponseEt2000Eta1.Draw("SAME");
  JetResponseEt2900Eta1.Draw("SAME");
  JetResponseEt4500Eta1.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta4000-4400Resp.ps");  
  myc1->Print("MC5eta4000-4400Resp.eps");  
  myc1->Print("MC5eta4000-4400Resp.gif");  

}
