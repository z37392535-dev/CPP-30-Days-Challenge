// 6 (Loop Menu).cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 * Project: Day 06 - Interactive Loop Menu (While Loop)
 * Description: A menu program that keeps running in a loop until the user chooses to exit.
 */

#include <iostream>
using namespace std;

int main()
{
    int choice = 0; 

    // Õ·ﬁ… while  ” „— ›Ì «·⁄„· ÿ«·„« √‰ «Œ Ì«— «·„” Œœ„ ·« Ì”«ÊÌ 3
    while (choice != 3)
    {
        cout << "\n   My Interactive Menu   \n";
        cout << "1. Say Hello\n";
        cout << "2. Say Welcome\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n Hello Have a wonderful day.\n";
            break;

        case 2:
            cout << "\n Welcome to C++ programming journey\n";
            break;

        case 3:
            cout << "\n Exiting the program  Goodbye!\n";
            break;

        default:
            cout << "\n Invalid choice  Please choose between 1 and 3.\n";
            break;
        }
    } // ‰Â«Ì… Õ·ﬁ… «·‹ while Ê«·⁄Êœ… ··√⁄·Ï ≈–« ·„ Ìﬂ‰ «·«Œ Ì«— 3

    return 0;
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
