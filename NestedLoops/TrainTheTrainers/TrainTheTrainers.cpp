// TrainTheTrainers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int judges;
    cin >> judges;

    string input;
    getline(cin >> ws, input);

    double totalScore = 0;
    int counter = 0;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (input != "Finish") {
        string presentation = input;
        double presentationTotal = 0;

        for (int i = 0; i < judges; i++) {
            double score;
            cin >> score;
            presentationTotal += score;
        }

        double averageScore = presentationTotal / judges;

        cout << presentation << " - " << averageScore << "." << endl;

        totalScore += averageScore;
        counter++;
        getline(cin >> ws, input);
    }

    double final = totalScore / counter;

    cout << "Student's final assessment is " << final << "." << endl;

    return 0;
}
