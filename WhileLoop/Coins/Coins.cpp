// Coins.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double change;
    cin >> change;

    int coins = change * 100;
    // 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01
    // 200, 100, 50, 20, 10, 5, 2, 1

    int counter = 0;

    while (coins > 0) {
        if (coins >= 200) {
            coins -= 200;
            counter++;
        }
        else if (coins >= 100) {
            coins -= 100;
            counter++;
        }
        else if (coins >= 50) {
            coins -= 50;
            counter++;
        }
        else if (coins >= 20) {
            coins -= 20;
            counter++;
        }
        else if (coins >= 10) {
            coins -= 10;
            counter++;
        }
        else if (coins >= 5) {
            coins -= 5;
            counter++;
        }
        else if (coins >= 2) {
            coins -= 2;
            counter++;
        }
        else if (coins >= 1) {
            coins -= 1;
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}

