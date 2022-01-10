#include <iostream>
using namespace std;

int main()
{
    double depositedSum;
    int time;
    double interestRate;

    cin >> depositedSum >> time >> interestRate;
    
    double finalSum = depositedSum + time * ((depositedSum * interestRate / 100.0) / 12);
    cout << finalSum << endl;
}

