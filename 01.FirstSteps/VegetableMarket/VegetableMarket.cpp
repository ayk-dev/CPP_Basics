#include <iostream>

using namespace std;

int main()
{
    double vegetablesPrice, fruitPrice;
    cin >> vegetablesPrice >> fruitPrice;

    int vegetablesKg, fruitKg;
    cin >> vegetablesKg >> fruitKg;

    double totalLeva = vegetablesPrice * vegetablesKg + fruitPrice * fruitKg;
    double totalEuro = totalLeva / 1.94;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalEuro << endl;

    return 0;
}
