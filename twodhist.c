void twodhist(){
TH2D * h1 = new TH2D("h1", "2dhistogram", 40, -5,5,40,-5,5);
for (int i=0; i<10000; i++){
double u = gRandom->Gaus(0,1);
double w = gRandom->Gaus(0,1);
double x = u;
double y = w+ 0.5 *u;
h1->Fill(x,y);
}

//Projection and Profile X
h1->Draw("COLZ");
std::cout << "correlation factor " << h1->GetCorrelationFactor() << std::endl;
TH1 * hx = h1->ProjectionX(); 
TH1 * px = h1->ProfileX(); 
TCanvas * c2 = new TCanvas("c2","c2"); 
// divide in 2 pad in x and one in y
c2->Divide(2,1);
c2->cd(1); 
hx->Draw(); 
c2->cd(2);
px->Draw();
 }
 
 
