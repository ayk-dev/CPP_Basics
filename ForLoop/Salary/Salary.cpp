// Salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int openTabs, salary;
    cin >> openTabs >> salary;

    for (int i = 0; i < openTabs; i++) {
        string website;
        cin >> website;

        if (website == "Facebook") salary -= 150;
        else if (website == "Instagram") salary -= 100;
        else if (website == "Reddit") salary -= 50;

        if (salary <= 0) {
            cout << "You have lost your salary." << endl;
            break;
        }
    }

    if (salary > 0) cout << salary << endl;

    return 0;

}

