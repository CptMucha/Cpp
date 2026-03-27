#include <iostream>
#include <string>
using namespace std;

class Hrdina
{
  public:
  string jmeno;
  int zdravi;
  
  void utrpPoskozeni(int kolik)
  {
   zdravi = zdravi - kolik;
   cout <<jmeno<< " má " << zdravi<< " HP"; 
  }

};

int main() 
{
  
  Hrdina Legend;
  Legend.jmeno=("Leo");
  Legend.zdravi=100;
  int kolik = 20;
  
  Legend.utrpPoskozeni(kolik);
  return 0;
}