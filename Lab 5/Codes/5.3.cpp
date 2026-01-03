#include <iostream>
using namespace std;

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl;

    int num;
    int sum = 0;

    cout << "Enter any value: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    cout << "Sum of integers from 1 to " << num << " is: " << sum << endl;

    return 0;
}

