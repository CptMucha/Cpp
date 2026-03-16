#include <iostream>
using namespace std;

void tabulkovac(int n)
{
	for (int i=1; i<=n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << j + i << " ";
		}
		cout<< endl;
	}
}

int main()
{
	int n;

	if (!(cin >> n) || n <= 0)
	{
		cout << "Zadej kladne cislo" << endl;
		return 1;
	}

	tabulkovac(n);
	return 0;
}

/*
Program vytvoří tabulku  pro čísla 1–n a počtu n. 
1 2 3 4 5
2 3 4 5 6
...
*/

