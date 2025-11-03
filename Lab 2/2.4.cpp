#include <iostream> 
using namespace std; 

int main()
{
	int a, b;
	cout << "Enter first number: "; cin >> a;	 // storing value
	cout << "Enter second number: "; cin >> b;	 // storing value
	int sum = a + b; 		// declaring sum as a variable
	++sum;		 // adds 1 to sum before use
	cout << "The final result is: " << sum << endl; 
	return 0;
}
 

