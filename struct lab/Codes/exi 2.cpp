#include <iostream>
using namespace std;

struct Employee {
    string name;
    float monthlySalary;
};

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    Employee e;

    cout << "Enter name: ";
    cin >> e.name;

    cout << "Enter monthly salary: ";
    cin >> e.monthlySalary;

    float annualSalary = e.monthlySalary * 12;

    cout << "Annual Salary: " << annualSalary << endl;

    return 0;
}

