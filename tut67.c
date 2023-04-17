void tut67()
{
TFile *f1 = TFile:: Open("mHistogram.root","READ");
TH1F *hist= (TH1F*)f1->Get("h1");
//TCanvas *c1 = new TCanvas();
hist->Draw();
//c1->Draw();
}
