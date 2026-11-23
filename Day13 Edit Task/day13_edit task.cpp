// Day 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int tasksCount;
	cout << "Enter number of tasks: ";
	cin >> tasksCount;

	vector<string> tasks(tasksCount);
	for (int i = 0; i < tasksCount; i++)
	{
		cout << "Task " << i + 1 << ": ";
		cin >> tasks[i];
	}

	cout << "\n Tasks List \n";
	for (int i = 0; i < tasks.size(); i++)
	{
		cout << i + 1 << ". " << tasks[i] << "\n";
	}

	int taskNumber;
	cout << "\nEnter task number to edit: ";
	cin >> taskNumber;

	string newTask;
	cout << "Enter new task name: ";
	cin >> newTask;

	int indexToEdit = taskNumber - 1;

	if (indexToEdit >= 0 && indexToEdit < tasks.size())
	{
		tasks[indexToEdit] = newTask;
		cout << "Task updated successfully \n";
	}
	else
	{
		cout << "Invalid task number\n";
	}

	cout << "\n  Updated Tasks List \n";
	for (int i = 0; i < tasks.size(); i++)
	{
		cout << i + 1 << ". " << tasks[i] << "\n";
	}

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
