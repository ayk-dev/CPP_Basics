// Oscars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string actor;
    getline(cin >> ws, actor);

    double points;
    cin >> points;

    int numberOfJudges;
    cin >> numberOfJudges;

    bool isEnough = false;

    for (int i = 0; i < numberOfJudges; i++) {
        string judgeName;
        getline(cin >> ws, judgeName);

        double pointsGiven;
        cin >> pointsGiven;

        double pointsReceived = judgeName.length() * pointsGiven / 2.00;
        points += pointsReceived;

        if (points >= 1250.5) {
            isEnough = true;
            break;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(1);

    if (isEnough == false) {
        cout << "Sorry, " << actor << " you need " << 1250.5 - points << " more!" << endl;
    }
    else {
        cout << "Congratulations, " << actor << " got a nominee for leading role with " << points << "!" << endl;
    }

    return 0;
}

