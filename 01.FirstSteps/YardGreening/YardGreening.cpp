#include <iostream>
using namespace std;

int main()
{
    double priceSqrm = 7.61;
    int discountPercent = 18;

    double area;
    cin >> area;

    double cost = priceSqrm * area;
    double discount = cost * discountPercent / 100;

    double finalPrice = cost - discount;

    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;

}
