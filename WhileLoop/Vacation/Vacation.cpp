// Vacation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double tripCost, money;
    cin >> tripCost >> money;

    int spendCounter = 0;
    int days = 0;

    bool isFalied = false;
    string action;
    double amount;

    while (money < tripCost) {
        cin >> action;
        cin >> amount;
        days += 1;
        if (action == "save") {
            spendCounter = 0;
            money += amount;
        }
        else {
            money -= amount;
            spendCounter += 1;
            if (money < 0) money = 0.0;
            if (spendCounter == 5) {
                isFalied = true;
                break;
            }
        }   
    }

    if (isFalied == true) {
        cout << "You can't save the money." << endl;
        cout << days << endl;
    }
    else { 
        cout << "You saved the money for " << days << " days." << endl;
    }

    return 0;
}
