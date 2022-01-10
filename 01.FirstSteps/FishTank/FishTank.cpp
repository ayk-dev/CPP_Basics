#include <iostream>

using namespace std;

int main()
{
    int heigth, width, length;
    cin >> heigth >> width >> length;

    double percentage;
    cin >> percentage;

    double volumeInLitres = heigth * width * length / 1000.0;
    cout << volumeInLitres << endl;

    double usedSpace = volumeInLitres * percentage / 100;
    cout << usedSpace << endl;

    double waterNeeded = volumeInLitres - usedSpace;
    cout << waterNeeded << endl;

    return 0;
}

