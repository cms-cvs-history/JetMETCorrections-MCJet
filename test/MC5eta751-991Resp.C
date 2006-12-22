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

  JetResponseEt20Eta12->Add(JetResponseEt20Eta19,1);
  JetResponseEt20Eta12.SetLineColor(1);
  JetResponseEt20Eta12.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta12," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta12->Add(JetResponseEt15Eta19,1);
  JetResponseEt15Eta12.SetLineColor(2);
  JetResponseEt15Eta12.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta12," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta12->Add(JetResponseEt12Eta19,1);
  JetResponseEt12Eta12.SetLineColor(3);
  JetResponseEt12Eta12.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta12," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta12->Add(JetResponseEt10Eta19,1);
  JetResponseEt10Eta12.SetLineColor(4);
  JetResponseEt10Eta12.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta12," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta12->Add(JetResponseEt5Eta19,1);
  JetResponseEt5Eta12.SetLineColor(15);
  JetResponseEt5Eta12.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta12," 5 < Et < 10 ","l");

  JetResponseEt5Eta12.SetTitle("Midpoint Cone R=0.5, 0.751<|#eta|<0.991");
  JetResponseEt5Eta12.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta12.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta12.SetYTitle("Jets");

  JetResponseEt5Eta12.Draw();
  JetResponseEt20Eta12.Draw("SAME");
  JetResponseEt15Eta12.Draw("SAME");
  JetResponseEt12Eta12.Draw("SAME");
  JetResponseEt10Eta12.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta12->Add(JetResponseEt72Eta19,1);
  JetResponseEt72Eta12.SetLineColor(1);
  JetResponseEt72Eta12.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta12," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta12->Add(JetResponseEt57Eta19,1);
  JetResponseEt57Eta12.SetLineColor(2);
  JetResponseEt57Eta12.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta12," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta12->Add(JetResponseEt45Eta19,1);
  JetResponseEt45Eta12.SetLineColor(3);
  JetResponseEt45Eta12.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta12," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta12->Add(JetResponseEt35Eta19,1);
  JetResponseEt35Eta12.SetLineColor(4);
  JetResponseEt35Eta12.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta12," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta12->Add(JetResponseEt27Eta19,1);
   JetResponseEt27Eta12.SetLineColor(15);
  JetResponseEt27Eta12.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta12," 27 < Et < 35 ","l");

  JetResponseEt27Eta12.SetTitle("Midpoint Cone R=0.5, 0.751<|#eta|<0.991");
  JetResponseEt27Eta12.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta12.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta12.SetYTitle("Jets");

  JetResponseEt27Eta12.Draw();
  JetResponseEt72Eta12.Draw("SAME");
  JetResponseEt57Eta12.Draw("SAME");
  JetResponseEt45Eta12.Draw("SAME");
  JetResponseEt35Eta12.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta12->Add(JetResponseEt1000Eta19,1);
  JetResponseEt1000Eta12.SetLineColor(1);
  JetResponseEt1000Eta12.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta12," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta12->Add(JetResponseEt750Eta19,1);
  JetResponseEt750Eta12.SetLineColor(2);
  JetResponseEt750Eta12.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta12," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta12->Add(JetResponseEt550Eta19,1);
  JetResponseEt550Eta12.SetLineColor(3);
  JetResponseEt550Eta12.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta12," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta12->Add(JetResponseEt400Eta19,1);
   JetResponseEt400Eta12.SetLineColor(4);
  JetResponseEt400Eta12.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta12," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta12->Add(JetResponseEt300Eta19,1);
  JetResponseEt300Eta12.SetLineColor(15);
  JetResponseEt300Eta12.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta12," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta12->Add(JetResponseEt200Eta19,1);
  JetResponseEt200Eta12.SetLineColor(6);
  JetResponseEt200Eta12.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta12," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta12->Add(JetResponseEt150Eta19,1);
  JetResponseEt150Eta12.SetLineColor(7);
  JetResponseEt150Eta12.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta12," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta12->Add(JetResponseEt120Eta19,1);
  JetResponseEt120Eta12.SetLineColor(8);
  JetResponseEt120Eta12.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta12," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta12->Add(JetResponseEt90Eta19,1);
  JetResponseEt90Eta12.SetLineColor(9);
  JetResponseEt90Eta12.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta12," 90 < Et < 120 ","l");

  JetResponseEt400Eta12.SetTitle("Midpoint Cone R=0.5, 0.751<|#eta|<0.991");
  JetResponseEt400Eta12.SetTitleOffset(1.4,"Y");
  JetResponseEt400Eta12.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt400Eta12.SetYTitle("Jets");

  JetResponseEt400Eta12.Draw(); 
  JetResponseEt1000Eta12.Draw("SAME");
  JetResponseEt750Eta12.Draw("SAME");
  JetResponseEt550Eta12.Draw("SAME"); 
  JetResponseEt300Eta12.Draw("SAME"); 
  JetResponseEt200Eta12.Draw("SAME"); 
  JetResponseEt150Eta12.Draw("SAME"); 
  JetResponseEt120Eta12.Draw("SAME"); 
  JetResponseEt90Eta12.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta12->Add(JetResponseEt4500Eta19,1);
  JetResponseEt4500Eta12.SetLineColor(1);
  JetResponseEt4500Eta12.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta12," Et > 4500 ","l");

  JetResponseEt2900Eta12->Add(JetResponseEt2900Eta19,1);
  JetResponseEt2900Eta12.SetLineColor(2);
  JetResponseEt2900Eta12.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta12," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta12->Add(JetResponseEt2000Eta19,1);
  JetResponseEt2000Eta12.SetLineColor(3);
  JetResponseEt2000Eta12.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta12," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta12->Add(JetResponseEt1400Eta19,1);
  JetResponseEt1400Eta12.SetLineColor(4);
  JetResponseEt1400Eta12.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta12," 1400 < Et < 2000 ","l");

  JetResponseEt2000Eta12.SetTitle("Midpoint Cone R=0.5, 0.751<|#eta|<0.991");
  JetResponseEt2000Eta12.SetTitleOffset(1.4,"Y");
  JetResponseEt2000Eta12.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt2000Eta12.SetYTitle("Jets");

  JetResponseEt2000Eta12.Draw();
  JetResponseEt1400Eta12.Draw("SAME");
  JetResponseEt2900Eta12.Draw("SAME");
  JetResponseEt4500Eta12.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta751-991Resp.ps");  
  myc1->Print("MC5eta751-991Resp.eps");  
  myc1->Print("MC5eta751-991Resp.gif");  

}
