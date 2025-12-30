#include <iostream>
using namespace std;

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll Number: 073" << endl << endl;

    int arr[3][3];
    int value;
    bool found = false;

    cout << "Enter elements of 3 x 3 array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter element to search: ";
    cin >> value;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == value) {
                cout << "Element found at index [" << i << "][" << j << "]" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}

