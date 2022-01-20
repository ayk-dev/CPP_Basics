#include <iostream>

using namespace std;

int main()
{
    double vacationCost;
    cin >> vacationCost;

    int puzzelsCount, dollsCount, teddyBearsCount, minionsCount, trucksCount;
    cin >> puzzelsCount >> dollsCount >> teddyBearsCount >> minionsCount >> trucksCount;

    double order = puzzelsCount * 2.6 + dollsCount * 3.0 + teddyBearsCount * 4.1 + minionsCount * 8.2 + trucksCount * 2.0;

    int totalToysCount = puzzelsCount + dollsCount + teddyBearsCount + minionsCount + trucksCount;
    if (totalToysCount >= 50) {
        order -= 0.25 * order;
    }

    double rentShop = 0.1 * order;

    cout.setf(ios::fixed);
    cout.precision(2);

    double profit = order - rentShop;
    if (profit >= vacationCost) {
        double moneyLeft = profit - vacationCost;
        cout << "Yes! " << moneyLeft << " lv left." << endl;
    }
    else {
        double moneyShort = vacationCost - profit;
        cout << "Not enough money! " << moneyShort << " lv needed." << endl;
    }

    return 0;

}
