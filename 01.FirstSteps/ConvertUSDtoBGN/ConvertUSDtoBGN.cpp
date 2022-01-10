#include <iostream>
using namespace std;

int main()
{
	double exchangeRate = 1.79549;

	double usd;
	cin >> usd;

	double bgn = usd * exchangeRate;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << bgn << endl;

	return 0;

}
