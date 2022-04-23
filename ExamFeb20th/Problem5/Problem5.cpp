// Problem5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int baseCamp = 5364;
    int everest = 8848;

    int totalMetersAsc = baseCamp;
    bool isSucceeded = false;
    int days = 1;

    string input;
    cin >> input;
   
    while (input != "END") {
        string willSleep = input;
        int meters;
        cin >> meters;

        if (willSleep == "Yes") {
            days += 1;
        }

        totalMetersAsc += meters;
        if (totalMetersAsc >= everest) {
            isSucceeded = true;
            break;
        }

        if (days == 5) {
            break;
        }

        cin >> input;
    }

    if (isSucceeded == true) {
        cout << "success" << endl;
    } 
    else {
        cout << "fail" << endl;
    }

    return 0;
}