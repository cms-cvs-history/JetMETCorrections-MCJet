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

  JetResponseEt20Eta15->Add(JetResponseEt20Eta16,1);
  JetResponseEt20Eta15.SetLineColor(1);
  JetResponseEt20Eta15.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta15," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta15->Add(JetResponseEt15Eta16,1);
  JetResponseEt15Eta15.SetLineColor(2);
  JetResponseEt15Eta15.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta15," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta15->Add(JetResponseEt12Eta16,1);
  JetResponseEt12Eta15.SetLineColor(3);
  JetResponseEt12Eta15.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta15," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta15->Add(JetResponseEt10Eta16,1);
  JetResponseEt10Eta15.SetLineColor(4);
  JetResponseEt10Eta15.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta15," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta15->Add(JetResponseEt5Eta16,1);
  JetResponseEt5Eta15.SetLineColor(15);
  JetResponseEt5Eta15.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta15," 5 < Et < 10 ","l");

  JetResponseEt5Eta15.SetTitle("Midpoint Cone R=0.5, |#eta|<0.226");
  JetResponseEt5Eta15.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta15.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta15.SetYTitle("Jets");

  JetResponseEt5Eta15.Draw();
  JetResponseEt20Eta15.Draw("SAME");
  JetResponseEt15Eta15.Draw("SAME");
  JetResponseEt12Eta15.Draw("SAME");
  JetResponseEt10Eta15.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta15->Add(JetResponseEt72Eta16,1);
  JetResponseEt72Eta15.SetLineColor(1);
  JetResponseEt72Eta15.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta15," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta15->Add(JetResponseEt57Eta16,1);
  JetResponseEt57Eta15.SetLineColor(2);
  JetResponseEt57Eta15.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta15," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta15->Add(JetResponseEt45Eta16,1);
  JetResponseEt45Eta15.SetLineColor(3);
  JetResponseEt45Eta15.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta15," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta15->Add(JetResponseEt35Eta16,1);
  JetResponseEt35Eta15.SetLineColor(4);
  JetResponseEt35Eta15.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta15," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta15->Add(JetResponseEt27Eta16,1);
   JetResponseEt27Eta15.SetLineColor(15);
  JetResponseEt27Eta15.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta15," 27 < Et < 35 ","l");

  JetResponseEt27Eta15.SetTitle("Midpoint Cone R=0.5, |#eta|<0.226");
  JetResponseEt27Eta15.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta15.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta15.SetYTitle("Jets");

  JetResponseEt27Eta15.Draw();
  JetResponseEt72Eta15.Draw("SAME");
  JetResponseEt57Eta15.Draw("SAME");
  JetResponseEt45Eta15.Draw("SAME");
  JetResponseEt35Eta15.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta15->Add(JetResponseEt1000Eta16,1);
  JetResponseEt1000Eta15.SetLineColor(1);
  JetResponseEt1000Eta15.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta15," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta15->Add(JetResponseEt750Eta16,1);
  JetResponseEt750Eta15.SetLineColor(2);
  JetResponseEt750Eta15.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta15," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta15->Add(JetResponseEt550Eta16,1);
  JetResponseEt550Eta15.SetLineColor(3);
  JetResponseEt550Eta15.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta15," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta15->Add(JetResponseEt400Eta16,1);
   JetResponseEt400Eta15.SetLineColor(4);
  JetResponseEt400Eta15.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta15," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta15->Add(JetResponseEt300Eta16,1);
  JetResponseEt300Eta15.SetLineColor(15);
  JetResponseEt300Eta15.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta15," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta15->Add(JetResponseEt200Eta16,1);
  JetResponseEt200Eta15.SetLineColor(6);
  JetResponseEt200Eta15.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta15," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta15->Add(JetResponseEt150Eta16,1);
  JetResponseEt150Eta15.SetLineColor(7);
  JetResponseEt150Eta15.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta15," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta15->Add(JetResponseEt120Eta16,1);
  JetResponseEt120Eta15.SetLineColor(8);
  JetResponseEt120Eta15.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta15," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta15->Add(JetResponseEt90Eta16,1);
  JetResponseEt90Eta15.SetLineColor(9);
  JetResponseEt90Eta15.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta15," 90 < Et < 120 ","l");

  JetResponseEt400Eta15.SetTitle("Midpoint Cone R=0.5, |#eta|<0.226");
  JetResponseEt400Eta15.SetTitleOffset(1.4,"Y");
  JetResponseEt400Eta15.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt400Eta15.SetYTitle("Jets");

  JetResponseEt400Eta15.Draw(); 
  JetResponseEt1000Eta15.Draw("SAME");
  JetResponseEt750Eta15.Draw("SAME");
  JetResponseEt550Eta15.Draw("SAME"); 
  JetResponseEt300Eta15.Draw("SAME"); 
  JetResponseEt200Eta15.Draw("SAME"); 
  JetResponseEt150Eta15.Draw("SAME"); 
  JetResponseEt120Eta15.Draw("SAME"); 
  JetResponseEt90Eta15.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta15->Add(JetResponseEt4500Eta16,1);
  JetResponseEt4500Eta15.SetLineColor(1);
  JetResponseEt4500Eta15.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta15," Et > 4500 ","l");

  JetResponseEt2900Eta15->Add(JetResponseEt2900Eta16,1);
  JetResponseEt2900Eta15.SetLineColor(2);
  JetResponseEt2900Eta15.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta15," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta15->Add(JetResponseEt2000Eta16,1);
  JetResponseEt2000Eta15.SetLineColor(3);
  JetResponseEt2000Eta15.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta15," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta15->Add(JetResponseEt1400Eta16,1);
  JetResponseEt1400Eta15.SetLineColor(4);
  JetResponseEt1400Eta15.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta15," 1400 < Et < 2000 ","l");

  JetResponseEt2000Eta15.SetTitle("Midpoint Cone R=0.5, |#eta|<0.226");
  JetResponseEt2000Eta15.SetTitleOffset(1.4,"Y");
  JetResponseEt2000Eta15.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt2000Eta15.SetYTitle("Jets");

  JetResponseEt2000Eta15.Draw();
  JetResponseEt1400Eta15.Draw("SAME");
  JetResponseEt2900Eta15.Draw("SAME");
  JetResponseEt4500Eta15.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta0-226Resp.ps");  
  myc1->Print("MC5eta0-226Resp.eps");  
  myc1->Print("MC5eta0-226Resp.gif");  

}
