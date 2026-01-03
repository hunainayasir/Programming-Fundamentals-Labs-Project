#include <iostream>
using namespace std;

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl;

    int sum = 0;

    for (int i = 100; i >= 1; i--) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "Sum of all even numbers from 100 to 1 is: " << sum << endl;

    return 0;
}

