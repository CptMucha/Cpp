#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector;

void insertionSort(vector<int>& data) // Function that sorts the vector using the Insertion Sort algorithm
{
	for (size_t i = 1; i < data.size(); i++) 
	{
		int klic = data[i];
		int j = i - 1;

		// Posouváme prvky větší než 'klic' o jedno místo doprava
		while (j >= 0 && data[j] > klic) 
		{
			data[j + 1] = data[j];
			j--;
		}
		data[j + 1] = klic;
	}
}

void printUnique(const vector<int>& data) // Function that prints only unique values from a sorted vector
{
	for (size_t i = 0; i < data.size(); i++) // Print the first element OR any element different from the previous one
	{
		if (i == 0 || data[i] != data[i - 1])
		{
			cout << data[i] << " ";
		}
	}
	cout << std::endl;
}

int main()
{
	int vstupniCislo;
	vector<int> numbersKSerazeni;

	// Načítání čísel (0 ukončuje vstup)
	while (cin >> vstupniCislo && vstupniCislo != 0)
	{
		numbersKSerazeni.push_back(vstupniCislo);
	}

	insertionSort(numbersKSerazeni); // Řazení pomocí insertion sortu
	printUnique(numbersKSerazeni);   // Výpis unikátních hodnot

	return 0;
}