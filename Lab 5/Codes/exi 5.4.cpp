#include <iostream>
using namespace std;

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl;

    int age;

    do {
        cout << "Enter your age: ";
        cin >> age;
    } while (age < 1 || age > 120);

    cout << "Your age is: " << age << endl;

    return 0;
}

