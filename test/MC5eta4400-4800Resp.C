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

  JetResponseEt20Eta0->Add(JetResponseEt20Eta31,1);
  JetResponseEt20Eta0.SetLineColor(1);
  JetResponseEt20Eta0.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta0," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta0->Add(JetResponseEt15Eta31,1);
  JetResponseEt15Eta0.SetLineColor(2);
  JetResponseEt15Eta0.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta0," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta0->Add(JetResponseEt12Eta31,1);
  JetResponseEt12Eta0.SetLineColor(3);
  JetResponseEt12Eta0.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta0," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta0->Add(JetResponseEt10Eta31,1);
  JetResponseEt10Eta0.SetLineColor(4);
  JetResponseEt10Eta0.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta0," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta0->Add(JetResponseEt5Eta31,1);
  JetResponseEt5Eta0.SetLineColor(15);
  JetResponseEt5Eta0.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta0," 5 < Et < 10 ","l");

  JetResponseEt5Eta0.SetTitle("Midpoint Cone R=0.5, 4.4<|#eta|<4.8");
  JetResponseEt5Eta0.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta0.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta0.SetYTitle("Jets");

  JetResponseEt5Eta0.Draw();
  JetResponseEt20Eta0.Draw("SAME");
  JetResponseEt15Eta0.Draw("SAME");
  JetResponseEt12Eta0.Draw("SAME");
  JetResponseEt10Eta0.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta0->Add(JetResponseEt72Eta31,1);
  JetResponseEt72Eta0.SetLineColor(1);
  JetResponseEt72Eta0.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta0," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta0->Add(JetResponseEt57Eta31,1);
  JetResponseEt57Eta0.SetLineColor(2);
  JetResponseEt57Eta0.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta0," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta0->Add(JetResponseEt45Eta31,1);
  JetResponseEt45Eta0.SetLineColor(3);
  JetResponseEt45Eta0.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta0," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta0->Add(JetResponseEt35Eta31,1);
  JetResponseEt35Eta0.SetLineColor(4);
  JetResponseEt35Eta0.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta0," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta0->Add(JetResponseEt27Eta31,1);
   JetResponseEt27Eta0.SetLineColor(15);
  JetResponseEt27Eta0.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta0," 27 < Et < 35 ","l");

  JetResponseEt27Eta0.SetTitle("Midpoint Cone R=0.5, 4.4<|#eta|<4.8");
  JetResponseEt27Eta0.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta0.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta0.SetYTitle("Jets");

  JetResponseEt27Eta0.Draw();
  JetResponseEt72Eta0.Draw("SAME");
  JetResponseEt57Eta0.Draw("SAME");
  JetResponseEt45Eta0.Draw("SAME");
  JetResponseEt35Eta0.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta0->Add(JetResponseEt1000Eta31,1);
  JetResponseEt1000Eta0.SetLineColor(1);
  JetResponseEt1000Eta0.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta0," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta0->Add(JetResponseEt750Eta31,1);
  JetResponseEt750Eta0.SetLineColor(2);
  JetResponseEt750Eta0.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta0," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta0->Add(JetResponseEt550Eta31,1);
  JetResponseEt550Eta0.SetLineColor(3);
  JetResponseEt550Eta0.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta0," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta0->Add(JetResponseEt400Eta31,1);
   JetResponseEt400Eta0.SetLineColor(4);
  JetResponseEt400Eta0.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta0," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta0->Add(JetResponseEt300Eta31,1);
  JetResponseEt300Eta0.SetLineColor(15);
  JetResponseEt300Eta0.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta0," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta0->Add(JetResponseEt200Eta31,1);
  JetResponseEt200Eta0.SetLineColor(6);
  JetResponseEt200Eta0.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta0," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta0->Add(JetResponseEt150Eta31,1);
  JetResponseEt150Eta0.SetLineColor(7);
  JetResponseEt150Eta0.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta0," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta0->Add(JetResponseEt120Eta31,1);
  JetResponseEt120Eta0.SetLineColor(8);
  JetResponseEt120Eta0.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta0," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta0->Add(JetResponseEt90Eta31,1);
  JetResponseEt90Eta0.SetLineColor(9);
  JetResponseEt90Eta0.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta0," 90 < Et < 120 ","l");

  JetResponseEt90Eta0.SetTitle("Midpoint Cone R=0.5, 4.4<|#eta|<4.8");
  JetResponseEt90Eta0.SetTitleOffset(1.4,"Y");
  JetResponseEt90Eta0.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt90Eta0.SetYTitle("Jets");

  JetResponseEt90Eta0.Draw(); 
  JetResponseEt1000Eta0.Draw("SAME");
  JetResponseEt750Eta0.Draw("SAME");
  JetResponseEt550Eta0.Draw("SAME"); 
  JetResponseEt300Eta0.Draw("SAME"); 
  JetResponseEt200Eta0.Draw("SAME"); 
  JetResponseEt150Eta0.Draw("SAME"); 
  JetResponseEt120Eta0.Draw("SAME"); 
  JetResponseEt400Eta0.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta0->Add(JetResponseEt4500Eta31,1);
  JetResponseEt4500Eta0.SetLineColor(1);
  JetResponseEt4500Eta0.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta0," Et > 4500 ","l");

  JetResponseEt2900Eta0->Add(JetResponseEt2900Eta31,1);
  JetResponseEt2900Eta0.SetLineColor(2);
  JetResponseEt2900Eta0.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta0," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta0->Add(JetResponseEt2000Eta31,1);
  JetResponseEt2000Eta0.SetLineColor(3);
  JetResponseEt2000Eta0.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta0," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta0->Add(JetResponseEt1400Eta31,1);
  JetResponseEt1400Eta0.SetLineColor(4);
  JetResponseEt1400Eta0.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta0," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta0.SetTitle("Midpoint Cone R=0.5, 4.4<|#eta|<4.8");
  JetResponseEt1400Eta0.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta0.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta0.SetYTitle("Jets");

  JetResponseEt1400Eta0.Draw();
  JetResponseEt2000Eta0.Draw("SAME");
  JetResponseEt2900Eta0.Draw("SAME");
  JetResponseEt4500Eta0.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta4400-4800Resp.ps");  
  myc1->Print("MC5eta4400-4800Resp.eps");  
  myc1->Print("MC5eta4400-4800Resp.gif");  

}
