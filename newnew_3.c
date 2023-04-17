void newnew_3()
{
fstream file;
file.open("peru_1_NaI.dat",ios::in);
TFile  *f3 = new TFile("paci_3.root", "RECREATE");
TTree  *t3 = new TTree("tree_3", "my_Tree_3");
double p, q;
t3->Branch("p", &p, "p/D");
t3->Branch("q", &q, "q/D");
while(1)
{
file>> p >> q ;
if(file.eof()) break;
t3->Fill();
}
f3->Write();
f3->Close();
file.close();
}




