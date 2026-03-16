#include <iostream>
using namespace std;

int main() 
{
  int a, b;
  int nasobitel = 1;
  cin >>a >>b;
  for(int i = 0; i<b; i++)
  {
    nasobitel = nasobitel *a;
  }
 cout << nasobitel<<endl;
 return 0;
}

//Program vypocita mocninu x na y