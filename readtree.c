void readtree()
{
TFile * f1 = TFile::Open("mytree.root");
 if (f1 == 0) {
      // if we cannot open the file, print an error message and return immediatly
      printf("Error: cannot open MyTree.root!\n");
      return;}
 TTree *tree = (TTree *)f1->Get("mytree");

 Long64_t nentries = tree->GetEntries();
 for (Long64_t i = 0; i < tree->GetEntries(); i++) {
    tree->GetEntry(i);
 }
 f1->Close();
 }
 
