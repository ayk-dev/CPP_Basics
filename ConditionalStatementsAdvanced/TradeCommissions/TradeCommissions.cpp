#include <iostream>

using namespace std;

int main()
{
    string city;
    double sales;
    cin >> city >> sales;

    double commision = 0;

    if (sales >= 0 && sales <= 500) {
        if (city == "Sofia") {
            commision = sales * 5 / 100;
        } else if (city == "Varna") {
            commision = sales * 4.5 / 100;
        } else if (city == "Plovdiv") {
            commision = sales * 5.5 / 100;
        }
    }
    else if (sales <= 1000) {
        if (city == "Sofia") {
            commision = sales * 7 / 100;
        }
        else if (city == "Varna") {
            commision = sales * 7.5 / 100;
        }
        else if (city == "Plovdiv") {
            commision = sales * 8 / 100;
        }
    }
    else if (sales <= 10000) {
        if (city == "Sofia") {
            commision = sales *  8 / 100;
        }
        else if (city == "Varna") {
            commision = sales * 10 / 100;
        }
        else if (city == "Plovdiv") {
            commision = sales * 12 / 100;
        }
    }
    else if (sales > 10000) {
        if (city == "Sofia") {
            commision = sales * 12 / 100;
        }
        else if (city == "Varna") {
            commision = sales * 13 / 100;
        }
        else if (city == "Plovdiv") {
            commision = sales * 14.5 / 100;
        }
    }
    
    if (commision > 0) {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << commision << endl;
    }
    else {
        cout << "error" << endl;
    }

    return 0;
}
