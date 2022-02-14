// CleverLily.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int age; 
    double machinePrice;
    int toyPrice;
    cin >> age >> machinePrice >> toyPrice;

    double moneySaved = 0;
    int toysCollected = 0;

    int counter = 1;
    for (int birthday = 1; birthday <= age; birthday++) {
        if (birthday % 2 == 0) {
            moneySaved += counter * 10 - 1;
            counter += 1;
        }
        else {
            toysCollected += 1;
        }
    }

    double moneyFromToys = toysCollected * toyPrice;
    moneySaved += moneyFromToys;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (moneySaved >= machinePrice) {
        cout << "Yes! " << moneySaved - machinePrice << endl;
    }
    else {
        cout << "No! " << machinePrice - moneySaved << endl;
    }

    return 0;
}

