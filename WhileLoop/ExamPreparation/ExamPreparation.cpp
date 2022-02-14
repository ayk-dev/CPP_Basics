// ExamPreparation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int badGrades;
    cin >> badGrades;

    string problem;
    getline(cin >> ws, problem);
    int grade;

    double totalScore = 0;
    int gradesCounter = 0;
    int badGradesReceived = 0;
    string lastProblem;

    while (problem != "Enough") {
        cin >> grade;

        if (grade <= 4) {
            badGradesReceived += 1;
            if (badGradesReceived == badGrades) {
                cout << "You need a break, " << badGradesReceived << " poor grades." << endl;
                break;
            }
        }
      
        gradesCounter += 1;
        totalScore += grade;
        lastProblem = problem;
        getline(cin >> ws, problem);
    }

    if (problem == "Enough") {
        double average = totalScore / gradesCounter;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Average score: " << average << endl;

        cout << "Number of problems: " << gradesCounter << endl;

        cout << "Last problem: " << lastProblem << endl;

    }

    return 0;
}

