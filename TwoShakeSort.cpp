#include <iostream>
#include <vector>
using std::cin, std::cout, std::swap, std::vector;

void shakeSort(vector<int>& data) // Function that sorts the vector using the Shake Sort algorithm
{
	bool swapped = true;
	int start = 0;
	int end = data.size() - 1;

	while (swapped)
	{
		swapped = false;

		// Zleva doprava (jako bubble)
		for (int i = start; i < end; i++)
		{
			if (data[i] > data[i + 1])
			{
				swap(data[i], data[i + 1]);
				swapped = true;
			}
		}

		if (!swapped) break;

		swapped = false;
		end--;

		// Zprava doleva
		for (int i = end - 1; i >= start; i--)
		{
			if (data[i] > data[i + 1])
			{
				swap(data[i], data[i + 1]);
				swapped = true;
			}
		}

		start++;
	}
}

void printUnique(const vector<int>& data) // Function that prints only unique values from a sorted vector
{
	for (size_t i = 0; i < data.size(); i++)
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

	shakeSort(numbersKSerazeni); // Řazení pomocí shake sortu
	printUnique(numbersKSerazeni); // Výpis unikátních hodnot

	return 0;
}

//532 17 889 304 76 991 245 68 710 402 159 823 54 678 920 11 347 765 230 888 96 501 743 62 815 999 120 438 277 690 35 804 561 222 947 410 73 655 381 29 870 146 999 523 602 318 77 845 264 930 12 711 488 358 91 674 250 807 999 43 520 137 600 289 754 66 915 333 471 28 869 145 999 534 612 319 78 846 265 931 13 712 489 359 92 675 251 808 44 521 138 601 290 755 67 916 334 472 30 871 0 14
