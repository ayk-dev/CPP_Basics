// Cake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cakeWidth, cakeLength;
    cin >> cakeWidth >> cakeLength;

    int cakeSize = cakeLength * cakeWidth;

    while (cakeSize > 0) {
        string input;
        cin >> input;

        if (input == "STOP") {
            break;
        }

        int pieces = stoi(input);
        cakeSize -= pieces;
    }

    if (cakeSize < 0) {
        cout << "No more cake left! You need " << abs(cakeSize) << " pieces more." << endl;
    }
    else {
        cout << cakeSize << " pieces are left." << endl;
    }
}

