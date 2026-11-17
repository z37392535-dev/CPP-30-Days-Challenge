// (Functions Calculator).cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void add(double a, double b)
{
cout << "Result: " << (a + b) << "\n";
}

void subtract(double a, double b)
{
	cout << "Result: " << (a - b) << "\n";
}


int main()
{
	double num1, num2;
	int choice;

	cout << "  Simple Calculator \n";
	cout << "1. Add\n";
	cout << "2. Subtract\n";
	cout << "Enter choice (1 or 2): ";
	cin >> choice;

	cout << "Enter two numbers:\n";
	cin >> num1 >> num2;

	if (choice == 1)
	{
		add(num1, num2); 
	}
	else if (choice == 2)
	{
		subtract(num1, num2);
	}
	else
	{
		cout << "Invalid choice \n";
	}
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
