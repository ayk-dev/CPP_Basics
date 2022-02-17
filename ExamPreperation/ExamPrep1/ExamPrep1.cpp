// ExamPrep1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int peopleCount;
    cin >> peopleCount;
    double entryFee, chair, umbrella;
    cin >> entryFee >> chair >> umbrella;

    double entryFeeAll = peopleCount * entryFee;
    double chairCost = ceil(0.75 * peopleCount) * chair;
    
    double umbrellaCost = ceil(0.5 * peopleCount) * umbrella;

    double total = entryFeeAll + chairCost + umbrellaCost;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << total << " lv." << endl;
   
    return 0;
}
