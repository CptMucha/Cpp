#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Obdelnik
{
  private: 
  int sirka, vyska;
  
  public:
  
  void nastavRozmery(int s, int v)
  {
    sirka = s;
    vyska =v;
  }
  
  void vypocitejObsah()
  {
    cout << "Plocha: " << (sirka*vyska) << endl;
  }
  
};

class Student
{
  private: 
  string jmeno;
  int znamka;
  
  public:
  
  void nastav(string j, int z)
  {
    jmeno = j;
    znamka = z;
  }
  void rekniZnamku()
  {
    cout << "Student " << jmeno << " ma znamku " << znamka << endl;
  }
  int dejZnamku() 
  {
        return znamka;
    }

    string dejJmeno() 
    {
        return jmeno;
    }
};

void porovnejStudenty(Student &s1, Student &s2) 
{
    if (s1.dejZnamku() < s2.dejZnamku()) 
    {
        cout << "Lepsi znamku ma: " << s1.dejJmeno() << endl;
    }
    else if (s2.dejZnamku() < s1.dejZnamku()) 
    {
        cout << "Lepsi znamku ma: " << s2.dejJmeno() << endl;
    } 
    else 
    {
        cout << "Oba maji stejnou znamku." << endl;
    }
}

int main() 
{
  Obdelnik Plocha;
  Plocha.nastavRozmery(5, 10);
  Plocha.vypocitejObsah();
  
  Student studentA;
    Student studentB;

    studentA.nastav("Adam", 2);
    studentB.nastav("Petr", 3);

    // 2. Porovnání pomocí funkce
    porovnejStudenty(studentA, studentB);

    // 3. Pro zajímavost: Více studentů v poli (vektoru)
    vector<Student> trida;
    trida.push_back(studentA);
    trida.push_back(studentB);
    
    return 0;
}