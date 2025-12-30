#include <iostream>
using namespace std;

int findMin(int a[], int n, int &index) {
	int min = a[0];
	index = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			index = i;
		}
	}
	return min;
}

int findMax(int a[], int n, int &index1, int &index2) {
	int max = a[0];
	index1 = 0;
	index2 = -1;
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			index1 = i;
			index2 = -1;
		} else if (a[i] == max && index2 == -1) {
			index2 = i;
		}
	}
	return max;
}

int findSum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + a[i];
	}
	return sum;
}

int main() {
	cout << "Hunaina Yasir" << endl;
	cout << "Roll Number: 073" << endl << endl;

	int arr[20] = {90,87,23,3,8,34,67,75,45,90,1,2,3,4,34,44,4,78,56,12};

	cout << "The integer array is:" << endl;
	for (int i = 0; i < 20; i++) {
		cout << arr[i];
		if (i != 19) cout << ", ";
	}
	cout << endl << endl;

	int minIndex;
	int maxIndex1, maxIndex2;

	int min = findMin(arr, 20, minIndex);
	int max = findMax(arr, 20, maxIndex1, maxIndex2);
	int sum = findSum(arr, 20);
	int avg = sum / 20;

	cout << "The minimum value is " << min << " found at index [" << minIndex << "]" << endl;
	if (maxIndex2 == -1)
		cout << "The maximum value is " << max << " found at index [" << maxIndex1 << "]" << endl;
	else
		cout << "The maximum value is " << max << " found at index [" << maxIndex1 << "][" << maxIndex2 << "]" << endl;

	cout << "The sum is " << sum << "." << endl;
	cout << "The average is " << avg << "." << endl;

	return 0;
}

