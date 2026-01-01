#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cout << "Enter 1st number: ";
	cin >> a;
	cout << "\nEnter 2nd number: ";
	cin >> b;
	cout << "\nEnter 3rd number: ";
	cin >> c;
	cout << "\nEnter 4th number: ";
	cin >> d;
	cout << "\nEnter 5th number: ";
	cin >> e;
	
	if (a>b && a>c && a>d && a>e)
	cout << "\nThe largest number is " << a;
	else if (b>a && b>c && b>d && b>e)
	cout << "\nThe largest number is " << b;
	else if (c>a && c>b && c>d && c>e)
	cout << "\nThe largest number is " << c;
	else if (d>a && d>b && d>c && d>e)
	cout << "\nThe largest number is " << d;
	else 
	cout << "\nThe largest number is " << e;
	
	return 0;
}
