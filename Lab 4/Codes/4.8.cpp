#include <iostream>
using namespace std;

int main()
{
    cout<<"Hunaina Yasir"<<endl;
    cout<<"Roll. number: 073"<<endl;

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age < 13)
    {
        cout<<"Child";
    }
    else if(age >= 13 && age < 20)
    {
        cout<<"Teenager";
    }
    else if(age >= 20 && age < 60)
    {
        cout<<"Adult";
    }
    else
    {
        cout<<"Senior";
    }

    return 0;
}

