#include <iostream>
using namespace std;
int main ()
{
	cout << "Hunaina Yasir" << "    " << "073";
	cout << "\n";

int i = 0;
    do 
	{
    int j = 0;
    do 
	{
        cout << "*";
        j++;
    } 
		while (j <= i);
        cout << endl;
        i++;
    } 
	while (i <= 10);
	return 0;
}

