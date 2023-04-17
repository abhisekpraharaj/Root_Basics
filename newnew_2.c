void newnew_2()
{
fstream file_2;
file_2.open("peru_1_Ge11.dat",ios::in);
TFile *f2= new TFile("paci_2.root", "RECREATE");
TTree *t2= new TTree("tree_2", "my_Tree_2");
double z ,t;
t2->Branch("z", &z, "z/D");
t2->Branch("t", &t,"t/D");
while(1)
{
file_2>> z >> t ;
if(file_2.eof()) break;
t2->Fill();
}
f2->Write();
f2->Close();
//close
file_2.close();
}
