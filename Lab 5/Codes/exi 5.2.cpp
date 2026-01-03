#include <iostream>
using namespace std;

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl;

    int num;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = num; i >= 1; i--) {
        factorial *= i;
    }

    cout << "The Factorial of " << num << " is: " << factorial << endl;

    return 0;
}

