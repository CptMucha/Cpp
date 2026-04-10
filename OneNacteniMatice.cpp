#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<char>> NacteniMatice(int PocetRadku, int PocetZnaku)
{
  vector<vector<char>> Souradnice;

for (int i = 0; i <PocetRadku; i++) 
{
    vector<char> radek;
    for (int j =0; j< PocetZnaku; j++)
    {
        char znak;
        cin >> znak;
        radek.push_back(znak);
    }
    Souradnice.push_back(radek);
}

return Souradnice;
}

void Vypis(const vector<vector<char>> &Souradnice)
{
  for (const auto &x : Souradnice)
{
  for (char y :x)
  {
    cout <<y;
  }
  cout <<endl;
}
}

int main() 
{
  int PocetRadku;
  cin >>PocetRadku;
  int PocetZnaku;
  if (PocetRadku <0)
  {
    return 1;
  }
  
  auto mojeMatice = NacteniMatice(PocetRadku, PocetRadku);
  Vypis(mojeMatice);

return 0;
}