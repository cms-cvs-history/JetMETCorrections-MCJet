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

  JetResponseEt20Eta8->Add(JetResponseEt20Eta23,1);
  JetResponseEt20Eta8.SetLineColor(1);
  JetResponseEt20Eta8.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta8," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta8->Add(JetResponseEt15Eta23,1);
  JetResponseEt15Eta8.SetLineColor(2);
  JetResponseEt15Eta8.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta8," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta8->Add(JetResponseEt12Eta23,1);
  JetResponseEt12Eta8.SetLineColor(3);
  JetResponseEt12Eta8.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta8," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta8->Add(JetResponseEt10Eta23,1);
  JetResponseEt10Eta8.SetLineColor(4);
  JetResponseEt10Eta8.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta8," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta8->Add(JetResponseEt5Eta23,1);
  JetResponseEt5Eta8.SetLineColor(15);
  JetResponseEt5Eta8.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta8," 5 < Et < 10 ","l");

  JetResponseEt5Eta8.SetTitle("Midpoint Cone R=0.5, 1.757<|#eta|<2.046");
  JetResponseEt5Eta8.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta8.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta8.SetYTitle("Jets");

  JetResponseEt5Eta8.Draw();
  JetResponseEt20Eta8.Draw("SAME");
  JetResponseEt15Eta8.Draw("SAME");
  JetResponseEt12Eta8.Draw("SAME");
  JetResponseEt10Eta8.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta8->Add(JetResponseEt72Eta23,1);
  JetResponseEt72Eta8.SetLineColor(1);
  JetResponseEt72Eta8.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta8," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta8->Add(JetResponseEt57Eta23,1);
  JetResponseEt57Eta8.SetLineColor(2);
  JetResponseEt57Eta8.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta8," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta8->Add(JetResponseEt45Eta23,1);
  JetResponseEt45Eta8.SetLineColor(3);
  JetResponseEt45Eta8.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta8," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta8->Add(JetResponseEt35Eta23,1);
  JetResponseEt35Eta8.SetLineColor(4);
  JetResponseEt35Eta8.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta8," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta8->Add(JetResponseEt27Eta23,1);
   JetResponseEt27Eta8.SetLineColor(15);
  JetResponseEt27Eta8.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta8," 27 < Et < 35 ","l");

  JetResponseEt27Eta8.SetTitle("Midpoint Cone R=0.5, 1.757<|#eta|<2.046");
  JetResponseEt27Eta8.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta8.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta8.SetYTitle("Jets");

  JetResponseEt27Eta8.Draw();
  JetResponseEt72Eta8.Draw("SAME");
  JetResponseEt57Eta8.Draw("SAME");
  JetResponseEt45Eta8.Draw("SAME");
  JetResponseEt35Eta8.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta8->Add(JetResponseEt1000Eta23,1);
  JetResponseEt1000Eta8.SetLineColor(1);
  JetResponseEt1000Eta8.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta8," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta8->Add(JetResponseEt750Eta23,1);
  JetResponseEt750Eta8.SetLineColor(2);
  JetResponseEt750Eta8.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta8," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta8->Add(JetResponseEt550Eta23,1);
  JetResponseEt550Eta8.SetLineColor(3);
  JetResponseEt550Eta8.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta8," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta8->Add(JetResponseEt400Eta23,1);
   JetResponseEt400Eta8.SetLineColor(4);
  JetResponseEt400Eta8.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta8," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta8->Add(JetResponseEt300Eta23,1);
  JetResponseEt300Eta8.SetLineColor(15);
  JetResponseEt300Eta8.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta8," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta8->Add(JetResponseEt200Eta23,1);
  JetResponseEt200Eta8.SetLineColor(6);
  JetResponseEt200Eta8.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta8," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta8->Add(JetResponseEt150Eta23,1);
  JetResponseEt150Eta8.SetLineColor(7);
  JetResponseEt150Eta8.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta8," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta8->Add(JetResponseEt120Eta23,1);
  JetResponseEt120Eta8.SetLineColor(8);
  JetResponseEt120Eta8.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta8," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta8->Add(JetResponseEt90Eta23,1);
  JetResponseEt90Eta8.SetLineColor(9);
  JetResponseEt90Eta8.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta8," 90 < Et < 120 ","l");

  JetResponseEt200Eta8.SetTitle("Midpoint Cone R=0.5, 1.757<|#eta|<2.046");
  JetResponseEt200Eta8.SetTitleOffset(1.4,"Y");
  JetResponseEt200Eta8.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt200Eta8.SetYTitle("Jets");

  JetResponseEt200Eta8.Draw(); 
  JetResponseEt1000Eta8.Draw("SAME");
  JetResponseEt750Eta8.Draw("SAME");
  JetResponseEt550Eta8.Draw("SAME"); 
  JetResponseEt300Eta8.Draw("SAME"); 
  JetResponseEt400Eta8.Draw("SAME"); 
  JetResponseEt150Eta8.Draw("SAME"); 
  JetResponseEt120Eta8.Draw("SAME"); 
  JetResponseEt90Eta8.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta8->Add(JetResponseEt4500Eta23,1);
  JetResponseEt4500Eta8.SetLineColor(1);
  JetResponseEt4500Eta8.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta8," Et > 4500 ","l");

  JetResponseEt2900Eta8->Add(JetResponseEt2900Eta23,1);
  JetResponseEt2900Eta8.SetLineColor(2);
  JetResponseEt2900Eta8.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta8," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta8->Add(JetResponseEt2000Eta23,1);
  JetResponseEt2000Eta8.SetLineColor(3);
  JetResponseEt2000Eta8.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta8," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta8->Add(JetResponseEt1400Eta23,1);
  JetResponseEt1400Eta8.SetLineColor(4);
  JetResponseEt1400Eta8.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta8," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta8.SetTitle("Midpoint Cone R=0.5, 1.757<|#eta|<2.046");
  JetResponseEt1400Eta8.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta8.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta8.SetYTitle("Jets");

  JetResponseEt1400Eta8.Draw();
  JetResponseEt2000Eta8.Draw("SAME");
  JetResponseEt2900Eta8.Draw("SAME");
  JetResponseEt4500Eta8.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta1757-2046Resp.ps");  
  myc1->Print("MC5eta1757-2046Resp.eps");  
  myc1->Print("MC5eta1757-2046Resp.gif");  

}
