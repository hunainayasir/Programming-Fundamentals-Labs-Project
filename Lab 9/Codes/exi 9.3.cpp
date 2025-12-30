#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	cout << "Hunaina Yasir" << endl;
	cout << "Roll Number: 073" << endl << endl;

	int arr[10][10];
	int min, max;
	int minCount = 0, maxCount = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = rand() % 10;
		}
	}

	min = arr[0][0];
	max = arr[0][0];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] < min)
				min = arr[i][j];
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}

	cout << "Minimum Value is: " << min << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == min) {
				cout << "Found at location [" << i << "][" << j << "]" << endl;
				minCount++;
			}
		}
	}
	cout << minCount << " instances were found." << endl;

	cout << "Maximum Value is: " << max << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == max) {
				cout << "Found at location [" << i << "][" << j << "]" << endl;
				maxCount++;
			}
		}
	}
	cout << maxCount << " instances were found." << endl;

	cout << "The 10 x 10 array is:" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}

