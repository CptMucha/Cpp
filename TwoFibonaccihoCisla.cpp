#include <iostream>
using namespace std;


int main() 
{
    int dolni_mez = 100;
    int horni_mez = 10000;

    int a = 0;
    int b = 1;

    cout << "Fibonacciho cisla v rozsahu " 
         << dolni_mez << " az " << horni_mez << ":" << endl;

    while (a <= horni_mez) 
    {
        if (a >= dolni_mez) 
        {
            cout << a << " ";
        }

        int dalsi = a + b;
        a = b;
        b = dalsi;
    }

    cout << endl;
    return 0;
}