// Day17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int tasksCount;
	cout << "Enter Number of Tasks ";
	cin >> tasksCount;

	vector <string> tasks(tasksCount);
		for (int i = 0; i < tasksCount; i++)
		{
			cout << "Task : " << i + 1 << ". ";
			cin >> tasks[i];
		}

		if (!tasks.empty())
		{
			string firstTask = tasks[0];
			tasks.erase(tasks.begin());
			tasks.push_back(firstTask);
		}

		cout << "\n Updated Tasks:\n";
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
