void newnew()
{
fstream file;
file.open("peru_1_Ge10.dat",ios::in);
TFile *f1= new TFile("paci.root", "RECREATE");
TTree *t1= new TTree("tree_1", "my_Tree_1");
double x ,y;
t1->Branch("x", &x, "x/D");
t1->Branch("y", &y, "y/D");
while(1)
{
file>> x >> y ;
if(file.eof()) break;
t1->Fill();
}
f1->Write();
f1->Close();
file.close();
}




