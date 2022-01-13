#include <iostream>
#define PI 3.14159265358979323846
#include <cmath>

using namespace std;

int main()
{
    double radius;
    cin >> radius;

    double circleArea, circlePerimeter;
    circleArea = pow(radius, 2) * PI;

    circlePerimeter = 2 * PI * radius;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << circleArea << endl;
    cout << circlePerimeter << endl;

}

