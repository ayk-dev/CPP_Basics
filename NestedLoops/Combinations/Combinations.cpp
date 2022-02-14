// Combinations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int counter = 0;

    for (int x = 0; x <= number; x++) {
        for (int y = 0; y <= number; y++) {
            for (int z = 0; z <= number; z++) {
                if (x + y + z == number) {
                    counter += 1;
                }
            }
        }
    }

    cout << counter << endl;

    return 0;
}

