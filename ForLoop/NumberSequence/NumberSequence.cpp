// NumberSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int min_number = 99999999;
    int max_number = -99999999;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number > max_number) {
            max_number = number;
        }

        if (number < min_number) {
            min_number = number;
        }
    }

    cout << "Max number: " << max_number << endl;
    cout << "Min number: " << min_number << endl;

    return 0;
}

