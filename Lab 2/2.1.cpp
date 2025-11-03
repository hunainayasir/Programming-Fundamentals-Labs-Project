#include <iostream> 
using namespace std; 
int main()
{
	int a;
	float b; 
	char c;
 
	// asking user to enter values
	cout << "Please enter an integer number: "; 
	cin >> a;		 //storing value of integer
	cout << "Please enter a float number: "; 
	cin >> b;		 //storing value of float number
	cout << "Please enter a character: "; //endl for a new line 
	cin >> c; 		//storing value of the character
	cout << "The integer value is: " << a << endl; 
	cout << "The float value is: " << b << endl; 
	cout << "The character value is: " << c << endl;
	return 0;
}

