// Problem1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double cpuPriceUsd, videoCardPriceUsd, ramPriceUsd;
    cin >> cpuPriceUsd >> videoCardPriceUsd >> ramPriceUsd;
    int ramCount;
    cin >> ramCount;

    double discount;
    cin >> discount;

    double dollarLev = 1.57;

    double cpuLeva = cpuPriceUsd * dollarLev;
    double ramLeva = ramPriceUsd * dollarLev * ramCount;
    double videoCardLeva = videoCardPriceUsd * dollarLev;

    cpuLeva -= cpuLeva * discount;
    videoCardLeva -= videoCardLeva * discount;

    double moneyNeeded = cpuLeva + ramLeva + videoCardLeva;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Money needed - " << moneyNeeded << " leva." << endl;

    return 0;
}

