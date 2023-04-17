void newnew_5()
{
fstream file;
file.open("QA_Ge11.dat",ios::in);
TFile *f5= new TFile("paci_5.root", "RECREATE");
TTree *t5= new TTree("tree_5", "my_Tree_5");
double u, v;
t5->Branch("u", &u, "u/D");
t5->Branch("v", &v, "v/D");
while(1)
{
file>> u >> v ;
if(file.eof()) break;
t5->Fill();
}
f5->Write();
f5->Close();
file.close();
}
