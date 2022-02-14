// AccountBalance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    double total = 0.0;
    cout.setf(ios::fixed);
    cout.precision(2);

    while (input != "NoMoreMoney") {
        double amount = stod(input);

        if (amount < 0) {
            cout << "Invalid operation!" << endl;
            break;
        }
        cout << "Increase: " << amount << endl;
        total += amount;

        cin >> input;
    }

    cout << "Total: " << total << endl;

    return 0;
}

