#include <iostream>
using namespace std;

int main()
{
    int x, y;
    
    cout << "Enter first number (x): ";
    cin >> x;
    cout << "Enter second number (y): ";
    cin >> y;

    int eq = x == y;
    int greater = x > y;
    int less = x < y;
    int gequal = x >= y;
    int lequal = x <= y;

    cout << "x == y : " << eq << endl;
    cout << "x > y  : " << greater << endl;
    cout << "x < y  : " << less << endl;
    cout << "x >= y : " << gequal << endl;
    cout << "x <= y : " << lequal << endl;

    return 0;
}


