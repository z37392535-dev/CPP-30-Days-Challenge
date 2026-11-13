#include <iostream>
using namespace std;

int main()
{
    double numGrade;

    cout << "Enter Your Grade:\n";
    cin >> numGrade;

    if (numGrade < 0 || numGrade > 100)
    {
        cout << "The Grade Is Not Right\n";
    }
    else if (numGrade < 60)
    {
        cout << "The Grade Is Failure\n";
    }
    else if (numGrade >= 60 && numGrade < 80)
    {
        cout << "The Grade Is Good\n";
    }
    else if (numGrade >= 80 && numGrade < 95)
    {
        cout << "The Grade Is Very Good\n";
    }
    else
    {
        cout << "The Grade Is Excellent\n";
    }

    return 0;
}