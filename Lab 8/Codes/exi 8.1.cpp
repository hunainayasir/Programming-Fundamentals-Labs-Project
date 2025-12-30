#include <iostream>
using namespace std;

int absolute(int x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

float absolute(float x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

int main()
{
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    int a = -5;
    float b = -7.5;

    cout << "Absolute value of integer is: " << absolute(a) << endl;
    cout << "Absolute value of float is: " << absolute(b) << endl;

    return 0;
}

