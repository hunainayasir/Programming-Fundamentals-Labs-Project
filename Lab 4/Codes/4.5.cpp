#include<iostream>
using namespace std;

int main() 
{
	cout << "Hunaina Yasir \nRoll number: 073" << endl;
	float price, payment, months, payable, newpay, monthins, interest;

	cout<<"Enter vehicle price: ";
	cin>>price;

	cout<<"Enter down payment: ";
	cin>>payment;

	cout<<"Enter number of installment months: ";
	cin>>months;

	payable = price - payment;

	if(months <= 12) 
	{
		interest = (10 * payable) / 100;
	} else if(months > 12 && months <= 24) 
	{
		interest = (15 * payable) / 100;
	} else if(months > 24 && months <= 36) 
	{
		interest = (20 * payable) / 100;
	} else if(months > 36 && months <= 48)
	{
		interest = (25 * payable) / 100;
	} else if(months > 48 && months <= 60) 
	{
		interest = (30 * payable) / 100;
	} else 
	{
		interest = 0;
	}

	newpay = payable + interest;
	monthins = newpay / months;

	cout<<"Interest amount: "<<interest;
	cout<<"\nTotal payable amount: "<<newpay;
	cout<<"\nMonthly installment: "<<monthins;

	return 0;
}

