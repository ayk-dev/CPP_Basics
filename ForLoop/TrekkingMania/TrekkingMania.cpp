// TrekkingMania.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int numberOfGroups;
    cin >> numberOfGroups;

    double totalPeople = 0;

    double groupMusala = 0;
    double groupMonblan = 0;
    double groupKilimandjaro = 0;
    double groupK2 = 0;
    double groupEverest = 0;

    for (int i = 0; i < numberOfGroups; i++) {
        int peopleInGroup;
        cin >> peopleInGroup;

        if (peopleInGroup <= 5) groupMusala += peopleInGroup;
        else if (peopleInGroup <= 12) groupMonblan += peopleInGroup;
        else if (peopleInGroup <= 25) groupKilimandjaro += peopleInGroup;
        else if (peopleInGroup <= 40) groupK2 += peopleInGroup;
        else groupEverest += peopleInGroup;

        totalPeople += peopleInGroup;
    }

    double musalaPercent = groupMusala / totalPeople * 100.00;
    double monblanPercent = groupMonblan / totalPeople * 100.00;
    double kilimandjaroPercent = groupKilimandjaro / totalPeople * 100.00;
    double k2Percent = groupK2 / totalPeople * 100.00;
    double everestPercent = groupEverest / totalPeople * 100.00;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << musalaPercent << "%" << endl;
    cout << monblanPercent << "%" << endl;
    cout << kilimandjaroPercent << "%" << endl;
    cout << k2Percent << "%" << endl;
    cout << everestPercent << "%" << endl;

    return 0;
}
