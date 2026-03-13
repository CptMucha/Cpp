#include <iostream>
using std::cout, std:: cin, std::endl;

void NasobeniOdDo(int x,int y, int n)
{
  for (int i = x; i<=y; i++) 
  {
   cout << (n*i)<< endl;
  }
}

int main() 
{
  int x, y, n;
  cin >> x >> y>> n;
  if (!(cin >> x))
  {
    cout <<"Nezadane cisla" << endl;
    return 1;
  }
  if (y<x)
  {
  cout <<"Spatne zadany rozsah" << endl;
  return 1;
  }
  NasobeniOdDo(x,y,n);

return 0;
}

//Uživatel zadá číslo n, x,y  a program vypíše  násobení čísla n *  x do y
