#include <iostream>
using namespace std;

int main()
{
    int time = 3;
    string architect;
    cin >> architect;

    int projectsCount;
    cin >> projectsCount;

    int totalHours;
    totalHours = time * projectsCount;

    cout << "The architect " << architect << " will need " << totalHours << " hours to complete "
        << projectsCount << " project/s.";

}
