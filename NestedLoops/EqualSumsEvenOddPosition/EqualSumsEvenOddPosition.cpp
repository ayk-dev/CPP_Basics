// EqualSumsEvenOddPosition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int firstNum, secondNum;
    cin >> firstNum >> secondNum;

    for (int n = firstNum; n <= secondNum; n++) {
        int sumOdd;
        int sumEven;
        
        int units = n % 10;
        int tens = n / 10 % 10;
        int hundreds = n / 100 % 10;
        int thousands = n / 1000 % 10;
        int tensThousands = n / 10000 % 10;
        int hundredThousands = n / 100000 % 10;

        sumOdd = hundredThousands + thousands + tens;
        sumEven = tensThousands + hundreds + units;

        if (sumEven == sumOdd) {
            cout << n << " ";
        }
        
    }

    return 0;
}
