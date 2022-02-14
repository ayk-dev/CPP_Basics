// SumOfTwoNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int x, y, magicNumber;
    cin >> x >> y >> magicNumber;

    int counter = 0;
    bool isFound = false;
    int num1;
    int num2;

    for (int a = x; a <= y; a++) {
        for (int b = x; b <= y; b++) {
            counter += 1;
            if (a + b == magicNumber) {
                num1 = a;
                num2 = b;
                isFound = true;
                break;
            }
        }

        if (isFound == true) {
            break;
        }
    }

    if (isFound == true) {
        cout << "Combination N:" << counter << " (" << num1 << " + " << num2 << " = " << magicNumber << ")" << endl;
    }
    else {
        cout << counter << " combinations - neither equals " << magicNumber << endl;
    }

    return 0;
}

