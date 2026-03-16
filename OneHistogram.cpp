// Program reads numbers in the range 1-10 and creates a histogram using '#' characters according to frequency on the Y axis
#include <iostream>
#include<vector>
using std::cout, std::cin, std::vector, std::endl;

void histogram(int n, int hodnoty) // Function that reads numbers and prints a histogram
{
	vector<int> values(n); // Create a vector to store n input values
	for (int i = 0; i<n; i++) // Read n numbers from input
	{
		cin >> values[i];
	}

	vector<int> counter(10,0); 	// Create a counter vector for numbers 1-10, initialized to 0
	for (auto hodnoty : values) // Count frequency of each number
	{
		counter[hodnoty-1]++; // Increase counter for the corresponding number
	}

	for (int i = 0; i < 10; i++) // Print histogram
	{
		if (counter[i] > 0) // Print only numbers that appeared at least once
		{
			cout << i + 1 << " "; // Print the number (X axis value)
			for (int j = 0; j < counter[i]; j++) // Print '#' characters according to the frequency
			{
				cout << "#";
			}
			cout << endl; // Move to next line
		}
	}
}

int main()
{
	int n,hodnoty;
	cin >>n;

	histogram(n, hodnoty);
	return 0;
}


