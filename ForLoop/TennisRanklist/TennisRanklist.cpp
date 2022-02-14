// TennisRanklist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int tournaments;
    cin >> tournaments;

    int pointsStart;
    cin >> pointsStart;

    double won = 0.0;
    int points = 0;
    for (int i = 0; i < tournaments; i++) {
        string stage;
        cin >> stage;

        if (stage == "W") {
            points += 2000;
            won += 1.0;
        }
        else if (stage == "F") points += 1200;
        else if (stage == "SF") points += 720;
    }

    cout << "Final points: " << pointsStart + points << endl;

    int averagePoints = points / tournaments;
    cout << "Average points: " << averagePoints << endl;

    double percentWon = won / tournaments * 100.00;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << percentWon << "%" << endl;

    return 0;
}

