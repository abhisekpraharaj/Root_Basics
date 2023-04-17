void newnew_4()
{
fstream file;
file.open("QA_Ge10.dat",ios::in);
TFile *f4= new TFile("paci_4.root", "RECREATE");
TTree *t4= new TTree("tree_4", "my_Tree_4");
double r, s;
t4->Branch("r", &r, "r/D");
t4->Branch("s", &s, "s/D");
while(1)
{
file>> r >> s ;
if(file.eof()) break;
t4->Fill();
}
f4->Write();
f4->Close();
file.close();
}
