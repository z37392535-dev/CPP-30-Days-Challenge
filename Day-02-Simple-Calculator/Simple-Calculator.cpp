// آلة حاسبة بسيطة للعمليات الأساسية والنسبة المئوية.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    cout << " Enter first number :\n ";
    cin >> num1;

    cout << " Enter second number :\n ";
    cin >> num2;

    cout << " Results \n";
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
    cout << num1 << " * " << num2 << " = " << (num1 * num2)<< "\n";

    if (num2!= 0)
    {
      cout << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
      cout << num1 << " is " << ((num1 / num2) * 100) << "% of " << num2 << "\n";
    }
    else
    {
        cout << "Division by zero is undefined \n";
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
