
// Problem6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isFound = false;

    for (int a = 1; a <= 9; a++) {
        for (int b = 9; b >= a; b--) { 
            for (int c = 0; c <= 9; c++) {
                for (int d = 9; d >= c; d--) {
                    int sum = a + b + c + d;
                    int product = a * b * c * d;
                    if (sum == 0 || product == 0) {
                        continue;
                    }
                    if (sum == product && n % 10 == 5) {
                        cout << a << b << c << d << endl;
                        isFound = true;
                        break;
                    }
                    if (int(product / sum) == 3 && n % 3 == 0) {
                        cout << d << c << b << a << endl;
                        isFound = true;
                        break;
                    }

                }
                if (isFound == true) {
                    break;
                }
            }
            if (isFound == true) {
                break;
            }
         }
        if (isFound == true) {
            break;
        }
    }

    if (isFound == false) {
        cout << "Nothing found" << endl;
    }
    return 0;
}