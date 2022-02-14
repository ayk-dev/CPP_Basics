// Building.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int floors, rooms;
    cin >> floors >> rooms;

    for (int fl = floors; fl >= 1; fl--) {
        for (int r = 0; r < rooms; r++) {
            string roomType;
            if (fl % 2 == 0) {
                roomType = "O";
            }
            else {
                roomType = "A";
            }
            if (fl == floors) {
                roomType = "L";
            }

            string roomNumber = roomType + to_string(fl) + to_string(r);
            cout << roomNumber << " ";
        }
        cout << "\n";
    }

    return 0;
}
