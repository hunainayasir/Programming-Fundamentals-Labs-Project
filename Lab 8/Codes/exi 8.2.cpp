#include <iostream>
using namespace std;

void generateNumbers(int n)
{
    if (n == 0)
        return;

    generateNumbers(n - 1);
    cout << n << " ";
}

int main()
{
    int n;

    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    cout << "Enter a number: ";
    cin >> n;

    generateNumbers(n);

    return 0;
}

