#include <iostream>

using namespace std;

int main()
{
    int points;
    cin >> points;

    double bonus;
    if (points <= 100) {
        bonus = 5;
    }
    else if (points <= 1000) {
        bonus = points * 0.2;
    }
    else if (points > 1000) {
        bonus = points * 0.1;
    }

    
    if (points % 2 == 0) {
        bonus += 1;
    }
    if (points % 10 == 5) {
        bonus += 2;
    }

    cout << bonus << endl;
    cout << points + bonus << endl;

    return 0;
}
