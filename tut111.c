void tut111()
{
TFile * f1= new TFile("mHistogram.root", "RECREATE");
TH1F *hist = new TH1F("h1","Histogram",100,0,100);

hist->Fill(10);
hist->Fill(90);

f1->Write();
//f->Close();
}
