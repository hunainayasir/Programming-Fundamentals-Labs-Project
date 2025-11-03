#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
	char c, b, d;
	cout << "Enter 1 character to print its ACII  value: ";
	c = getch();
	cout << "\nEnter 2 character to print its ACII  value: ";
	b = getche();
	cout << "\nEnter 3 character to print its ACII  value: ";
	d = getchar();
	int A = c;
	int B = b;
	int C = d;
	cout << "\n The value of the ACII character 1 is " << A;
	cout << "\n The value of the ACII character 2 is " << B;
	cout << "\n The value of the ACII character 3 is " << C;
	return 0;
}
