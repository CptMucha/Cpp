#include <iostream>
#include <cmath>
using namespace std;  
  
void KvadratickaR (int a, int b, int c) 
{
  int diskriminant = ((b*b)-(4*(a*c))); 
  if (diskriminant < 0) 
  {
    cout << "Rovnice nema realna reseni" << endl;
    return;
  }
  cout << "Diskriminant: " << diskriminant << endl;
  double x1 =((-b +(sqrt (diskriminant))))/ (2.0*a);
  double x2 =((-b -(sqrt (diskriminant))))/ (2.0*a);
  cout << "x1 = " << x1 << endl;
  cout << "x2 = " << x2 << endl;
}

int main()
{
  int a,b,c;
  cin >>a>>b>>c;
  KvadratickaR(a, b, c);
  return 0;
}
