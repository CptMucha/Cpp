#include <iostream>
using namespace std;

int main() 
{

  int aM,bM, GCD =1;
  cin >> aM >>bM;
  for (int i = 1; i <= aM && i <= bM; i++)  
  {
        if (aM % i == 0 && bM % i == 0) 
        {
            GCD = i;
        }
    }
    cout  << GCD << endl;
//slow GCD

  return 0;
}
