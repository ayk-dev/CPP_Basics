// CharacterSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    getline(cin, text);

    for (int i = 0; i < text.length(); i++)
    {
        cout << text[i] << endl;
    }

    return 0;
}
