// CinemaTickets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin >> ws, input);

    double standardTotal = 0;
    double studentTotal = 0;
    double kidTotal = 0;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (input != "Finish") {
        string movie = input;
        int openSeats;
        cin >> openSeats;
        double initialOpenSeats = openSeats;

        double standard = 0;
        double student = 0;
        double kid = 0;

        string type;
        cin >> type;

        while (type != "End") {
            if (type == "standard") {
                standard += 1;
            }
            else if (type == "student") {
                student += 1;
            }
            else if (type == "kid") {
                kid += 1;
            }

            openSeats -= 1;
            if (openSeats == 0) {
                break;
            }
            cin >> type;
        }

        standardTotal += standard;
        studentTotal += student;
        kidTotal += kid;

        double moviePercentFull = (standard + student + kid) / initialOpenSeats * 100.00;
        cout << movie << " - " << moviePercentFull << "% full." << endl;

        getline(cin >> ws, input);
    }

    double totalTickets = standardTotal + studentTotal + kidTotal;
    cout.precision(0);
    cout << "Total tickets: " << totalTickets << endl;

    double studentPercent = studentTotal / totalTickets * 100.00;
    double standardPercent = standardTotal / totalTickets * 100.00;
    double kidPercent = kidTotal / totalTickets * 100.00;

    cout.precision(2);
    cout << studentPercent << "% student tickets." << endl;
    cout << standardPercent << "% standard tickets." << endl;
    cout << kidPercent << "% kids tickets." << endl;

    return 0;
}

