#include <iostream>

using namespace std;

int main()
{
    double delivery = 2.5;

    int chickenMenu, fishMenu, vegMenu;
    cin >> chickenMenu >> fishMenu >> vegMenu;

    double chickenCost = chickenMenu * 10.35;
    double fishCost = fishMenu * 12.4;
    double vegCost = vegMenu * 8.15;

    double totalCost = chickenCost + fishCost + vegCost;
    double dessertCost = totalCost * 0.2;

    double finalOrder = totalCost + dessertCost + delivery;
    cout << finalOrder << endl;

    return 0;
}
