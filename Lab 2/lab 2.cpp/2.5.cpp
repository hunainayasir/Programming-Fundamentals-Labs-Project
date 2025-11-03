#include <iostream> 
using namespace std; 

int main()
{
	int x, y;
	cout << "Enter first number: "; 
	cin >> x;
	cout << "Enter second number: "; 
	cin >> y;
	int sum = x + y; 	//adding numbers
	--sum;	 // minus 1 before using it
	cout << "The result after pre-decrement is: " << sum << endl; 
	return 0;
}
 

