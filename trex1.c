void trex1(){
    // Create a ROOT file to store the TTree
    TFile *file = TFile::Open("mytree.root", "RECREATE");
    // Create a TTree with name "mytree" and a title
    TTree *tree = new TTree("mytree", "My TTree example");
    // Declare variables to be stored in the TTree
    double x, y, z, t;
    // Create branches in the TTree for each variable
    tree->Branch("x", &x, "x/D");
    tree->Branch("y", &y, "y/D");
    tree->Branch("z", &z, "z/D");
    tree->Branch("t", &t, "t/D");
    // Generate data and fill the TTree
    for (int i=0; i<10000; ++i){
    	x= gRandom->Uniform(0,10);
    	y= gRandom->Gaus(0,5);
    	z= gRandom->Exp(5);
    	t= gRandom->Landau(0,10);
        tree->Fill();
    }
    // Write the TTree to the file and close the file
    tree->Write();
    file->Close();
}

