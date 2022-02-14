// EvenPowersOf2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int num = 0; num <= n; num += 2)
    {
        cout << pow(2, num) << endl;
    }

    return 0;
}
