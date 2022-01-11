#include <iostream>

using namespace std;

int main()
{
    double hInMeters, wInMeters;
    cin >> hInMeters >> wInMeters;

    double availableWidth = wInMeters * 100 - 100;
    

    int tablesPerRow = availableWidth / 70;
   
    int tablesPerCol = hInMeters * 100 / 120;
    
    int numberOfSeats = tablesPerCol * tablesPerRow - 3;
    cout << numberOfSeats << endl;


}
