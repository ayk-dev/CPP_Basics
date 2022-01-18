#include <iostream>

using namespace std;

int main()
{
	int timeFirst, timeSecond, timeThird;
	cin >> timeFirst >> timeSecond >> timeThird;

	int totalSeconds = timeFirst + timeSecond + timeThird;
	
	int totalMinutes = totalSeconds / 60;

	int seconds = totalSeconds % 60;
	
	if (seconds < 10) {
		cout << totalMinutes << ":0" << seconds << endl;
	}
	else {
		cout << totalMinutes << ":" << seconds << endl;
	}
		
	return 0;
}

