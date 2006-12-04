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

  JetResponseEt20Eta11->Add(JetResponseEt20Eta20,1);
  JetResponseEt20Eta11.SetLineColor(1);
  JetResponseEt20Eta11.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta11," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta11->Add(JetResponseEt15Eta20,1);
  JetResponseEt15Eta11.SetLineColor(2);
  JetResponseEt15Eta11.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta11," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta11->Add(JetResponseEt12Eta20,1);
  JetResponseEt12Eta11.SetLineColor(3);
  JetResponseEt12Eta11.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta11," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta11->Add(JetResponseEt10Eta20,1);
  JetResponseEt10Eta11.SetLineColor(4);
  JetResponseEt10Eta11.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta11," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta11->Add(JetResponseEt5Eta20,1);
  JetResponseEt5Eta11.SetLineColor(15);
  JetResponseEt5Eta11.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta11," 5 < Et < 10 ","l");

  JetResponseEt5Eta11.SetTitle("Midpoint Cone R=0.5, 0.991<|#eta|<1.260");
  JetResponseEt5Eta11.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta11.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta11.SetYTitle("Jets");

  JetResponseEt5Eta11.Draw();
  JetResponseEt20Eta11.Draw("SAME");
  JetResponseEt15Eta11.Draw("SAME");
  JetResponseEt12Eta11.Draw("SAME");
  JetResponseEt10Eta11.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta11->Add(JetResponseEt72Eta20,1);
  JetResponseEt72Eta11.SetLineColor(1);
  JetResponseEt72Eta11.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta11," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta11->Add(JetResponseEt57Eta20,1);
  JetResponseEt57Eta11.SetLineColor(2);
  JetResponseEt57Eta11.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta11," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta11->Add(JetResponseEt45Eta20,1);
  JetResponseEt45Eta11.SetLineColor(3);
  JetResponseEt45Eta11.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta11," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta11->Add(JetResponseEt35Eta20,1);
  JetResponseEt35Eta11.SetLineColor(4);
  JetResponseEt35Eta11.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta11," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta11->Add(JetResponseEt27Eta20,1);
   JetResponseEt27Eta11.SetLineColor(15);
  JetResponseEt27Eta11.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta11," 27 < Et < 35 ","l");

  JetResponseEt27Eta11.SetTitle("Midpoint Cone R=0.5, 0.991<|#eta|<1.260");
  JetResponseEt27Eta11.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta11.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta11.SetYTitle("Jets");

  JetResponseEt27Eta11.Draw();
  JetResponseEt72Eta11.Draw("SAME");
  JetResponseEt57Eta11.Draw("SAME");
  JetResponseEt45Eta11.Draw("SAME");
  JetResponseEt35Eta11.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta11->Add(JetResponseEt1000Eta20,1);
  JetResponseEt1000Eta11.SetLineColor(1);
  JetResponseEt1000Eta11.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta11," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta11->Add(JetResponseEt750Eta20,1);
  JetResponseEt750Eta11.SetLineColor(2);
  JetResponseEt750Eta11.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta11," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta11->Add(JetResponseEt550Eta20,1);
  JetResponseEt550Eta11.SetLineColor(3);
  JetResponseEt550Eta11.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta11," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta11->Add(JetResponseEt400Eta20,1);
   JetResponseEt400Eta11.SetLineColor(4);
  JetResponseEt400Eta11.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta11," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta11->Add(JetResponseEt300Eta20,1);
  JetResponseEt300Eta11.SetLineColor(15);
  JetResponseEt300Eta11.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta11," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta11->Add(JetResponseEt200Eta20,1);
  JetResponseEt200Eta11.SetLineColor(6);
  JetResponseEt200Eta11.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta11," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta11->Add(JetResponseEt150Eta20,1);
  JetResponseEt150Eta11.SetLineColor(7);
  JetResponseEt150Eta11.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta11," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta11->Add(JetResponseEt120Eta20,1);
  JetResponseEt120Eta11.SetLineColor(8);
  JetResponseEt120Eta11.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta11," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta11->Add(JetResponseEt90Eta20,1);
  JetResponseEt90Eta11.SetLineColor(9);
  JetResponseEt90Eta11.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta11," 90 < Et < 120 ","l");

  JetResponseEt400Eta11.SetTitle("Midpoint Cone R=0.5, 0.991<|#eta|<1.260");
  JetResponseEt400Eta11.SetTitleOffset(1.4,"Y");
  JetResponseEt400Eta11.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt400Eta11.SetYTitle("Jets");

  JetResponseEt400Eta11.Draw(); 
  JetResponseEt1000Eta11.Draw("SAME");
  JetResponseEt750Eta11.Draw("SAME");
  JetResponseEt550Eta11.Draw("SAME"); 
  JetResponseEt300Eta11.Draw("SAME"); 
  JetResponseEt200Eta11.Draw("SAME"); 
  JetResponseEt150Eta11.Draw("SAME"); 
  JetResponseEt120Eta11.Draw("SAME"); 
  JetResponseEt90Eta11.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta11->Add(JetResponseEt4500Eta20,1);
  JetResponseEt4500Eta11.SetLineColor(1);
  JetResponseEt4500Eta11.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta11," Et > 4500 ","l");

  JetResponseEt2900Eta11->Add(JetResponseEt2900Eta20,1);
  JetResponseEt2900Eta11.SetLineColor(2);
  JetResponseEt2900Eta11.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta11," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta11->Add(JetResponseEt2000Eta20,1);
  JetResponseEt2000Eta11.SetLineColor(3);
  JetResponseEt2000Eta11.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta11," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta11->Add(JetResponseEt1400Eta20,1);
  JetResponseEt1400Eta11.SetLineColor(4);
  JetResponseEt1400Eta11.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta11," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta11.SetTitle("Midpoint Cone R=0.5, 0.991<|#eta|<1.260");
  JetResponseEt1400Eta11.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta11.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta11.SetYTitle("Jets");

  JetResponseEt1400Eta11.Draw();
  JetResponseEt2000Eta11.Draw("SAME");
  JetResponseEt2900Eta11.Draw("SAME");
  JetResponseEt4500Eta11.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta991-1260Resp.ps");  
  myc1->Print("MC5eta991-1260Resp.eps");  
  myc1->Print("MC5eta991-1260Resp.gif");  

}
