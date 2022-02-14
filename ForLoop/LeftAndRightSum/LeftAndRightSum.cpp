// LeftAndRightSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int left_sum = 0;
    int right_sum = 0;

    for (int i = 1; i <= 2 * n; i++) {
        int number;
        cin >> number;

        if (i <= n) {
            left_sum += number;
        }
        else {
            right_sum += number;
        }
    }

    if (left_sum == right_sum) {
        cout << "Yes, sum = " << left_sum << endl;
    }
    else {
        cout << "No, diff = " << abs(left_sum - right_sum) << endl;
    }

    return 0;
}
