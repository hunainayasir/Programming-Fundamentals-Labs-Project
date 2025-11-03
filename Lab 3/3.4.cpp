#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char c1, c2, c3;
	cout << "Enter 1st character to print its ACII value: ";
	c1 = getche();
	cout << "\nEnter 2nd charcter to print its ACII value: ";
	c2 = getche();
	cout << "\nEnter 3rd  to character print its ACII value: ";
	c3 = getche();
	
	int A = c1;
	int B = c2;
	int C = c3;
	cout << "\nACII code of the character 1 is: " << A;
	cout << "\nACII code of the character 2 is: " << B;
	cout << "\nACII code of the character 3 is: " << C;
	
	cout << "\nThe sum of all ACII is: " << A+B+C;
	return 0;
}
