// Problem3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int danceMembers;
    cin >> danceMembers;

    double points;
    cin >> points;

    string season, location;
    cin >> season >> location;

    double sumReceived = danceMembers * points;
    double expenses = 0;

    if (location == "Bulgaria") {
        if (season == "summer") {
            expenses = 0.05 * sumReceived;
        }
        else if (season == "winter") {
            expenses = 0.08 * sumReceived;
        }
    }
    else if (location == "Abroad") {
        sumReceived += 0.5 * sumReceived;
        if (season == "summer") {
            expenses = 0.1 * sumReceived;
        }
        else if (season == "winter") {
            expenses = 0.15 * sumReceived;
        }
    }

    double sumAfterExpenses = sumReceived - expenses;
    double sumCharity = 0.75 * sumAfterExpenses;

    sumAfterExpenses -= sumCharity;

    double sumPerDancer = sumAfterExpenses / danceMembers;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Charity - " << sumCharity << endl;
    cout << "Money per dancer - " << sumPerDancer << endl;

    return 0;
}