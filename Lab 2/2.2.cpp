#include <iostream> 
using namespace std; 
int main()
{
 
	int x, y;
	cout << "Enter first number: ";
	cin >> x;	 // storing the value of first number
	cout << "Enter second number: ";
	cin >> y;	 // storing the value of second number
	int sum = x + y;	// declaring variables here with data types
	int diff = x - y; 
	int mul = x * y; 
	int div = x / y; 
	int mod = x % y;
	cout << "Sum is: " << sum << "\a" << endl;	// \a makes beep sound
	cout << "Difference is: " << diff << "\a" << endl; 
	cout << "Product is: " << mul << "\a" << endl; 
	cout << "Quotient is: " << div << "\a" << endl; 
	cout << "Remainder is: " << mod << "\a";
	return 0;
}

