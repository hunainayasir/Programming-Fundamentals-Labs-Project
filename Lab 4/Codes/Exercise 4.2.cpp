#include <iostream>
using namespace std;

int main()
{
    cout<<"Hunaina Yasir"<<endl;
    cout<<"Roll. number: 073"<<endl;

    double balance = 1000.0;
    int choice;

    cout<<"Welcome to the Simple Bank!"<<endl;

    while(true)
    {
        cout<<"Choose an option:"<<endl;
        cout<<"1. Deposit"<<endl;
        cout<<"2. Withdraw"<<endl;
        cout<<"3. Check Balance"<<endl;
        cout<<"4. Exit"<<endl;

        cin>>choice;

        if(choice == 1)
        {
            double amount;
            cout<<"Enter deposit amount: ";
            cin>>amount;
            balance = balance + amount;
            cout<<"New balance: "<<balance<<endl;
        }
        else if(choice == 2)
        {
            double amount;
            cout<<"Enter withdrawal amount: ";
            cin>>amount;

            if(amount <= balance)
            {
                balance = balance - amount;
                cout<<"New balance: "<<balance<<endl;
            }
            else
            {
                cout<<"Insufficient balance"<<endl;
            }
        }
        else if(choice == 3)
        {
            cout<<"Current balance: "<<balance<<endl;
        }
        else if(choice == 4)
        {
            cout<<"Thank you for using the Simple Bank"<<endl;
            break;
        }
        else
        {
            cout<<"Invalid option"<<endl;
        }
    }

    return 0;
}

