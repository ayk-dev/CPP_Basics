// Journey.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double budget;
    string season;

    cin >> budget >> season;

    string destination, accomodation;
    double expenses;
    if (budget <= 100.0) {
        destination = "Bulgaria";
        if (season == "winter") {
            accomodation = "Hotel";
            expenses = 0.7 * budget;
        }
        else if (season == "summer") {
            accomodation = "Camp";
            expenses = 0.3 * budget;
        }
    }
    else if (budget <= 1000) {
        destination = "Balkans";
        if (season == "summer") {
            accomodation = "Camp";
            expenses = 0.4 * budget;
        }
        else if (season == "winter") {
            accomodation = "Hotel";
            expenses = 0.8 * budget;
        }
    }
    else if (budget > 1000) {
        destination = "Europe";
        accomodation == "Hotel";
        expenses = 0.9 * budget;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Somewhere in " << destination << endl;
    cout << accomodation << " - " << expenses << endl;

    return 0;
}

