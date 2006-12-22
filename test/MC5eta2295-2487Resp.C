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

  JetResponseEt20Eta6->Add(JetResponseEt20Eta25,1);
  JetResponseEt20Eta6.SetLineColor(1);
  JetResponseEt20Eta6.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt20Eta6," 20 < Et < 27 ","l");
 
  JetResponseEt15Eta6->Add(JetResponseEt15Eta25,1);
  JetResponseEt15Eta6.SetLineColor(2);
  JetResponseEt15Eta6.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt15Eta6," 15 < Et < 20 ","l");
  
  JetResponseEt12Eta6->Add(JetResponseEt12Eta25,1);
  JetResponseEt12Eta6.SetLineColor(3);
  JetResponseEt12Eta6.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt12Eta6," 12 < Et < 15 ","l");
    
  JetResponseEt10Eta6->Add(JetResponseEt10Eta25,1);
  JetResponseEt10Eta6.SetLineColor(4);
  JetResponseEt10Eta6.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt10Eta6," 10 < Et < 12 ","l");
 
  JetResponseEt5Eta6->Add(JetResponseEt5Eta25,1);
  JetResponseEt5Eta6.SetLineColor(15);
  JetResponseEt5Eta6.SetLineWidth(2);
  leg1->AddEntry(JetResponseEt5Eta6," 5 < Et < 10 ","l");

  JetResponseEt5Eta6.SetTitle("Midpoint Cone R=0.5, 2.295<|#eta|<2.487");
  JetResponseEt5Eta6.SetTitleOffset(1.4,"Y");
  JetResponseEt5Eta6.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt5Eta6.SetYTitle("Jets");

  JetResponseEt5Eta6.Draw();
  JetResponseEt20Eta6.Draw("SAME");
  JetResponseEt15Eta6.Draw("SAME");
  JetResponseEt12Eta6.Draw("SAME");
  JetResponseEt10Eta6.Draw("SAME");
  
  leg1->Draw();

  myc1->cd(2);
  TLegend *leg2 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg2->SetFillColor(0);

  JetResponseEt72Eta6->Add(JetResponseEt72Eta25,1);
  JetResponseEt72Eta6.SetLineColor(1);
  JetResponseEt72Eta6.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt72Eta6," 72 < Et < 90 ","l");
  
  JetResponseEt57Eta6->Add(JetResponseEt57Eta25,1);
  JetResponseEt57Eta6.SetLineColor(2);
  JetResponseEt57Eta6.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt57Eta6," 57 < Et < 72 ","l");
  
  JetResponseEt45Eta6->Add(JetResponseEt45Eta25,1);
  JetResponseEt45Eta6.SetLineColor(3);
  JetResponseEt45Eta6.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt45Eta6," 45 < Et < 57 ","l");
 
  JetResponseEt35Eta6->Add(JetResponseEt35Eta25,1);
  JetResponseEt35Eta6.SetLineColor(4);
  JetResponseEt35Eta6.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt35Eta6," 35 < Et < 45 ","l");
  
  JetResponseEt27Eta6->Add(JetResponseEt27Eta25,1);
   JetResponseEt27Eta6.SetLineColor(15);
  JetResponseEt27Eta6.SetLineWidth(2);
  leg2->AddEntry(JetResponseEt27Eta6," 27 < Et < 35 ","l");

  JetResponseEt27Eta6.SetTitle("Midpoint Cone R=0.5, 2.295<|#eta|<2.487");
  JetResponseEt27Eta6.SetTitleOffset(1.4,"Y");
  JetResponseEt27Eta6.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt27Eta6.SetYTitle("Jets");

  JetResponseEt27Eta6.Draw();
  JetResponseEt72Eta6.Draw("SAME");
  JetResponseEt57Eta6.Draw("SAME");
  JetResponseEt45Eta6.Draw("SAME");
  JetResponseEt35Eta6.Draw("SAME");
  
  leg2->Draw();
 

  myc1->cd(3);
  TLegend *leg3 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg3->SetFillColor(0);

  JetResponseEt1000Eta6->Add(JetResponseEt1000Eta25,1);
  JetResponseEt1000Eta6.SetLineColor(1);
  JetResponseEt1000Eta6.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt1000Eta6," 1000 < Et < 1400 ","l");

  JetResponseEt750Eta6->Add(JetResponseEt750Eta25,1);
  JetResponseEt750Eta6.SetLineColor(2);
  JetResponseEt750Eta6.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt750Eta6," 750 < Et < 1000 ","l");
  
  JetResponseEt550Eta6->Add(JetResponseEt550Eta25,1);
  JetResponseEt550Eta6.SetLineColor(3);
  JetResponseEt550Eta6.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt550Eta6," 550 < Et < 750 ","l");
  
  JetResponseEt400Eta6->Add(JetResponseEt400Eta25,1);
   JetResponseEt400Eta6.SetLineColor(4);
  JetResponseEt400Eta6.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt400Eta6," 400 < Et < 550 ","l");
  
  JetResponseEt300Eta6->Add(JetResponseEt300Eta25,1);
  JetResponseEt300Eta6.SetLineColor(15);
  JetResponseEt300Eta6.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt300Eta6," 300 < Et < 400 ","l");
  
  JetResponseEt200Eta6->Add(JetResponseEt200Eta25,1);
  JetResponseEt200Eta6.SetLineColor(6);
  JetResponseEt200Eta6.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt200Eta6," 200 < Et < 300 ","l");
  
  JetResponseEt150Eta6->Add(JetResponseEt150Eta25,1);
  JetResponseEt150Eta6.SetLineColor(7);
  JetResponseEt150Eta6.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt150Eta6," 150 < Et < 200 ","l");
 
  JetResponseEt120Eta6->Add(JetResponseEt120Eta25,1);
  JetResponseEt120Eta6.SetLineColor(8);
  JetResponseEt120Eta6.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt120Eta6," 120 < Et < 150 ","l");
  
  JetResponseEt90Eta6->Add(JetResponseEt90Eta25,1);
  JetResponseEt90Eta6.SetLineColor(9);
  JetResponseEt90Eta6.SetLineWidth(2);
  leg3->AddEntry(JetResponseEt90Eta6," 90 < Et < 120 ","l");

  JetResponseEt200Eta6.SetTitle("Midpoint Cone R=0.5, 2.295<|#eta|<2.487");
  JetResponseEt200Eta6.SetTitleOffset(1.4,"Y");
  JetResponseEt200Eta6.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt200Eta6.SetYTitle("Jets");

  JetResponseEt200Eta6.Draw(); 
  JetResponseEt1000Eta6.Draw("SAME");
  JetResponseEt750Eta6.Draw("SAME");
  JetResponseEt550Eta6.Draw("SAME"); 
  JetResponseEt300Eta6.Draw("SAME"); 
  JetResponseEt90Eta6.Draw("SAME"); 
  JetResponseEt150Eta6.Draw("SAME"); 
  JetResponseEt120Eta6.Draw("SAME"); 
  JetResponseEt400Eta6.Draw("SAME"); 

  leg3->Draw();

  //Add to this plot the bins Et=550,400,300,200,150,120,90
  //Put on another plot the bins Et=1400,2000,2900,4500
  //Put on another plot the bins 27,35,45,57,72
  //Put on another plot the bins 5,10,12,15,20
  //Four plots in a 2x2 canvas


  myc1->cd(4);
  TLegend *leg4 = new TLegend(0.65,0.5, 0.90, 0.9);
  leg4->SetFillColor(0);
  JetResponseEt4500Eta6->Add(JetResponseEt4500Eta25,1);
  JetResponseEt4500Eta6.SetLineColor(1);
  JetResponseEt4500Eta6.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt4500Eta6," Et > 4500 ","l");

  JetResponseEt2900Eta6->Add(JetResponseEt2900Eta25,1);
  JetResponseEt2900Eta6.SetLineColor(2);
  JetResponseEt2900Eta6.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2900Eta6," 2900 < Et < 4500 ","l");
 
  JetResponseEt2000Eta6->Add(JetResponseEt2000Eta25,1);
  JetResponseEt2000Eta6.SetLineColor(3);
  JetResponseEt2000Eta6.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt2000Eta6," 2000 < Et < 2900 ","l");

  JetResponseEt1400Eta6->Add(JetResponseEt1400Eta25,1);
  JetResponseEt1400Eta6.SetLineColor(4);
  JetResponseEt1400Eta6.SetLineWidth(2);
  leg4->AddEntry(JetResponseEt1400Eta6," 1400 < Et < 2000 ","l");

  JetResponseEt1400Eta6.SetTitle("Midpoint Cone R=0.5, 2.295<|#eta|<2.487");
  JetResponseEt1400Eta6.SetTitleOffset(1.4,"Y");
  JetResponseEt1400Eta6.SetXTitle("Response = CaloJet Et/GenJet Et");
  JetResponseEt1400Eta6.SetYTitle("Jets");

  JetResponseEt1400Eta6.Draw();
  JetResponseEt2000Eta6.Draw("SAME");
  JetResponseEt2900Eta6.Draw("SAME");
  JetResponseEt4500Eta6.Draw("SAME");

  leg4->Draw();


  myc1->Print("MC5eta2295-2487Resp.ps");  
  myc1->Print("MC5eta2295-2487Resp.eps");  
  myc1->Print("MC5eta2295-2487Resp.gif");  

}
