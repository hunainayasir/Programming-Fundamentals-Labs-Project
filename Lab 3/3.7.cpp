#include <iostream>
using namespace std;

int main() 
{
    int age, amt;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter total purchase amount: ";
    cin >> amt;

    int dis = age > 50 || amt > 20000;

    cout << "Eligible for discount (1=True, 0=False): " << dis << endl;

    return 0;
}

