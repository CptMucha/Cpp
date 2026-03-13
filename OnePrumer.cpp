#include <iostream>
#include <vector>

using namespace std;

double spocitejPrumer(const vector<int>& seznam) 
{
    double soucet = 0;
    for (auto prvek : seznam) 
    {
        soucet += prvek;
    }
    return soucet / seznam.size();
}

int najdiNejlepsi(const vector<int>& seznam) 
{
    int nejlepsi_zatim = seznam[0]; 

    for (auto prvek : seznam) 
    {
        if (prvek < nejlepsi_zatim) 
        {
            nejlepsi_zatim = prvek; 
        }
    }
    return nejlepsi_zatim;
}

int main() 
{
    vector<int> data;
    int vstup;

    while (cin >> vstup && vstup != 0) 
    {
        data.push_back(vstup);
    }

    double vysledek = spocitejPrumer(data);

    if (!data.empty()) 
    {
        cout << "Pocet znamek: " << data.size() << endl;
        cout << "Prumer je: " << vysledek << endl;
        cout << "Nejlepsi: " << najdiNejlepsi (data) << endl;
    } 
    else 
    {
        cout << "Nic" << endl;
    }

    return 0;
}