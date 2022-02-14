// Histogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double range1 = 0;
    double range2 = 0;
    double range3 = 0;
    double range4 = 0;
    double range5 = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number < 200) {
            range1 += 1;
        }
        else if (number >= 200 && number <= 399) {
            range2 += 1;
        }
        else if (number >= 400 && number <= 599) {
            range3 += 1;
        }
        else if (number >= 600 && number <= 799) {
            range4 += 1;
        }
        else {
            range5 += 1;
        }
    }

    double p1 = range1 / n * 100;
    double p2 = range2 / n * 100;
    double p3 = range3 / n * 100;
    double p4 = range4 / n * 100;
    double p5 = range5 / n * 100;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;
    
}

