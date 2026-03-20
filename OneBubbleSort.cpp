#include <iostream>
#include <vector>
using std::cin, std::cout, std::swap, std::vector;

void bubbleSort(vector<int>& data) // Function that sorts the vector using the Bubble Sort algorithm
{
	for (size_t j = 0; j < data.size(); j++) // Outer loop controls how many passes we do
	{
		for (size_t i = 1; i < data.size() - j; i++)         // Inner loop compares adjacent elements
		{	// After each pass, the largest element is placed at the end
			if (data[i - 1] > data[i]) // If elements are in the wrong order, swap them
			{
				swap(data[i], data[i - 1]);
			}
		}
	}
}

void printUnique(const vector<int>& data) // Function that prints only unique values from a sorted vector
{
	for (size_t i = 0; i < data.size(); i++) // Print the first element OR any element different from the previous one
	{	// (works correctly because the vector is already sorted)
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
	while (cin >> vstupniCislo && vstupniCislo != 0)
	{
		numbersKSerazeni.push_back(vstupniCislo);
	}
	bubbleSort(numbersKSerazeni);
	printUnique(numbersKSerazeni);

	return 0;
}
//532 17 889 304 76 991 245 68 710 402 159 823 54 678 920 11 347 765 230 888 96 501 743 62 815 999 120 438 277 690 35 804 561 222 947 410 73 655 381 29 870 146 999 523 602 318 77 845 264 930 12 711 488 358 91 674 250 807 999 43 520 137 600 289 754 66 915 333 471 28 869 145 999 534 612 319 78 846 265 931 13 712 489 359 92 675 251 808 44 521 138 601 290 755 67 916 334 472 30 871 0 14
