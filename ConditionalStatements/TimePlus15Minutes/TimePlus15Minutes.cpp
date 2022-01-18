#include <iostream>

using namespace std;

int main()
{
    int hour, minutes;
    cin >> hour >> minutes;

    int timeInMinutes = hour * 60 + minutes;

    int timeAfter15Minutes = timeInMinutes + 15;

    int newHour = timeAfter15Minutes / 60 % 24;
    int newMinutes = timeAfter15Minutes % 60;

    if (newMinutes < 10) {
        cout << newHour << ":0" << newMinutes << endl;
    }
    else {
        cout << newHour << ":" << newMinutes << endl;
    }

    return 0;
}
