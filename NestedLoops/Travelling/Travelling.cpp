// Travelling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string input;
    double minBudget;
    
    cin >> input;

    while (input != "End") {
        string destination = input;
        cin >> minBudget;

        double moneySaved = 0;

        double amount;
        while (moneySaved < minBudget) {
            cin >> amount;
            moneySaved += amount;
        }
        cout << "Going to " << destination << "!" << endl;

        cin >> input;
    }

    return 0;
}
