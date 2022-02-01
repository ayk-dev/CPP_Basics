// FishingBoat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int budget;
    string season;
    int fishermenCount;

    cin >> budget >> season >> fishermenCount;

    int boatRent;

    if (season == "Spring") boatRent = 3000;
    else if (season == "Summer" || season == "Autumn") boatRent = 4200;
    else if (season == "Winter") boatRent = 2600;

    double finalPrice = 0.0;
    if (fishermenCount <= 6) {
        finalPrice = boatRent - 0.1 * boatRent;
    }
    else if (fishermenCount <= 11) {
        finalPrice = boatRent - 0.15 * boatRent;
    }
    else if (fishermenCount > 12) {
        finalPrice = boatRent - 0.25 * boatRent;
    }

    if (fishermenCount % 2 == 0 && season != "Autumn") {
        finalPrice -= 0.05 * finalPrice;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget >= finalPrice) {
        cout << "Yes! You have " << budget - finalPrice << " leva left.";
    }
    else {
        cout << "Not enough money! You need " << finalPrice - budget << " leva.";
    }

    return 0;

}

