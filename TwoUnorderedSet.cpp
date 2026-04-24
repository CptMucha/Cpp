#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void detektorDuplikatu() 
{
    unordered_set<int> seen;
    int x;

    while (cin >> x) 
    {
        if (seen.find(x) != seen.end()) 
        {
            cout << "Duplikat nalezen: " << x << endl;
        } 
        else 
        {
            seen.insert(x);
        }
    }
    cin.clear();
}

void prunikPoli() 
{
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {3, 4, 5, 6};

    unordered_set<int> setA(A.begin(), A.end());

    cout << "Prunik A a B: ";

    for (int x : B) {
        if (setA.find(x) != setA.end()) 
        {
            cout << x << " ";
        }
    }

    cout << endl;
}

int main() 
{
    detektorDuplikatu();
    prunikPoli();

    return 0;
}