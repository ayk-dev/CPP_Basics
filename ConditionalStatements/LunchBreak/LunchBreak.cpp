#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    string tvShow;
    getline(cin, tvShow);

    int episodeTime, breakTime;
    cin >> episodeTime >> breakTime;
    
    double lunch, relax;
    lunch = breakTime * 0.125;
    relax = breakTime * 0.25;

    double spareTime = floor(breakTime - lunch - relax);

    int timeLeft = abs(spareTime - episodeTime);
    if (spareTime >= episodeTime) {
        cout << "You have enough time to watch " << tvShow << 
            " and left with " << timeLeft << " minutes free time." << endl;
    }
    else {
        cout << "You don't have enough time to watch " << tvShow 
            << ", you need " << timeLeft << " more minutes." << endl;
    }

    return 0;

}

