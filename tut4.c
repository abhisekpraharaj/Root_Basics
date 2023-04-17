void tut4()
{
	TGraph *gr = new TGraph();
	gr->SetMarkerStyle(kFullCircle);
	gr->SetLineWidth(2);
	gr->SetLineColor(kRed);
	gr->SetTitle("Graph; X axis; Y axis");
	//gr->SetTitle("Graph");	
	/*gr->GetXaxis()->SetTitle("X Values");
	gr->GetYaxis()->SetTitle("y Values");*/
	fstream file;
	file.open("data2.txt", ios::in);
	while(1)
	{
		double x,y;
		file>>x>>y;
		gr->SetPoint(gr->GetN(), x,y);
		if(file.eof()) break;
	}
	file.close();
	TCanvas *c1 =  new TCanvas;
	gr->Draw("ALP");
}
