#include <iostream>

using namespace std;

int main()
{
    string movie_type;
    int rows, cols;
    cin >> movie_type >> rows >> cols;

    double ticket;

    if (movie_type == "Premiere") {
        ticket = 12.00;
    }
    else if (movie_type == "Normal") {
        ticket = 7.50;
    }
    else if (movie_type == "Discount") {
        ticket = 5.00;
    }

    double movie_income = rows * cols * ticket;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << movie_income << " leva" << endl;

    return 0;
}

