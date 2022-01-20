#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double currentRecord, distance, speed;
    cin >> currentRecord >> distance >> speed;

    double seconds = distance * speed;

    double resistance, extraSeconds;
    
    resistance = floor(distance / 15);
    extraSeconds = resistance * 12.5;

    cout.setf(ios::fixed);
    cout.precision(2);

    double totalTime = seconds + extraSeconds;
    if (totalTime >= currentRecord) {
        double secondsOver = totalTime - currentRecord;
        cout << "No, he failed! He was " << secondsOver << " seconds slower." << endl;
    }
    else {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    }

    return 0;
}

