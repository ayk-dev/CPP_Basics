// NumbersNto1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int n = num; n >= 1; n--)
	{
		cout << n << endl;
	}

	return 0;
}

