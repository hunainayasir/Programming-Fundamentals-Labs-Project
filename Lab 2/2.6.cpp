#include <iostream> 
using namespace std; 

int main()
{
	int a, b;

	cout << "Enter first number: "; 
	cin >> a;
	cout << "Enter second number: "; 
	cin >> b;
	int r = a % b;
	++r; 	// add 1 before use
	cout << "Final remainder after increment is: " << r << endl; 
	return 0;
}
 

