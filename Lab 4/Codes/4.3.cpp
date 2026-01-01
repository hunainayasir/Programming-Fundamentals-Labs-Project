#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char choice;
	
	cout << "\nEnter first Number: ";
	cin >> a;
	cout << "\nEnter an arithmetic operator: ";
	cin >> choice;
	cout << "\nEnter second Number: ";
	cin >> b;
	
	switch (choice)
	{
		case '+':
		cout <<"\n" << a << " + " << b << " = " << a+b;
		break;
		
		case '-':
		cout <<"\n" << a << " - " << b << " = " << a-b;
		break;
		
		case '*':
		cout <<"\n" << a << " x " << b << " = " << a*b;
		break;	
		
		case '/':
		cout <<"\n" << a << " / " << b << " = " << a/b;
		break;
		
		case '%':
		cout <<"\n" << a << " % " << b << " = " << a % b;
		break;	
		
		default:
		cout << "Invalid character!";
	}
	
	return 0;
}
