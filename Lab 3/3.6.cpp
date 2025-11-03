#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;

    int b = temp >= 0 && temp <= 60;

    cout << "Bearable (1=True, 0=False): " << b << endl;

    return 0;
}

