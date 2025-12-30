#include <iostream>
using namespace std;

int main() {
    int A[3][3];
    int B[3][3];
    int row, col, isEqual;

    for(row = 0; row < 3; row++) {
        for(col = 0; col < 3; col++) {
            cout << "Enter matrix element of A[" << row << "][" << col << "] ";
            cin >> A[row][col];
        }
    }

    for(row = 0; row < 3; row++) {
        for(col = 0; col < 3; col++) {
            cout << "Enter matrix element of B[" << row << "][" << col << "] ";
            cin >> B[row][col];
        }
    }

    isEqual = 1;
    for(row = 0; row < 3; row++) {
        for(col = 0; col < 3; col++) {
            if(A[row][col] != B[row][col]) {
                isEqual = 0;
                break;
            }
        }
    }

    if(isEqual == 1) {
        cout << "\nMatrix A is equal to Matrix B";
    } else {
        cout << "\nMatrix A is not equal to Matrix B";
    }

    return 0;
}

