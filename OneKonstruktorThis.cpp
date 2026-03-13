#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*class Obdelnik
{
private:
    int sirka;
    int vyska;

public:
    void nastavRozmery(int sirka, int vyska)
    {
        this->sirka = sirka;
        this->vyska = vyska;
    }
};*/

class Obdelnik 
{
    int s, v;
    public:
    // KONSTRUKTOR - nemá void, jmenuje se jako třída
    Obdelnik(int s, int v) 
    {
        this->s = s;
        this->v = v;
    }
        void vypocitejObsah()
    {
        cout << "Plocha: " << (s * v) << endl;
    }
};

class Kniha
{
private:
    string nazev;
    int pocetstran;

public:
    void Prirad(string nazev, int pocetstran)
    {
        this->nazev = nazev;
        this->pocetstran = pocetstran;
    }

    int getPocetStran()
    {
        return pocetstran;
    }
};

int main()
{
    Obdelnik o(10, 20);
    o.vypocitejObsah();

    vector<Kniha> knihovna;
    Kniha k1, k2, k3;
    k1.Prirad("Shakespeare", 110);
    k2.Prirad("Orwell", 210);
    k3.Prirad("Kafka", 100);
    knihovna.push_back(k1);
    knihovna.push_back(k2);
    knihovna.push_back(k3);

    int pocetstran = 0;
    for (auto k : knihovna)
    {
        pocetstran += k.getPocetStran();
    }
    cout << pocetstran << endl;

    return 0;
}
