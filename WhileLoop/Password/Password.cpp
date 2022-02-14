// Password.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string username, password;
    cin >> username >> password;

    string input;
    cin >> input;
    while (input != password) {
        cin >> input;
    }
     
    cout << "Welcome " << username << "!";

    return 0;
}

