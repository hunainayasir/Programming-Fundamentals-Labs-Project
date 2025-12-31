#include <iostream>
#include <conio.h>
using namespace std;

struct Student {
    int roll;
    string name;
    float gpa;
};

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter roll number: ";
        cin >> s[i].roll;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter GPA: ";
        cin >> s[i].gpa;

        cout << endl;
    }

    cout << "Student Data" << endl << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Roll Number: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "GPA: " << s[i].gpa << endl << endl;
    }

    return 0;
}

