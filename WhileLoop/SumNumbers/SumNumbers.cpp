// SumNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int sum = 0;
    while (sum < number) {
        int n;
        cin >> n;

        sum += n;
    }

    cout << sum;

    return 0;
}

