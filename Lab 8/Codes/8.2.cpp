#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;

    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    cout << "Enter the first value: ";
    cin >> x;

    cout << "Enter the second value: ";
    cin >> y;

    swap(x, y);

    cout << "The two numbers have been swapped." << endl;
    cout << "The first number is now " << x << "." << endl;
    cout << "The second number is now " << y << "." << endl;

    return 0;
}

