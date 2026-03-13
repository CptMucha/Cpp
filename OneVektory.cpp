#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    
    int pocetPolozek, max;
    double polozky, soucet = 0;;
    cin >>pocetPolozek;
    vector<double> seznam;
    for (int i = 0; i <pocetPolozek; i++) //nacteni do vektoru
    {
      cin>> polozky;
      seznam.push_back(polozky);
    }
    for (int i = 0; i <pocetPolozek; i++) //vypis vsech prvku
    {
        cout << seznam[i] << endl;
    }
    for (auto polozky : seznam) //prumerna cena vsech prvku
    {
        soucet += polozky;
    } 
    cout <<"Prumerna cena "<< (soucet/pocetPolozek)<< endl;
    
    for(auto polozky: seznam) //nejvetsi prvek ve vektoru
    {
      max= seznam[0];
      for (size_t i = 1; i < seznam.size(); i++) 
      {
        if (seznam[i] > max) 
        {
            max = seznam[i];
        }
      }
    
      
    }
    cout << max<< endl;
    cout << "druhy ukol"<< endl;
    
    int nubmers, cislovky = 10;
    vector<int> cisla;
    for (int i = 0; i <cislovky; i++) //nacteni do vektoru
    {
      cin>> polozky;
      cisla.push_back(polozky);
    }
    
    for (int i = 0; i <cislovky; i++) //vypis vsech prvku
    {
        cout << cisla[i] << endl;
    }
    
    cout << "zmena prvku"<< endl;
    cisla[4] =69;
        for (int i = 0; i <cislovky; i++) //vypis vsech prvku po zmene
      {
        cout << cisla[i] << endl;
      }
    cout << "pouze sude"<< endl;
    vector<int> suda;
    
    for (int n : cisla) //vypis pouze sudych cisel
    {
        if (n % 2 == 0) 
        {
            suda.push_back(n);
        }
    }
    for (int n : suda) 
    {
      cout << n << endl;
    }
    cout << "pocet sudych: "<< suda.size()<< endl;

    return 0;
}