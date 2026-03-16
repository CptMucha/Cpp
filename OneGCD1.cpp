#include <iostream>
using namespace std;

int GCD(int a, int b)
{
  while (b!=0)
  {
    int N = a%b;
    a = b;
    b=N;
    //cout << b<< endl;
  }
  return a;
}

int main()
{
   int a,b;
    cin >> a >> b;

  cout << GCD(a,b)<< endl;
  return 0;
}