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

  JetResponseEt20Eta4->Add(JetResponseEt20Eta27,1);
  JetResponseEt20Eta4.SetLineColor(1);
  JetResponseEt20Eta4.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta4," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta4->Add(JetResponseEt15Eta27,1);
  JetResponseEt15Eta4.SetLineColor(2);
  JetResponseEt15Eta4.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta4," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta4->Add(JetResponseEt12Eta27,1);
  JetResponseEt12Eta4.SetLineColor(3);
  JetResponseEt12Eta4.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta4," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta4->Add(JetResponseEt10Eta27,1);
  JetResponseEt10Eta4.SetLineColor(4);
  JetResponseEt10Eta4.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta4," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta4->Add(JetResponseEt5Eta27,1);
  JetResponseEt5Eta4.SetLineColor(15);
  JetResponseEt5Eta4.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta4," 5 < Et < 10 ","l");

  JetResponseEt5Eta4.SetTitle("Midpoint Cone R=0.5, 2.690<|#eta|<2.916");
  JetResponseEt5Eta4.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta4.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta4.SetYTitle("Jets");

  JetResponseEt5Eta4.Draw();
  JetResponseEt20Eta4.Draw("SAME");
  JetResponseEt15Eta4.Draw("SAME");
  JetResponseEt12Eta4.Draw("SAME");
  JetResponseEt10Eta4.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta4->Add(JetResponseEt72Eta27,1);
  JetResponseEt72Eta4.SetLineColor(1);
  JetResponseEt72Eta4.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta4," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta4->Add(JetResponseEt57Eta27,1);
  JetResponseEt57Eta4.SetLineColor(2);
  JetResponseEt57Eta4.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta4," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta4->Add(JetResponseEt45Eta27,1);
  JetResponseEt45Eta4.SetLineColor(3);
  JetResponseEt45Eta4.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta4," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta4->Add(JetResponseEt35Eta27,1);
  JetResponseEt35Eta4.SetLineColor(4);
  JetResponseEt35Eta4.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta4," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta4->Add(JetResponseEt27Eta27,1);
   JetResponseEt27Eta4.SetLineColor(15);
  JetResponseEt27Eta4.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta4," 27 < Et < 35 ","l");

  JetResponseEt27Eta4.SetTitle("Midpoint Cone R=0.5, 2.690<|#eta|<2.916");
  JetResponseEt27Eta4.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta4.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta4.SetYTitle("Jets");

  JetResponseEt27Eta4.Draw();
  JetResponseEt72Eta4.Draw("SAME");
  JetResponseEt57Eta4.Draw("SAME");
  JetResponseEt45Eta4.Draw("SAME");
  JetResponseEt35Eta4.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta4->Add(JetResponseEt1000Eta27,1);
  JetResponseEt1000Eta4.SetLineColor(1);
  JetResponseEt1000Eta4.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta4," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta4->Add(JetResponseEt750Eta27,1);
  JetResponseEt750Eta4.SetLineColor(2);
  JetResponseEt750Eta4.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta4," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta4->Add(JetResponseEt550Eta27,1);
  JetResponseEt550Eta4.SetLineColor(3);
  JetResponseEt550Eta4.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta4," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta4->Add(JetResponseEt400Eta27,1);
   JetResponseEt400Eta4.SetLineColor(4);
  JetResponseEt400Eta4.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta4," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta4->Add(JetResponseEt300Eta27,1);
  JetResponseEt300Eta4.SetLineColor(15);
  JetResponseEt300Eta4.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta4," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta4->Add(JetResponseEt200Eta27,1);
  JetResponseEt200Eta4.SetLineColor(6);
  JetResponseEt200Eta4.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta4," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta4->Add(JetResponseEt150Eta27,1);
  JetResponseEt150Eta4.SetLineColor(7);
  JetResponseEt150Eta4.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta4," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta4->Add(JetResponseEt120Eta27,1);
  JetResponseEt120Eta4.SetLineColor(8);
  JetResponseEt120Eta4.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta4," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta4->Add(JetResponseEt90Eta27,1);
  JetResponseEt90Eta4.SetLineColor(9);
  JetResponseEt90Eta4.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta4," 90 < Et < 120 ","l");

  JetResponseEt90Eta4.SetTitle("Midpoint Cone R=0.5, 2.690<|#eta|<2.916");
  JetResponseEt90Eta4.SetTitleOffset(1.4,"Y");
  JetResponseEt90Eta4.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt90Eta4.SetYTitle("Jets");

  JetResponseEt90Eta4.Draw(); 
  JetResponseEt1000Eta4.Draw("SAME");
  JetResponseEt750Eta4.Draw("SAME");
  JetResponseEt550Eta4.Draw("SAME"); 
  JetResponseEt300Eta4.Draw("SAME"); 
  JetResponseEt200Eta4.Draw("SAME"); 
  JetResponseEt150Eta4.Draw("SAME"); 
  JetResponseEt120Eta4.Draw("SAME"); 
  JetResponseEt400Eta4.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta4->Add(JetResponseEt4500Eta27,1);
  JetResponseEt4500Eta4.SetLineColor(1);
  JetResponseEt4500Eta4.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta4," Et > 4500 ","l");

  JetResponseEt2900Eta4->Add(JetResponseEt2900Eta27,1);
  JetResponseEt2900Eta4.SetLineColor(2);
  JetResponseEt2900Eta4.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta4," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta4->Add(JetResponseEt2000Eta27,1);
  JetResponseEt2000Eta4.SetLineColor(3);
  JetResponseEt2000Eta4.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta4," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta4->Add(JetResponseEt1400Eta27,1);
  JetResponseEt1400Eta4.SetLineColor(4);
  JetResponseEt1400Eta4.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta4," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta4.SetTitle("Midpoint Cone R=0.5, 2.690<|#eta|<2.916");
  JetResponseEt1400Eta4.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta4.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta4.SetYTitle("Jets");

  JetResponseEt1400Eta4.Draw();
  JetResponseEt2000Eta4.Draw("SAME");
  JetResponseEt2900Eta4.Draw("SAME");
  JetResponseEt4500Eta4.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta2690-2916Resp.ps");  
  myc1->Print("MC5eta2690-2916Resp.eps");  
  myc1->Print("MC5eta2690-2916Resp.gif");  

}
