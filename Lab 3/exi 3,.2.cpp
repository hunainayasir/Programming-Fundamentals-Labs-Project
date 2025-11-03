#include <iostream>
using namespace std;

int main() {
    int a, b;

    // taking input from user
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // calculating both expressions
    int expr1 = a * a + 2 * a * b + b * b; 
    int expr2 = a * a - 2 * a * b + b * b;

    // showing results
    cout << "(a + b)^2 = " << expr1 << endl;
    cout << "(a - b)^2 = " << expr2 << endl;

    return 0;
}

