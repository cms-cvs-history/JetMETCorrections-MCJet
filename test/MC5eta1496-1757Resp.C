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

  JetResponseEt20Eta9->Add(JetResponseEt20Eta22,1);
  JetResponseEt20Eta9.SetLineColor(1);
  JetResponseEt20Eta9.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta9," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta9->Add(JetResponseEt15Eta22,1);
  JetResponseEt15Eta9.SetLineColor(2);
  JetResponseEt15Eta9.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta9," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta9->Add(JetResponseEt12Eta22,1);
  JetResponseEt12Eta9.SetLineColor(3);
  JetResponseEt12Eta9.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta9," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta9->Add(JetResponseEt10Eta22,1);
  JetResponseEt10Eta9.SetLineColor(4);
  JetResponseEt10Eta9.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta9," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta9->Add(JetResponseEt5Eta22,1);
  JetResponseEt5Eta9.SetLineColor(15);
  JetResponseEt5Eta9.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta9," 5 < Et < 10 ","l");

  JetResponseEt5Eta9.SetTitle("Midpoint Cone R=0.5, 1.496<|#eta|<1.757");
  JetResponseEt5Eta9.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta9.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta9.SetYTitle("Jets");

  JetResponseEt5Eta9.Draw();
  JetResponseEt20Eta9.Draw("SAME");
  JetResponseEt15Eta9.Draw("SAME");
  JetResponseEt12Eta9.Draw("SAME");
  JetResponseEt10Eta9.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta9->Add(JetResponseEt72Eta22,1);
  JetResponseEt72Eta9.SetLineColor(1);
  JetResponseEt72Eta9.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta9," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta9->Add(JetResponseEt57Eta22,1);
  JetResponseEt57Eta9.SetLineColor(2);
  JetResponseEt57Eta9.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta9," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta9->Add(JetResponseEt45Eta22,1);
  JetResponseEt45Eta9.SetLineColor(3);
  JetResponseEt45Eta9.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta9," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta9->Add(JetResponseEt35Eta22,1);
  JetResponseEt35Eta9.SetLineColor(4);
  JetResponseEt35Eta9.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta9," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta9->Add(JetResponseEt27Eta22,1);
   JetResponseEt27Eta9.SetLineColor(15);
  JetResponseEt27Eta9.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta9," 27 < Et < 35 ","l");

  JetResponseEt27Eta9.SetTitle("Midpoint Cone R=0.5, 1.496<|#eta|<1.757");
  JetResponseEt27Eta9.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta9.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta9.SetYTitle("Jets");

  JetResponseEt27Eta9.Draw();
  JetResponseEt72Eta9.Draw("SAME");
  JetResponseEt57Eta9.Draw("SAME");
  JetResponseEt45Eta9.Draw("SAME");
  JetResponseEt35Eta9.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta9->Add(JetResponseEt1000Eta22,1);
  JetResponseEt1000Eta9.SetLineColor(1);
  JetResponseEt1000Eta9.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta9," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta9->Add(JetResponseEt750Eta22,1);
  JetResponseEt750Eta9.SetLineColor(2);
  JetResponseEt750Eta9.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta9," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta9->Add(JetResponseEt550Eta22,1);
  JetResponseEt550Eta9.SetLineColor(3);
  JetResponseEt550Eta9.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta9," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta9->Add(JetResponseEt400Eta22,1);
   JetResponseEt400Eta9.SetLineColor(4);
  JetResponseEt400Eta9.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta9," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta9->Add(JetResponseEt300Eta22,1);
  JetResponseEt300Eta9.SetLineColor(15);
  JetResponseEt300Eta9.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta9," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta9->Add(JetResponseEt200Eta22,1);
  JetResponseEt200Eta9.SetLineColor(6);
  JetResponseEt200Eta9.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta9," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta9->Add(JetResponseEt150Eta22,1);
  JetResponseEt150Eta9.SetLineColor(7);
  JetResponseEt150Eta9.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta9," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta9->Add(JetResponseEt120Eta22,1);
  JetResponseEt120Eta9.SetLineColor(8);
  JetResponseEt120Eta9.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta9," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta9->Add(JetResponseEt90Eta22,1);
  JetResponseEt90Eta9.SetLineColor(9);
  JetResponseEt90Eta9.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta9," 90 < Et < 120 ","l");

  JetResponseEt200Eta9.SetTitle("Midpoint Cone R=0.5, 1.496<|#eta|<1.757");
  JetResponseEt200Eta9.SetTitleOffset(1.4,"Y");
  JetResponseEt200Eta9.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt200Eta9.SetYTitle("Jets");

  JetResponseEt200Eta9.Draw(); 
  JetResponseEt1000Eta9.Draw("SAME");
  JetResponseEt750Eta9.Draw("SAME");
  JetResponseEt550Eta9.Draw("SAME"); 
  JetResponseEt300Eta9.Draw("SAME"); 
  JetResponseEt400Eta9.Draw("SAME"); 
  JetResponseEt150Eta9.Draw("SAME"); 
  JetResponseEt120Eta9.Draw("SAME"); 
  JetResponseEt90Eta9.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta9->Add(JetResponseEt4500Eta22,1);
  JetResponseEt4500Eta9.SetLineColor(1);
  JetResponseEt4500Eta9.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta9," Et > 4500 ","l");

  JetResponseEt2900Eta9->Add(JetResponseEt2900Eta22,1);
  JetResponseEt2900Eta9.SetLineColor(2);
  JetResponseEt2900Eta9.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta9," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta9->Add(JetResponseEt2000Eta22,1);
  JetResponseEt2000Eta9.SetLineColor(3);
  JetResponseEt2000Eta9.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta9," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta9->Add(JetResponseEt1400Eta22,1);
  JetResponseEt1400Eta9.SetLineColor(4);
  JetResponseEt1400Eta9.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta9," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta9.SetTitle("Midpoint Cone R=0.5, 1.496<|#eta|<1.757");
  JetResponseEt1400Eta9.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta9.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta9.SetYTitle("Jets");

  JetResponseEt1400Eta9.Draw();
  JetResponseEt2000Eta9.Draw("SAME");
  JetResponseEt2900Eta9.Draw("SAME");
  JetResponseEt4500Eta9.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta1496-1757Resp.ps");  
  myc1->Print("MC5eta1496-1757Resp.eps");  
  myc1->Print("MC5eta1496-1757Resp.gif");  

}
