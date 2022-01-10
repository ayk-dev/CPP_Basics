#include <iostream>
using namespace std;

int main()
{
    int pensCount, markersCount, cleanerLitres, discountPercent;
    cin >> pensCount >> markersCount >> cleanerLitres >> discountPercent;

    double pensCost = pensCount * 5.8;
    double markersCost = markersCount * 7.2;
    double cleanerCost = cleanerLitres * 1.2;

    double suppliesCost = pensCost + markersCost + cleanerCost;
    double finalCost = suppliesCost - (suppliesCost * discountPercent / 100);

    cout << finalCost << endl;

    return 0;
}
