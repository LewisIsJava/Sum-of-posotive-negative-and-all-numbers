// Sum of posotive, negative and all numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number, negative_sum = 0, positive_sum = 0, sum = 0, posotive_count = 0, negative_count = 0;
	cout << "Please enter a whole number when propmpted\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter number " << i << " : ";
		cin >> number;


		if (number > 0)
		{
			positive_sum += number;
			posotive_count++;
		}
		else
		{
			negative_sum += number;
			negative_count++;
		}
	}

	cout << "The sum of the positive numbers is: " << positive_sum << endl;
	cout << "The sum of the negative numbers is: " << negative_sum << endl;
	cout << "The overall sum is: " << positive_sum + negative_sum << endl;

	cout << endl;

	cout << "The average of the posotive numbers is: " << positive_sum / posotive_count << endl;
	cout << "The average of the negative numbers is: " << negative_sum / negative_count << endl;
	cout << "The average of all the numbers is: " << (positive_sum + negative_sum) / (negative_count + posotive_count);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
