#include <iostream>
using namespace std;

int main() 
{
  int c;
  int v = 1;
  cin >> c;
  if (c > 13)
  {
    cout << "nevleze se do intu" << endl;
    return 1;
  }
  for(int i = 0; i<c; i++)
  {
    (v = v*(i+1));
  }
  cout << v<<endl;
 return 0;
}

//Vypocet faktorialu daneho cisla do 13