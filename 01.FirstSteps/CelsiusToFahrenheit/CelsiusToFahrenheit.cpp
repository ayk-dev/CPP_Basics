#include <iostream>

using namespace std;

int main()
{
    double degreesCelsius;
    cin >> degreesCelsius;

    double degreesFahrenheit = (degreesCelsius * 9 / 5) + 32;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << degreesFahrenheit << endl;

    return 0;

}
