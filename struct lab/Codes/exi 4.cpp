#include <iostream>
using namespace std;

struct Date {
    string day;
    string month;
    int year;
};

struct Student {
    string name;
    Date dob;
};

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    Student s;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter day of birth: ";
    cin >> s.dob.day;

    cout << "Enter month of birth: ";
    cin >> s.dob.month;

    cout << "Enter year of birth: ";
    cin >> s.dob.year;

    cout << endl;
    cout << "Name: " << s.name << endl;
    cout << "Date of Birth: " << s.dob.day << " " << s.dob.month << " " << s.dob.year << endl;

    return 0;
}

