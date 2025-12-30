#include <iostream>
using namespace std;

int main() {
	int a[3][3], i, j, c[3], r[3], col, row;

	cout << "Enter the number of rows and columns of the matrix:- \n";
	// Press the Return Button once.
	cin >> row >> col;

	cout << "\nEnter the elements of the matrix:-\n";
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> a[i][j];

	cout << "\nGiven Matrix is as given below:- \n";
	for (i = 0; i < row; i++) {
		cout << "\n";
		for (j = 0; j < col; j++)
			cout << a[i][j] << "\t";
	}

	for (i = 0; i < row; i++) {
		r[i] = 0;
		for (j = 0; j < col; j++)
			r[i] += a[i][j];
	}

	for (j = 0; j < col; j++) {
		c[j] = 0;
		for (i = 0; i < row; i++)
			c[j] += a[i][j];
	}

	cout << endl << endl;
	for (i = 0; i < row; i++)
		cout << "\nThe sum of row number " << i + 1 << " is " << r[i];

	for (j = 0; j < col; j++)
		cout << "\nThe sum of column number " << j + 1 << " is " << c[j];

	return 0;
}

