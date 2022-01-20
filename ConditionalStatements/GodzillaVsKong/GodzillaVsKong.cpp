#include <iostream>

using namespace std;

int main()
{
    double budget;
    cin >> budget;
    int extrasCount;
    cin >> extrasCount;
    double costumsPrice;
    cin >> costumsPrice;

    double extrasCostumsCost = extrasCount * costumsPrice;
    if (extrasCount > 150) {
        extrasCostumsCost -= 0.1 * extrasCostumsCost;
    }

    double decorCost = 0.1 * budget;
    double totalExpenses = extrasCostumsCost + decorCost;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalExpenses > budget) {
        double moneyShort = totalExpenses - budget;
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << moneyShort << " leva more." << endl;
    }
    else {
        double moneyLeft = budget - totalExpenses;
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << moneyLeft << " leva left." << endl;
    }
}

