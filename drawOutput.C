
void drawOutput() {
    
    // Open the root file that was produced by running the example program
    TFile *f = new TFile("output_selected.root");


    //------------------------------------------ Get Histogram ---------------------------------------------------//
 
    // Get pointers to the example histograms that were made
    TH1F *hmomentum = (TH1F*)f->Get("h_momentum");
    TH1F *htheta = (TH1F*)f->Get("h_theta");
    TH1F *hphi = (TH1F*)f->Get("h_phi");
    TH1F *hmom_lp = (TH1F*)f->Get("h_momentum_leadingproton");
    TH1F *htheta_lp = (TH1F*)f->Get("h_theta_leadingproton");
    TH1F *hphi_lp = (TH1F*)f->Get("h_phi_leadingproton");
    TH1F *hmom_tra = (TH1F*)f->Get("h_momentum_transfer");
    TH1F *henr_tra = (TH1F*)f->Get("h_energy_transfer");
    TH1F *hmu_mom = (TH1F*)f->Get("h_mu_momentum");
    TH1F *hmu_theta = (TH1F*)f->Get("h_mu_theta");
    TH1F *hmu_phi = (TH1F*)f->Get("h_mu_phi");
    TH1F *h_musct_theta = (TH1F*)f->Get("h_muscatter_theta");


    //------------------------------------------ Plot Histogram ---------------------------------------------------//
 
    // Create a canvas onto which the histograms are plotted and which can be saved
    TCanvas *c1 = new TCanvas("c1","Momentum Distribution of All Protons",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hmomentum->SetLineColor(kBlue);
    hmomentum->SetFillStyle( 3002);
    hmomentum->SetFillColor( kRed);
    hmomentum->GetXaxis()->SetTitle("Momentum p [GeV]");
    hmomentum->GetYaxis()->SetTitle("Candidates / [0.1 GeV]");
    //hmomentum->SetStats(0);
    hmomentum->Draw();
    //c1->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Momentum Distribution of All Protons.pdf");

 
    TCanvas *c2 = new TCanvas("c2","Theta Distribution of All Proton",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    htheta->SetLineColor(kBlue);
    htheta->SetFillStyle( 3002);
    htheta->SetFillColor( kRed);
    htheta->GetXaxis()->SetTitle("Theta #theta [radians]");
    htheta->GetYaxis()->SetTitle("Candidates / [0.14 radians]");
    //htheta->SetStats(0);
    htheta->Draw();
    //c2->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Theta Distribution of All Proton.pdf");

    TCanvas *c3 = new TCanvas("c3","Phi Distribution of All Protons",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hphi->SetLineColor(kBlue);
    hphi->SetFillStyle( 3002);
    hphi->SetFillColor( kRed);
    hphi->GetXaxis()->SetTitle("Phi #phi [radians]");
    hphi->GetYaxis()->SetTitle("Candidates / [0.14 radians]");
    //hphi->SetStats(0);
    hphi->Draw();
    //c3->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Phi Distribution of All Protons.pdf");

    TCanvas *c4 = new TCanvas("c4","Momentum Distribution of Leading Protons",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hmom_lp->SetLineColor(kBlue);
    hmom_lp->SetFillStyle( 3002);
    hmom_lp->SetFillColor( kRed);
    hmom_lp->GetXaxis()->SetTitle("Momentum p [GeV]");
    hmom_lp->GetYaxis()->SetTitle("Candidates / [0.1 GeV]");
    //hmom_lp->SetStats(0);
    hmom_lp->Draw();
    //c4->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Momentum Distribution of Leading Protons.pdf");

    TCanvas *c5 = new TCanvas("c5","Theta Distribution of Leading Proton",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    htheta_lp->SetLineColor(kBlue);
    htheta_lp->SetFillStyle( 3002);
    htheta_lp->SetFillColor( kRed);
    htheta_lp->GetXaxis()->SetTitle("Theta #theta [radians]");
    htheta_lp->GetYaxis()->SetTitle("Candidates / [0.14 radians]");
    //htheta_lp->SetStats(0);
    htheta_lp->Draw();
    //c5->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Theta Distribution of Leading Proton.pdf");

    TCanvas *c6 = new TCanvas("c6","Phi Distribution of Leading Protons",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hphi_lp->SetLineColor(kBlue);
    hphi_lp->SetFillStyle( 3002);
    hphi_lp->SetFillColor( kRed);
    hphi_lp->GetXaxis()->SetTitle("Phi #phi [radians]");
    hphi_lp->GetYaxis()->SetTitle("Candidates / [0.14 radians]");
    //hphi_lp->SetStats(0);
    hphi_lp->Draw();
    //c6->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Phi Distribution of Leading Protons.pdf");

    TCanvas *c7 = new TCanvas("c7","Momentum Transfer from Muon to Proton",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hmom_tra->SetLineColor(kBlue);
    hmom_tra->SetFillStyle( 3002);
    hmom_tra->SetFillColor( kRed);
    hmom_tra->GetXaxis()->SetTitle("Momentum p [GeV]");
    hmom_tra->GetYaxis()->SetTitle("Candidates / [0.1 GeV]");
    //hmom_tra->SetStats(0);
    hmom_tra->Draw();
    //c7->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Momentum Transfer from Muon to Proton.pdf");

    TCanvas *c8 = new TCanvas("c8","Momentum Distribution of Muons",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hmu_mom->SetLineColor(kBlue);
    hmu_mom->SetFillStyle( 3002);
    hmu_mom->SetFillColor( kRed);
    hmu_mom->GetXaxis()->SetTitle("Momentum p [GeV]");
    hmu_mom->GetYaxis()->SetTitle("Candidates / [0.1 GeV]");
    //hmu_mom->SetStats(0);
    hmu_mom->Draw();
    //c8->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Momentum Distribution of Muons.pdf");

    TCanvas *c9 = new TCanvas("c9","Theta Distribution of Muons",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hmu_theta->SetLineColor(kBlue);
    hmu_theta->SetFillStyle( 3002);
    hmu_theta->SetFillColor( kRed);
    hmu_theta->GetXaxis()->SetTitle("Theta #theta [radians]");
    hmu_theta->GetYaxis()->SetTitle("Candidates / [0.14 radians]");
    hmu_theta->SetStats(0);
    hmu_theta->Draw();
    //c9->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Theta Distribution of Muons.pdf");

    TCanvas *c10 = new TCanvas("c10","Phi Distribution of Muons",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hmu_phi->SetLineColor(kBlue);
    hmu_phi->SetFillStyle( 3002);
    hmu_phi->SetFillColor( kRed);
    hmu_phi->GetXaxis()->SetTitle("Phi #phi [radians]");
    hmu_phi->GetYaxis()->SetTitle("Candidates / [0.14 radians]");
    hmu_phi->SetStats(0);
    hmu_phi->Draw();
    //c10->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Phi Distribution of Muons.pdf");
 
    TCanvas *c11 = new TCanvas("c11","Theta Distribution of Muons and Leading Proton",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hmu_theta->SetLineColor(kRed);
    hmu_theta->SetFillStyle( 3004);
    hmu_theta->SetFillColor( kRed);
    hmu_theta->SetTitle("Theta Distribution of Muons and Leading Proton");
    hmu_theta->GetXaxis()->SetTitle("Theta #theta [radians]");
    hmu_theta->GetYaxis()->SetTitle("Candidates / [0.14 radians]");
    hmu_theta->SetStats(0);
    hmu_theta->Draw();
    htheta_lp->SetLineColor(kBlue);
    htheta_lp->SetFillStyle( 3003);
    htheta_lp->SetFillColor( kBlue);
    htheta_lp->Draw("same");
    // add the legend
    auto legend_theta_mulp = new TLegend(0.15,0.85,0.35,0.75);
    legend_theta_mulp->AddEntry(hmu_theta,"Muon","f");
    legend_theta_mulp->AddEntry(htheta_lp,"Leading Proton","f");
    legend_theta_mulp->Draw();
    //c11->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Theta Distribution of Muons and Leading Proton.pdf");
    
    TCanvas *c12 = new TCanvas("c12","Phi Distribution of Muons and Leading Proton",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hmu_phi->SetLineColor(kRed);
    hmu_phi->SetFillStyle( 3004);
    hmu_phi->SetFillColor( kRed);
    hmu_phi->SetTitle("Phi Distribution of Muons and Leading Proton");
    hmu_phi->GetXaxis()->SetTitle("Phi #phi [radians]");
    hmu_phi->GetYaxis()->SetTitle("Candidates / [0.14 radians]");
    hmu_phi->SetStats(0);
    hmu_phi->Draw();
    hphi_lp->SetLineColor(kBlue);
    hphi_lp->SetFillStyle( 3003);
    hphi_lp->SetFillColor( kBlue);
    hphi_lp->Draw("same");
    // add the legend
    auto legend_phi_mulp = new TLegend(0.85,0.85,0.65,0.75);
    legend_phi_mulp->AddEntry(hmu_phi,"Muon","f");
    legend_phi_mulp->AddEntry(hphi_lp,"Leading Proton","f");
    legend_phi_mulp->Draw();
    //c12->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Phi Distribution of Muons and Leading Proton.pdf");

    TCanvas *c13 = new TCanvas("c13","Momentum of Leading Protons and Momentum Transfer",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    hmom_lp->SetLineColor(kRed);
    hmom_lp->SetFillStyle( 3004);
    hmom_lp->SetFillColor( kRed);
    hmom_lp->SetTitle("Momentum of Leading Protons and Momentum Transfer");
    hmom_lp->GetXaxis()->SetTitle("Momentum p [GeV]");
    hmom_lp->GetYaxis()->SetTitle("Candidates / [0.1 GeV]");
    hmom_lp->SetStats(0);
    hmom_lp->Draw();
    hmom_tra->SetLineColor(kBlue);
    hmom_tra->SetFillStyle( 3003);
    hmom_tra->SetFillColor( kBlue);
    hmom_tra->Draw("same");
    // add the legend
    auto legend_lpmom_trans = new TLegend(0.85,0.85,0.65,0.75);
    legend_lpmom_trans->AddEntry(hmom_lp,"Leading Proton Momentum","f");
    legend_lpmom_trans->AddEntry(hmom_tra,"Momentum Transfer","f");
    legend_lpmom_trans->Draw();
    //c13->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Momentum of Leading Protons and Momentum Transfer.pdf");

    TCanvas *c14 = new TCanvas("c14","Energy and Momentum Transfer from Muon to Proton",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    henr_tra->SetLineColor(kRed);
    henr_tra->SetFillStyle( 3004);
    henr_tra->SetFillColor( kRed);
    henr_tra->SetTitle("Energy and Momentum Transfer from Muon to Proton");
    henr_tra->GetXaxis()->SetTitle("Momentum p [GeV]");
    henr_tra->GetYaxis()->SetTitle("Candidates / [0.1 GeV]");
    henr_tra->SetStats(0);
    henr_tra->Draw();
    hmom_tra->SetLineColor(kBlue);
    hmom_tra->SetFillStyle( 3003);
    hmom_tra->SetFillColor( kBlue);
    hmom_tra->Draw("same");
    // add the legend
    auto legend_enrmom_trans = new TLegend(0.85,0.85,0.65,0.75);
    legend_enrmom_trans->AddEntry(henr_tra,"Energy Transfer","f");
    legend_enrmom_trans->AddEntry(hmom_tra,"Momentum Transfer","f");
    legend_enrmom_trans->Draw();
    //c14->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Energy and Momentum Transfer from Muon to Proton.pdf");

    
    TCanvas *c15 = new TCanvas("c15","Theta Distribution of Muon Scattering",600,400);
    // Draw the first histogram with a blue line, and an x-axis title
    h_musct_theta->SetLineColor(kBlue);
    h_musct_theta->SetFillStyle( 3002);
    h_musct_theta->SetFillColor( kRed);
    h_musct_theta->GetXaxis()->SetTitle("Theta #theta [radians]");
    h_musct_theta->GetYaxis()->SetTitle("Candidates / [0.06 radians]");
    //htheta->SetStats(0);
    h_musct_theta->Draw();
    c15->SaveAs("/Users/kangyang/Desktop/muonScatteringAnalysis/Plots/Theta Distribution of Muon Scattering.pdf");
  
}
