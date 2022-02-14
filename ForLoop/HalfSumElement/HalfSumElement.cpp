// HalfSumElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int max_element = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        sum += number;
        if (number >= max_element) {
            max_element = number;
        }
    }

    int sumRestOfElements = sum - max_element;
    if (sumRestOfElements == max_element) {
        cout << "Yes" << endl;
        cout << "Sum = " << max_element << endl;
    }
    else {
        cout << "No" << endl;
        cout << "Diff = " << abs(sumRestOfElements - max_element);
    }

    return 0;
}

