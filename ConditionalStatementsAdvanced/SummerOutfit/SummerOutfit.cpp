#include <iostream>

using namespace std;

int main()
{
    int temp;
    string dayTime;
    cin >> temp >> dayTime;

    string outfit, shoes;

    if (temp >= 10 && temp <= 18) {
        if (dayTime == "Morning") {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (dayTime == "Afternoon" || dayTime == "Evening") {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (temp <= 24) {
        if (dayTime == "Morning" || dayTime == "Evening") {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (dayTime == "Afternoon") {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
    }
    else if (temp >= 25) {
        if (dayTime == "Morning") {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (dayTime == "Afternoon") {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
        else if (dayTime == "Evening") {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    cout << "It's " << temp << " degrees, get your " << outfit 
        << " and " << shoes << "." << endl;

    return 0;
}

