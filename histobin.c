void histobin(){

TH1F * hist = new TH1F("hist", "Histogram", 200, 0, 10);
//TCanvas * c1 = new TCanvas();

 for (int i=0; i <10000;  i++ ){
	 hist -> Fill(gRandom->Uniform(0,10));
}
for (int i = 0; i< 1000; i++){
	hist->Fill(gRandom->Gaus(5,0.3));
}



hist->Draw(); 
double ibinMax = hist->GetMaximumBin();
std::cout << "Bin with maximum is " << ibinMax << " at x = " << hist->GetBinCenter(ibinMax) << std::endl;
std::cout << "Maximum Content  is " << hist->GetBinContent(ibinMax) << " +/- " << hist->GetBinError(ibinMax) << std::endl;
//TAxis *axis = hist->GetXaxis();
//axis->SetRange( axis->FindBin(4.0001), axis->FindBin(5.9999));
//gPad->Update();

}
