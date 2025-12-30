#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;

    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << "Result: " << power(base, exponent) << endl;

    return 0;
}

