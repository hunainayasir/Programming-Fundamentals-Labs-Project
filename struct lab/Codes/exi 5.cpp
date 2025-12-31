#include <iostream>
using namespace std;

struct Student {
    int marks[3];
};

void calculate(Student s) {
    int total = s.marks[0] + s.marks[1] + s.marks[2];
    float average = total / 3.0;

    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
}

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    Student s;

    for (int i = 0; i < 3; i++) {
        cout << "Enter marks: ";
        cin >> s.marks[i];
    }

    calculate(s);

    return 0;
}

