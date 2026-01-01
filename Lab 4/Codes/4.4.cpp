#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Hunaina Yasir \nRoll number: 073" << endl;
	cout<<"Enter first number: ";
	cin>>a;

	int b;
	cout<<"Enter second number: ";
	cin>>b;

	char c;
	cout<<"Enter operator (+ - * / %): ";
	cin>>c;

	if(c=='+') {
		cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a+b;
	} else if(c=='-') {
		cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a-b;
	} else if(c=='*') {
		cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a*b;
	} else if(c=='%') {
		cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a%b;
	} else if(c=='/') {
		cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a/b;
	} else {
		cout<<"Invalid operator";
	}
}

