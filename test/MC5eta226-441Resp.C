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

  JetResponseEt20Eta14->Add(JetResponseEt20Eta17,1);
  JetResponseEt20Eta14.SetLineColor(1);
  JetResponseEt20Eta14.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta14," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta14->Add(JetResponseEt15Eta17,1);
  JetResponseEt15Eta14.SetLineColor(2);
  JetResponseEt15Eta14.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta14," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta14->Add(JetResponseEt12Eta17,1);
  JetResponseEt12Eta14.SetLineColor(3);
  JetResponseEt12Eta14.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta14," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta14->Add(JetResponseEt10Eta17,1);
  JetResponseEt10Eta14.SetLineColor(4);
  JetResponseEt10Eta14.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta14," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta14->Add(JetResponseEt5Eta17,1);
  JetResponseEt5Eta14.SetLineColor(15);
  JetResponseEt5Eta14.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta14," 5 < Et < 10 ","l");

  JetResponseEt5Eta14.SetTitle("Midpoint Cone R=0.5, 0.226<|#eta|<0.441");
  JetResponseEt5Eta14.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta14.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta14.SetYTitle("Jets");

  JetResponseEt5Eta14.Draw();
  JetResponseEt20Eta14.Draw("SAME");
  JetResponseEt15Eta14.Draw("SAME");
  JetResponseEt12Eta14.Draw("SAME");
  JetResponseEt10Eta14.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta14->Add(JetResponseEt72Eta17,1);
  JetResponseEt72Eta14.SetLineColor(1);
  JetResponseEt72Eta14.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta14," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta14->Add(JetResponseEt57Eta17,1);
  JetResponseEt57Eta14.SetLineColor(2);
  JetResponseEt57Eta14.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta14," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta14->Add(JetResponseEt45Eta17,1);
  JetResponseEt45Eta14.SetLineColor(3);
  JetResponseEt45Eta14.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta14," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta14->Add(JetResponseEt35Eta17,1);
  JetResponseEt35Eta14.SetLineColor(4);
  JetResponseEt35Eta14.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta14," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta14->Add(JetResponseEt27Eta17,1);
   JetResponseEt27Eta14.SetLineColor(15);
  JetResponseEt27Eta14.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta14," 27 < Et < 35 ","l");

  JetResponseEt27Eta14.SetTitle("Midpoint Cone R=0.5, 0.226<|#eta|<0.441");
  JetResponseEt27Eta14.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta14.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta14.SetYTitle("Jets");

  JetResponseEt27Eta14.Draw();
  JetResponseEt72Eta14.Draw("SAME");
  JetResponseEt57Eta14.Draw("SAME");
  JetResponseEt45Eta14.Draw("SAME");
  JetResponseEt35Eta14.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta14->Add(JetResponseEt1000Eta17,1);
  JetResponseEt1000Eta14.SetLineColor(1);
  JetResponseEt1000Eta14.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta14," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta14->Add(JetResponseEt750Eta17,1);
  JetResponseEt750Eta14.SetLineColor(2);
  JetResponseEt750Eta14.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta14," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta14->Add(JetResponseEt550Eta17,1);
  JetResponseEt550Eta14.SetLineColor(3);
  JetResponseEt550Eta14.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta14," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta14->Add(JetResponseEt400Eta17,1);
   JetResponseEt400Eta14.SetLineColor(4);
  JetResponseEt400Eta14.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta14," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta14->Add(JetResponseEt300Eta17,1);
  JetResponseEt300Eta14.SetLineColor(15);
  JetResponseEt300Eta14.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta14," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta14->Add(JetResponseEt200Eta17,1);
  JetResponseEt200Eta14.SetLineColor(6);
  JetResponseEt200Eta14.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta14," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta14->Add(JetResponseEt150Eta17,1);
  JetResponseEt150Eta14.SetLineColor(7);
  JetResponseEt150Eta14.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta14," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta14->Add(JetResponseEt120Eta17,1);
  JetResponseEt120Eta14.SetLineColor(8);
  JetResponseEt120Eta14.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta14," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta14->Add(JetResponseEt90Eta17,1);
  JetResponseEt90Eta14.SetLineColor(9);
  JetResponseEt90Eta14.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta14," 90 < Et < 120 ","l");

  JetResponseEt400Eta14.SetTitle("Midpoint Cone R=0.5, 0.226<|#eta|<0.441");
  JetResponseEt400Eta14.SetTitleOffset(1.4,"Y");
  JetResponseEt400Eta14.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt400Eta14.SetYTitle("Jets");

  JetResponseEt400Eta14.Draw(); 
  JetResponseEt1000Eta14.Draw("SAME");
  JetResponseEt750Eta14.Draw("SAME");
  JetResponseEt550Eta14.Draw("SAME"); 
  JetResponseEt300Eta14.Draw("SAME"); 
  JetResponseEt200Eta14.Draw("SAME"); 
  JetResponseEt150Eta14.Draw("SAME"); 
  JetResponseEt120Eta14.Draw("SAME"); 
  JetResponseEt90Eta14.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta14->Add(JetResponseEt4500Eta17,1);
  JetResponseEt4500Eta14.SetLineColor(1);
  JetResponseEt4500Eta14.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta14," Et > 4500 ","l");

  JetResponseEt2900Eta14->Add(JetResponseEt2900Eta17,1);
  JetResponseEt2900Eta14.SetLineColor(2);
  JetResponseEt2900Eta14.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta14," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta14->Add(JetResponseEt2000Eta17,1);
  JetResponseEt2000Eta14.SetLineColor(3);
  JetResponseEt2000Eta14.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta14," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta14->Add(JetResponseEt1400Eta17,1);
  JetResponseEt1400Eta14.SetLineColor(4);
  JetResponseEt1400Eta14.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta14," 1400 < Et < 2000 ","l");

  JetResponseEt2000Eta14.SetTitle("Midpoint Cone R=0.5, 0.226<|#eta|<0.441");
  JetResponseEt2000Eta14.SetTitleOffset(1.4,"Y");
  JetResponseEt2000Eta14.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt2000Eta14.SetYTitle("Jets");

  JetResponseEt2000Eta14.Draw();
  JetResponseEt1400Eta14.Draw("SAME");
  JetResponseEt2900Eta14.Draw("SAME");
  JetResponseEt4500Eta14.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta226-441Resp.ps");  
  myc1->Print("MC5eta226-441Resp.eps");  
  myc1->Print("MC5eta226-441Resp.gif");  

}
