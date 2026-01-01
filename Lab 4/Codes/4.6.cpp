#include <iostream>
using namespace std;

int main()
{
    cout<<"Hunaina Yasir"<<endl;
    cout<<"Roll. number: 073"<<endl;

    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    if(a < 100)
    {
        cout<<"Smaller than 100"<<endl;
    }
    else if(a > 100)
    {
        cout<<"Greater than 100"<<endl;
    }
    else
    {
        cout<<"True equal to 100"<<endl;
    }

    return 0;
}

