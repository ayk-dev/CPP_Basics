// Numbers1toNStep3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int num = 1; num <= n; num += 3) 
    {
        cout << num << endl;
    }

    return 0;
}
