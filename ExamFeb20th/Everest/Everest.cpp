// Everest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int everest = 8848;
    int baseCamp = 5364;

    int days = 1;
    int totalMetersAsc = baseCamp;
    bool isSucceeded = false;

    string input;
    cin >> input;

    while (input != "END") {
        string willSleep = input;
        int meters;
        cin >> meters;
        
        if (willSleep == "Yes") {
            days += 1;
            if (days > 5) {
                break;
            }
        }
        
        totalMetersAsc += meters;
        if (totalMetersAsc >= everest) {
            isSucceeded = true;
            break;
        }

        cin >> input;
    }

    if (isSucceeded == true) {
        cout << "Goal reached for " << days << " days!" << endl;
    }
    else {
        cout << "Failed!" << endl;
        cout << totalMetersAsc << endl;
    }
    
    return 0;
}

