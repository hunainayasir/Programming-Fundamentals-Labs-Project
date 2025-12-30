#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	cout << "Hunaina Yasir" << endl;
	cout << "Roll Number: 073" << endl << endl;

	int arr[10][10];
	int value;
	int count = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = rand() % 10;
		}
	}

	cout << "Enter a value to find in the 10 x 10 array: ";
	cin >> value;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == value) {
				cout << "Found at location [" << i << "][" << j << "]" << endl;
				count++;
			}
		}
	}

	if (count == 0) {
		cout << "Value not found" << endl;
	} else {
		cout << count << " instances were found." << endl;
	}

	cout << "The 10 x 10 array is:" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}

