// OddEvenSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int odd_pos_sum = 0;
    int even_pos_sum = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (i % 2 == 0) {
            even_pos_sum += number;
        }
        else {
            odd_pos_sum += number;
        }
    }

    if (odd_pos_sum == even_pos_sum) {
        cout << "Yes" << endl;
        cout << "Sum = " << odd_pos_sum << endl;
    }
    else {
        cout << "No" << endl;
        cout << "Diff = " << abs(odd_pos_sum - even_pos_sum) << endl;
    }

    return 0;
}

