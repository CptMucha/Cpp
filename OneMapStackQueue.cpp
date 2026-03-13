#include <iostream>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int main()
{
	cout <<"stack"<< endl;
	stack<int> cislovky;
	cislovky.push(10);
	cislovky.push(20);
	cislovky.push(30);
	cislovky.push(40);
	cislovky.push(15);
	cislovky.push(25);
	cislovky.push(35);
	cout << "Nahore je " << cislovky.top() << endl;
	cislovky.pop();
	cout << "nynC- je nahore: " << cislovky.top() <<endl;
	cout << "Velikost: " << cislovky.size() << endl;

	cout <<"mapa"<< endl;
	map<string, int> vek_lidi;
	vek_lidi["Honza"] = 20;
	vek_lidi["Petr"] = 25;
	cout << vek_lidi["Honza"];

	cout <<"Queue"<< endl;
	queue<char> znaky;
	znaky.push('#');
	znaky.push('l');
	znaky.push('.');
	znaky.push('/');
	znaky.push('7');
	znaky.push('\\');
	cout << "Jako prvni znak je: " << znaky.front()<< endl;
	cout << "Jako posledni znak je: " << znaky.back()<< endl;
	znaky.pop();
	cout << "Jako prvni znak po uprave je: " << znaky.front()<< endl;
    
    queue<string> Jmena;
  Jmena.push("Alena");
  Jmena.push("Borek");
  Jmena.push("Cyril");
  cout <<Jmena.front()<<endl;
  Jmena.pop();
  cout <<Jmena.front()<<endl;

    map<int, int> cetnost;
    int cislo;
    for(int i = 0; i < 5; i++) 
    {
        cin >> cislo;
        cetnost[cislo]++; 
    }
    
    for(auto const& [key, val] : cetnost) 
    {
        cout << "Cislo " << key << " se opakovalo " << val << "x" << endl;
    }

    string s = "({[]})";
    stack<char> databaze;
    bool jeToOk = true;

    for (char znak : s) 
    {
        if(znak == '(' || znak == '{' || znak == '[') 
        {
            databaze.push(znak);
        } 
        else if(znak == ')' || znak == '}' || znak == ']') 
        {
            if(databaze.empty()) 
            {
                jeToOk = false;
            } 
            else
            {
                databaze.pop();
            }
        }
    }

    if(jeToOk && databaze.empty()) cout << "Zavorkovani je v poradku!" << endl;
    else cout << "Chyba v zavorkovani!" << endl;

	return 0;
}
