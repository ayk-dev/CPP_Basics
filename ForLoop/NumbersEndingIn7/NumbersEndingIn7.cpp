// NumbersEndingIn7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    for (int n = 1; n <= 1000; n++) {
        if (n % 10 == 7) {
            cout << n << endl;
        }
    }

    return 0;
}

