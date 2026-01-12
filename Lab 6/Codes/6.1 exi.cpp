#include <iostream>
using namespace std;
int main ()
{
	cout << "Hunaina Yasir" << "    " << "073";
	cout << "\n";

int n;
    cout << "\nEnter an odd number: ";
    cin >> n;

    if (n % 2 == 0)
        n--;

    int mid = n / 2;
    int i = 0;

    while (i <= mid) {
        int space = mid - i;
        int star = 2 * i + 1;

        int s = 0;
        while (s < space) {
            cout << " ";
            s++;
        }

        int k = 0;
        while (k < star) {
            cout << "*";
            k++;
        }

        cout << endl;
        i++;
    }

    i = mid - 1;
    while (i >= 0) {
        int space = mid - i;
        int star = 2 * i + 1;

        int s = 0;
        while (s < space) {
            cout << " ";
            s++;
        }

        int k = 0;
        while (k < star) {
            cout << "*";
            k++;
        }

        cout << endl;
        i--;
    }

    return 0;
}

