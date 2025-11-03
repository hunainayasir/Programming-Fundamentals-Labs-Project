#include <iostream> 
using namespace std;

int main()
{
	float c,f;
	cout << "Enter temperature in Celsius: ";
 
	cin >> c; 	// storing value of temperature in Celsius
	f = (c * 9 / 5) + 32;  	// using formula given
	cout << "Temperature in Fahrenheit is: " << f << endl; 
	return 0;
}

