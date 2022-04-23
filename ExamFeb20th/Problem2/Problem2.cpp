// Problem2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int days;
    cin >> days;

    int foodLeftKgs;
    cin >> foodLeftKgs;

    double deer1FoodPerDay, deer2FoodPerDay, deer3FoodPerDay;
    cin >> deer1FoodPerDay >> deer2FoodPerDay >> deer3FoodPerDay;

    double deer1FoodNeeded = deer1FoodPerDay * days;
    double deer2FoodNeeded = deer2FoodPerDay * days;
    double deer3FoodNeeded = deer3FoodPerDay * days;

    double totalFoodNeeded = deer1FoodNeeded + deer2FoodNeeded + deer3FoodNeeded;

    if (foodLeftKgs >= totalFoodNeeded) {
        int foodLeftOver = foodLeftKgs - totalFoodNeeded;
        cout << foodLeftOver << " kilos of food left." << endl;
    }
    else {
        int foodShort = ceil(totalFoodNeeded - foodLeftKgs);
        cout << foodShort << " more kilos of food are needed." << endl;
    }

    return 0;
}