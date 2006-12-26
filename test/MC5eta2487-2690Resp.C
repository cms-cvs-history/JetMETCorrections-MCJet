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

  JetResponseEt20Eta5->Add(JetResponseEt20Eta26,1);
  JetResponseEt20Eta5.SetLineColor(1);
  JetResponseEt20Eta5.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta5," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta5->Add(JetResponseEt15Eta26,1);
  JetResponseEt15Eta5.SetLineColor(2);
  JetResponseEt15Eta5.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta5," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta5->Add(JetResponseEt12Eta26,1);
  JetResponseEt12Eta5.SetLineColor(3);
  JetResponseEt12Eta5.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta5," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta5->Add(JetResponseEt10Eta26,1);
  JetResponseEt10Eta5.SetLineColor(4);
  JetResponseEt10Eta5.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta5," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta5->Add(JetResponseEt5Eta26,1);
  JetResponseEt5Eta5.SetLineColor(15);
  JetResponseEt5Eta5.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta5," 5 < Et < 10 ","l");

  JetResponseEt5Eta5.SetTitle("Midpoint Cone R=0.5, 2.487<|#eta|<2.690");
  JetResponseEt5Eta5.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta5.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta5.SetYTitle("Jets");

  JetResponseEt5Eta5.Draw();
  JetResponseEt20Eta5.Draw("SAME");
  JetResponseEt15Eta5.Draw("SAME");
  JetResponseEt12Eta5.Draw("SAME");
  JetResponseEt10Eta5.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta5->Add(JetResponseEt72Eta26,1);
  JetResponseEt72Eta5.SetLineColor(1);
  JetResponseEt72Eta5.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta5," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta5->Add(JetResponseEt57Eta26,1);
  JetResponseEt57Eta5.SetLineColor(2);
  JetResponseEt57Eta5.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta5," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta5->Add(JetResponseEt45Eta26,1);
  JetResponseEt45Eta5.SetLineColor(3);
  JetResponseEt45Eta5.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta5," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta5->Add(JetResponseEt35Eta26,1);
  JetResponseEt35Eta5.SetLineColor(4);
  JetResponseEt35Eta5.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta5," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta5->Add(JetResponseEt27Eta26,1);
   JetResponseEt27Eta5.SetLineColor(15);
  JetResponseEt27Eta5.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta5," 27 < Et < 35 ","l");

  JetResponseEt27Eta5.SetTitle("Midpoint Cone R=0.5, 2.487<|#eta|<2.690");
  JetResponseEt27Eta5.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta5.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta5.SetYTitle("Jets");

  JetResponseEt27Eta5.Draw();
  JetResponseEt72Eta5.Draw("SAME");
  JetResponseEt57Eta5.Draw("SAME");
  JetResponseEt45Eta5.Draw("SAME");
  JetResponseEt35Eta5.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta5->Add(JetResponseEt1000Eta26,1);
  JetResponseEt1000Eta5.SetLineColor(1);
  JetResponseEt1000Eta5.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta5," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta5->Add(JetResponseEt750Eta26,1);
  JetResponseEt750Eta5.SetLineColor(2);
  JetResponseEt750Eta5.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta5," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta5->Add(JetResponseEt550Eta26,1);
  JetResponseEt550Eta5.SetLineColor(3);
  JetResponseEt550Eta5.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta5," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta5->Add(JetResponseEt400Eta26,1);
   JetResponseEt400Eta5.SetLineColor(4);
  JetResponseEt400Eta5.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta5," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta5->Add(JetResponseEt300Eta26,1);
  JetResponseEt300Eta5.SetLineColor(15);
  JetResponseEt300Eta5.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta5," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta5->Add(JetResponseEt200Eta26,1);
  JetResponseEt200Eta5.SetLineColor(6);
  JetResponseEt200Eta5.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta5," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta5->Add(JetResponseEt150Eta26,1);
  JetResponseEt150Eta5.SetLineColor(7);
  JetResponseEt150Eta5.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta5," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta5->Add(JetResponseEt120Eta26,1);
  JetResponseEt120Eta5.SetLineColor(8);
  JetResponseEt120Eta5.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta5," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta5->Add(JetResponseEt90Eta26,1);
  JetResponseEt90Eta5.SetLineColor(9);
  JetResponseEt90Eta5.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta5," 90 < Et < 120 ","l");

  JetResponseEt200Eta5.SetTitle("Midpoint Cone R=0.5, 2.487<|#eta|<2.690");
  JetResponseEt200Eta5.SetTitleOffset(1.4,"Y");
  JetResponseEt200Eta5.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt200Eta5.SetYTitle("Jets");

  JetResponseEt200Eta5.Draw(); 
  JetResponseEt1000Eta5.Draw("SAME");
  JetResponseEt750Eta5.Draw("SAME");
  JetResponseEt550Eta5.Draw("SAME"); 
  JetResponseEt300Eta5.Draw("SAME"); 
  JetResponseEt400Eta5.Draw("SAME"); 
  JetResponseEt150Eta5.Draw("SAME"); 
  JetResponseEt120Eta5.Draw("SAME"); 
  JetResponseEt90Eta5.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta5->Add(JetResponseEt4500Eta26,1);
  JetResponseEt4500Eta5.SetLineColor(1);
  JetResponseEt4500Eta5.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta5," Et > 4500 ","l");

  JetResponseEt2900Eta5->Add(JetResponseEt2900Eta26,1);
  JetResponseEt2900Eta5.SetLineColor(2);
  JetResponseEt2900Eta5.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta5," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta5->Add(JetResponseEt2000Eta26,1);
  JetResponseEt2000Eta5.SetLineColor(3);
  JetResponseEt2000Eta5.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta5," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta5->Add(JetResponseEt1400Eta26,1);
  JetResponseEt1400Eta5.SetLineColor(4);
  JetResponseEt1400Eta5.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta5," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta5.SetTitle("Midpoint Cone R=0.5, 2.487<|#eta|<2.690");
  JetResponseEt1400Eta5.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta5.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta5.SetYTitle("Jets");

  JetResponseEt1400Eta5.Draw();
  JetResponseEt2000Eta5.Draw("SAME");
  JetResponseEt2900Eta5.Draw("SAME");
  JetResponseEt4500Eta5.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta2487-2690Resp.ps");  
  myc1->Print("MC5eta2487-2690Resp.eps");  
  myc1->Print("MC5eta2487-2690Resp.gif");  

}
