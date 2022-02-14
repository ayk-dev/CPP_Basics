// MaxNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main()
{
    int maxNumber = INT_MIN;

    string input;
    cin >> input;

    while (input != "Stop") {
        int number = stoi(input);
        if (number >= maxNumber) maxNumber = number;

        cin >> input;
    }

    cout << maxNumber;
}
