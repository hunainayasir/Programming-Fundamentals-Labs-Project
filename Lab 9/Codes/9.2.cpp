#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    int A[3][3], B[3][3], add[3][3], mul[3][3];

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            add[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++) 
			{
                mul[i][j] = mul[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    cout << "Matrix A" << endl;
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix B" << endl;
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Addition Result" << endl;
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cout << add[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Multiplication Result" << endl;
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

