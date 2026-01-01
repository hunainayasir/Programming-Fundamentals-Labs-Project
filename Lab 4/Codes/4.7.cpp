#include <iostream>
using namespace std;

int main()
{
    cout<<"Hunaina Yasir"<<endl;
    cout<<"Roll. number: 073"<<endl;

    float price;
    cout<<"Enter original price: ";
    cin>>price;

    float discount;
    float finalprice;

    if(price > 100)
    {
        discount = price * 10 / 100;
    }
    else
    {
        discount = price * 5 / 100;
    }

    finalprice = price - discount;

    cout<<"Final price after discount: "<<finalprice;

    return 0;
}

