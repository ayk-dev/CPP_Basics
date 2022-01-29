#include <iostream>

using namespace std;

int main()
{
    string day;
    cin >> day;

    int ticketPrice;

    if (day == "Wednesday" || day == "Thursday") {
        ticketPrice = 14;
    }
    else if (day == "Sunday" || day == "Saturday") {
        ticketPrice = 16;
    }
    else {
        ticketPrice = 12;
    }

    cout << ticketPrice;

    return 0;
}
