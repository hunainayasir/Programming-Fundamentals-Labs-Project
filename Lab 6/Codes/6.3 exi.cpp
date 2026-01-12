#include <iostream>
using namespace std;

int main ()
{
	cout << "Hunaina Yasir" << "    " << "073";
    cout << "\n";

    int N;
    int sum = 0;

    cout << "\nEnter a number: ";
    cin >> N;

    cout << "Sum = ";

    for (int i = 1; i <= N; i++) 
    {
        double power = 1.0;
        for (int j = 1; j <= i; j++) 
        {
            power *= i;
        }
        sum += power;

        cout << i << "^" << i;
        if (i < N)
            cout << " + ";
    }

    cout << " = " << sum << endl;

    return 0;
}

