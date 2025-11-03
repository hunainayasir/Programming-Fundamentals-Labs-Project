#include <iostream>
using namespace std;

int main() {
    int n, h, t, o;

    // taking a three-digit number from user
    cout << "Enter a three-digit number: ";
    cin >> n;

    o = n % 10;         // ones place
    t = (n / 10) % 10;  // tens place
    h = (n / 100) % 10; // hundreds place

    cout << "Hundreds: " << h << endl;
    cout << "Tens: " << t << endl;
    cout << "Ones: " << o << endl;

    return 0;
}

