#include <iostream>

using namespace std;

int main()
{
    double tempCelsius;
    cin >> tempCelsius;

    if (tempCelsius <= 35 && tempCelsius >= 26) {
        cout << "Hot";
    }
    else if (tempCelsius < 26 && tempCelsius >= 20.1) {
        cout << "Warm";
    }
    else if (tempCelsius <= 20 && tempCelsius >= 15) {
        cout << "Mild";
    }
    else if (tempCelsius < 15 && tempCelsius >= 12) {
        cout << "Cool";
    }
    else if (tempCelsius < 12 && tempCelsius >= 5) {
        cout << "Cold";
    } else {
        cout << "unknown";
    }
}

