#include <TGraphErrors.h>
#include <TCanvas.h>
#include <TMath.h>
void tut20()
{
	TCanvas *c1 = new TCanvas("c1", "PlottingwithError Bars", 1920,780);
	TFile * file = new TFile ("plotterwitherror.root", "recreate");
	const int n=10;
	double x_vals[n]={1,2,3,4,5,6,7,8,9,10};
	double y_vals[n]={6,12,14,20,22,24,35,45,44,53};
	double y_errs[n]={5,5,4.7,4.5,4.2,5.1,2.9,4.1,4.8,5.43};
	TGraphErrors *gr = new TGraphErrors(n,x_vals,y_vals,y_errs);
	gr->SetMarkerStyle(kOpenCircle);
  	gr->SetMarkerColor(kBlue);
    	gr->SetLineColor(kBlue);
	TF1 * func = new TF1("func", "[0]+[1]*x");
	func->SetParameter(0,.5);
	func->SetParameter(1,10.5);	
		
	gr->Fit("func");
		
	gr->Write();
	//file->Close();
	gr->Draw();

}

