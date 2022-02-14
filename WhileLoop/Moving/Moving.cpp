// Moving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int width, len, height;
    cin >> width >> len >> height;

    int freeSpace = width * len * height;

    while (freeSpace > 0) {
        string input;
        cin >> input;

        if (input == "Done") {
            break;
        }

        int boxes = stoi(input);
        freeSpace -= boxes;
    }

    if (freeSpace < 0) {
        cout << "No more free space! You need " << abs(freeSpace) << " Cubic meters more." << endl;
    }
    else {
        cout << freeSpace << " Cubic meters left." << endl;
    }

    return 0;
}
