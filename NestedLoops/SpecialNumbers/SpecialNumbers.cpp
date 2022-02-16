// SpecialNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1111; i <= 9999; i++) {
        int units, tens, hundreds, thousands;
        units = i % 10;
        tens = i / 10 % 10;
        hundreds = i / 100 % 10;
        thousands = i / 1000 % 10;

        if (units == 0 || tens == 0 || hundreds == 0) {
            continue;
        }

        if (n % units == 0 && n % tens == 0 && n % hundreds == 0 && n % thousands == 0) {
            cout << i << " ";
        }
    }

    return 0;
}

