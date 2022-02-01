// NewHouse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string flowers;
    int flowersCount, budget;

    cin >> flowers >> flowersCount >> budget;

    double price;
    double discountPercent = 0;
    double extraPercent = 0;

    if (flowers == "Roses") {
        price = 5.00;
        if (flowersCount > 80) discountPercent = 10;
    }
    else if (flowers == "Dahlias") {
        price = 3.80;
        if (flowersCount > 90) discountPercent = 15;
    }
    else if (flowers == "Tulips") {
        price = 2.80;
        if (flowersCount > 80) discountPercent = 15;
    }
    else if (flowers == "Narcissus") {
        price = 3.0;
        if (flowersCount < 120) extraPercent = 15;
    }
    else if (flowers == "Gladiolus") {
        price = 2.50;
        if (flowersCount < 80) extraPercent = 20;
    }

    double flowersCost = flowersCount * price;
    if (discountPercent != 0) {
        flowersCost -= flowersCost * discountPercent / 100;
    }

    if (extraPercent != 0) {
        flowersCost += flowersCost * extraPercent / 100;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= flowersCost) {
        cout << "Hey, you have a great garden with " << flowersCount << " " << flowers << " and "
            << budget - flowersCost << " leva left." << endl;
    }
    else {
        cout << "Not enough money, you need " << flowersCost - budget << " leva more." << endl;
    }

    return 0;
}
