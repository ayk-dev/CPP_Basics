#include <iostream>

using namespace std;

int main()
{
    double height, sideLength, roofHeight;
    cin >> height >> sideLength >> roofHeight;

    // green paint
    double door = 1.2 * 2;
    double frontAndBackWall = height * height * 2 - door;

    double windows = 1.5 * 1.5 * 2;
    double sideWalls = height * sideLength * 2 - windows;

    double totalArea = frontAndBackWall + sideWalls;
    double greenPaint = totalArea / 3.4;

    // red paint
    double roofArea = (height * roofHeight / 2) * 2 + sideWalls;
    double redPaint = roofArea / 4.3;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << greenPaint << endl;
    cout << redPaint << endl;

}

