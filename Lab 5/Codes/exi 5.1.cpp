#include <iostream>
using namespace std;

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl;

    int num;
    int sum = 0;
    int i = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Even numbers less than or equal to " << num << " are: ";

    do {
        if (i != 0 && i % 2 == 0) {
            cout << i << " ";
            sum += i;
        }
        i++;
    } while (i <= num);

    cout << endl;
    cout << "Sum of even numbers: " << sum << endl;

    return 0;
}

