#include <iostream>

using namespace std;

int main()
{
   double mackarelPrice, spratPrice, bonitoKgs, safridKgs;
   cin >> mackarelPrice >> spratPrice >> bonitoKgs >> safridKgs;
   
   int musselsKgs;
   cin >> musselsKgs;
   
   double bonitoPrice = mackarelPrice * 1.6;
   double safridPrice = spratPrice * 1.8;

   double bonitoCost = bonitoPrice * bonitoKgs;
   double safridCost = safridPrice * safridKgs;
   double musselsCost = 7.5 * musselsKgs;

   double totalCost = bonitoCost + safridCost + musselsCost;

   cout.setf(ios::fixed);
   cout.precision(2);
   cout << totalCost;

}
