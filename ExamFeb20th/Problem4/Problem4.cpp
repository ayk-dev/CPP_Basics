// Problem4.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

using namespace std;

int main()
{
    int days;
    cin >> days;

    double totalLiters = 0;
    double totalDegrees = 0;

    for (int i = 0; i < days; i++) {
        double liters, degrees;
        cin >> liters >> degrees;

        totalLiters += liters;
        totalDegrees += liters * degrees;
    }

    double averageDegrees = totalDegrees / totalLiters;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Liter: " << totalLiters << endl;
    cout << "Degrees: " << averageDegrees << endl;
    if (averageDegrees < 38) {
        cout << "Not good, you should baking!" << endl;
    }
    else if (averageDegrees <= 42) {
        cout << "Super!" << endl;
    }
    else {
        cout << "Dilution with distilled water!" << endl;
    }

    return 0;
}