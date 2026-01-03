#include <iostream>
using namespace std;

int main() {
    int startValue;
    cout << "Enter the starting value for the countdown: ";
    cin >> startValue;
    for (int i = startValue; i >= 0; i--) {
        cout << "Countdown: " << i << endl;
    }
}

