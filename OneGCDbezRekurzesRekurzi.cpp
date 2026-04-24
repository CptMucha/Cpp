#include <iostream>
using namespace std;

//s rekurzi
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main() 
{
  //bez rekurze
  int a = 60;
  int b = 24;
  
  while (b != 0)
  {
  int N = a % b;
  a = b;
  b = N;
  }
  cout << "Bez rekurze: " << a << endl;
  
  
  cout <<"S rekurzi: "<<  gcd(a, b);
  if (b == 0)
  {
    return a;
    }
    else
    {
        return gcd(b, a % b);
    }

    return 0;
}