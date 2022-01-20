#include <iostream>

using namespace std;

int main()
{
    double budget;
    cin >> budget;

    int videoCards, processors, ramMemory;
    cin >> videoCards >> processors >> ramMemory;

    double videoCardsCost = videoCards * 250.0;
    double processorsCost = processors * 0.35 * videoCardsCost;
    double ramMemoryCost = ramMemory * 0.1 * videoCardsCost;

    double totalCost = videoCardsCost + processorsCost + ramMemoryCost;

    if (videoCards > processors) {
        totalCost -= 0.15 * totalCost;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= totalCost) {
        double moneyLeft = budget - totalCost;
        cout << "You have " << moneyLeft << " leva left!" << endl;
    }
    else {
        double moneyShort = totalCost - budget;
        cout << "Not enough money! You need " << moneyShort << " leva more!" << endl;
    }

    return 0;
}
