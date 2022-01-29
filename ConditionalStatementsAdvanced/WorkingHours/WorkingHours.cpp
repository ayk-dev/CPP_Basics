#include <iostream>

using namespace std;

int main()
{
	int hour;
   string day;
   cin >> hour >> day;

   string result;

   if (day != "Sunday" && hour >= 10 && hour <= 18) {
	   result = "open";
   }
   else {
	   result = "closed";
   }

   cout << result;

   return 0;
}

