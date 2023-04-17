void errgr()
{
TGraphErrors *gr = new TGraphErrors();

fstream file;
file.open("data_error.txt", ios::in);

double x, y, ex, ey;
int n=6;
while(1)
{
file >> x >> y >> ex >> ey;
n=gr->GetN();
gr->SetPoint(n,x,y);
gr->SetPointError(n,ex,ey);
if(file.eof()) break;
}
gr->Draw();
}
 
 
 
 
