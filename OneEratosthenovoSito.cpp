#include <iostream>
#include<vector>
using std::cout, std:: cin, std::endl, std::vector;


int Eratosthenovo (int x, int y)
{
vector <bool> Prvocisla (y+1, true);
Prvocisla[0] = false;
Prvocisla[1] = false;

if (x > y)
{
  cout << "nefunguje" << endl;
  return 1;
}

for (int i = 2; i*i <=y; i++)
{
  if (Prvocisla[i] == true)
  { 
    for (int j = i * i; j <= y; j += i) 
      {
        Prvocisla[j] = false;
      }
    }
}
for (int i = x; i <= y; i++) 
{
    if (Prvocisla[i] == true) 
    {
        cout << i << " "; 
    }
  }

  return 0;
}

int main() 
{
int x, y;
cin >> x >>y;
Eratosthenovo(x,y);

return 0;
}

//Program vypíše všechna prvočísla v rozsahu x y (Eratosthenovo síto)

