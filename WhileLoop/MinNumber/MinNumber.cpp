// MinNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
#include <string>

using namespace std;
int minNumber = INT_MAX;

int main()
{
    string input;
    cin >> input;

    while (input != "Stop") {
        int num = stoi(input);
        if (num <= minNumber) {
            minNumber = num;
        }

        cin >> input;
    }

    cout << minNumber << endl;

    return 0;
}

