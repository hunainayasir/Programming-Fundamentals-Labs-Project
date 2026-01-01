#include <iostream>
using namespace std;

int main()
{
    cout<<"Hunaina Yasir"<<endl;
    cout<<"Roll. number: 073"<<endl;

    int quantity;
    cout<<"Enter quantity: ";
    cin>>quantity;

    int totalcost;
    totalcost = quantity * 100;

    int discount;
    int finalcost;

    if(totalcost > 1000)
    {
        discount = totalcost * 10 / 100;
    }
    else
    {
        discount = 0;
    }

    finalcost = totalcost - discount;

    cout<<"Total cost: "<<totalcost<<endl;
    cout<<"You saved: "<<discount<<endl;
    cout<<"Final cost: "<<finalcost;

    return 0;
}

