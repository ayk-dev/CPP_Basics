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

    double spareTime = breakTime - lunch - relax;

    double timeLeft = ceil(spareTime - episodeTime);
    if (spareTime >= episodeTime) {
        cout << "You have enough time to watch " << tvShow << 
            " and left with " << timeLeft << " minutes free time." << endl;
    }
    else {
        double timeShort = ceil(episodeTime - spareTime);
        cout << "You don't have enough time to watch " << tvShow 
            << ", you need " << timeShort << " more minutes." << endl;
    }

    return 0;

}

