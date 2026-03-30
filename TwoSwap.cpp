#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int a = 10;
    int b = 20;
    cout << "before: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "after: a = " << a << ", b = " << b << endl;

    int pole[] = {1, 2, 3};
    cout << "before: ";
    for(int i : pole) cout << i << " ";
    cout << endl;

    swap(pole[0], pole[2]); // first and last one
    cout << "after: ";
    for(int i : pole) cout << i << " ";
    cout << endl;

    return 0;
}