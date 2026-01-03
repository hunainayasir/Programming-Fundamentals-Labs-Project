#include <iostream>
using namespace std;

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl;

    int num;
    int factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "The Factorial of " << num << " is: " << factorial << endl;

    factorial = 1;
    int i = 1;

    while (i <= num) {
        factorial *= i;
        i++;
    }

    cout << "The Factorial of " << num << " is: " << factorial << endl;

    return 0;
}

