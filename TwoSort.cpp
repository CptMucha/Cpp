#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int pole[] = {5, 2, 9, 1, 5, 6};
    int velikost = sizeof(pole) / sizeof(pole[0]); // zjistime delku

    // Tisk původního pole
    cout << "First pole: ";
    for (int i = 0; i < velikost; i++) 
    {
        cout << pole[i] << " ";
    }
    cout << endl;

    sort(pole, pole + velikost); // serazevi vzestupne

    cout << "Sorted pole: ";
    for (int i = 0; i < velikost; i++) 
    {
        cout << pole[i] << " ";
    }
    cout << endl;

    return 0;
}