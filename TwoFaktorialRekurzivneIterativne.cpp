#include <iostream>
using namespace std;

long long factorialRecursive(int n) 
{
    if (n <= 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

long long factorialIterative(int n) 
{
    long long result = 1;
    for (int i = 2; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int n = 5;
    cout << "Faktorial (rekurzivne): " << factorialRecursive(n) << endl;
    cout << "Faktorial (iterativne): " << factorialIterative(n) << endl;
    return 0;
}
