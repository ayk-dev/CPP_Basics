#include <iostream>
using namespace std;

int main()
{
    int pageCount, pagesPerHour, days;
    cin >> pageCount >> pagesPerHour >> days;

    int totalHours = pageCount / pagesPerHour;
    int hoursPerDay = totalHours / days;

    cout << hoursPerDay;

    return 0;
}

