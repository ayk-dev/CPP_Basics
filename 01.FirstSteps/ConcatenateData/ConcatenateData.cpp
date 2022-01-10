#include <iostream>
using namespace std;

int main()
{
    string firstName, lastName;
    cin >> firstName >> lastName;
    int age;
    string city;
    cin >> age >> city;

    cout << "You are " << firstName << " " << lastName
        << ", a " << age << "-years old person from " << city << ".";
}