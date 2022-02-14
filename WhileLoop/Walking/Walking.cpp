// Walking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int totalSteps = 0;
    string input;

    while (totalSteps < 10000) {
        getline(cin >> ws, input);

        if (input == "Going home") {
            cin >> input;
            int steps = stoi(input);
            totalSteps += steps;
            break;
        }

        int steps = stoi(input);
        totalSteps += steps;
    }

    if (totalSteps >= 10000) {
        cout << "Goal reached! Good job!" << endl;
        // cout << totalSteps - 10000 << " steps over the goal!" << endl;
    } else {
        cout << 10000 - totalSteps << " more steps to reach goal." << endl;
    }

    return 0;
}
