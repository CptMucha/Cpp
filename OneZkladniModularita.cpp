#include <iostream>
#include <vector>

using namespace std;


void vypisVse(const vector<int>& nazev) 
{ 
    for (auto x : nazev) 
    {
        cout << x << " ";
    }
    cout << endl;
}

int main() 
{
    vector<int> data = {1, 2, 3};
    vypisVse(data); 
    
    return 0;
}