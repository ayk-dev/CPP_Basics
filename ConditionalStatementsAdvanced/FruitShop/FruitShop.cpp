#include <iostream>

using namespace std;

int main()
{
    string fruit, day;
    double quantity;
    cin >> fruit >> day >> quantity;

    double result;
    bool isValid = true;

    if (day == "Saturday" || day == "Sunday") {
        if (fruit == "banana") {
            result = quantity * 2.7;
        } else if (fruit == "apple") {
            result = quantity * 1.25;
        } else if (fruit == "orange") {
            result = quantity * 0.9;
        } else if (fruit == "grapefruit") {
            result = quantity * 1.6;
        } else if (fruit == "banana") {
            result = quantity * 2.7;
        } else if (fruit == "kiwi") {
            result = quantity * 3.0;
        } else if (fruit == "pineapple") {
            result = quantity * 5.6;
        } else if (fruit == "grapes") {
            result = quantity * 4.2;
        }
        else {
            cout << "error" << endl;
            isValid = false;
        }
    }
    else if (day == "Monday" || day == "Tuesday" || day == "Wednesday"
        || day == "Thursday" || day == "Friday") {
        if (fruit == "banana") {
            result = quantity * 2.5;
        }
        else if (fruit == "apple") {
            result = quantity * 1.20;
        }
        else if (fruit == "orange") {
            result = quantity * 0.85;
        }
        else if (fruit == "grapefruit") {
            result = quantity * 1.45;
        }
        else if (fruit == "kiwi") {
            result = quantity * 2.70;
        }
        else if (fruit == "pineapple") {
            result = quantity * 5.5;
        }
        else if (fruit == "grapes") {
            result = quantity * 3.85;
        }
        else {
            cout << "error" << endl;
            isValid = false;
        }
    }
    else {
        cout << "error" << endl;
        isValid = false;
    }

    if (isValid) {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << result << endl;
    }

    return 0;
}

