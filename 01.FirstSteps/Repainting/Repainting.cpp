#include <iostream>
using namespace std;

int main()
{
    int plastic, paint, thinner, totalHours;
    cin >> plastic >> paint >> thinner >> totalHours;

    double plasticCost = (plastic + 2) * 1.5;

    double paintCost = paint * 1.1 * 14.5;
    
    double thinnerCost = thinner * 5;
    

    double totalMaterialsCost = plasticCost + paintCost + thinnerCost + 0.4;
    

    double workersRate = 0.3 * totalMaterialsCost * totalHours;
    

    double totalCost = totalMaterialsCost + workersRate;
    cout << totalCost << endl;

    return 0;

}
