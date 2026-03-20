#include <iostream>
#include <vector>
using std::cin, std::cout, std::swap, std::vector;

void selectionSort(vector<int>& numbers) // Function that sorts the vector using the Selection Sort algorithm
{
	for (size_t j = 0; j < numbers.size(); j++) // Outer loop selects the position where the smallest element will go
	{
		size_t indexMinima = j; // Assume the current position has the smallest element

		for (size_t i = j + 1; i < numbers.size(); i++) // Inner loop searches for the smallest element in the rest
		{
			if (numbers[i] < numbers[indexMinima]) // If a smaller element is found, remember its index
			{
				indexMinima = i;
			}
		}
		swap(numbers[j], numbers[indexMinima]); // After finding the smallest element, swap it with the current position
	}
}

void printUnique(const vector<int>& numbers) // Function that prints only unique values from a sorted vector
{
	for (size_t i = 0; i < numbers.size(); i++) // Print the first element OR any element different from the previous one
	{
		if (i == 0 || numbers[i] != numbers[i - 1])
		{
			cout << numbers[i] << " ";
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

	selectionSort(numbersKSerazeni);
	printUnique(numbersKSerazeni);

	return 0;
}
//532 17 889 304 76 991 245 68 710 402 159 823 54 678 920 11 347 765 230 888 96 501 743 62 815 999 120 438 277 690 35 804 561 222 947 410 73 655 381 29 870 146 999 523 602 318 77 845 264 930 12 711 488 358 91 674 250 807 999 43 520 137 600 289 754 66 915 333 471 28 869 145 999 534 612 319 78 846 265 931 13 712 489 359 92 675 251 808 44 521 138 601 290 755 67 916 334 472 30 871 0 14
