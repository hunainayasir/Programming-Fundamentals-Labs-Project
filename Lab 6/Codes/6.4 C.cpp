#include <iostream>
using namespace std;
int main ()
{
	cout << "Hunaina Yasir" << "    " << "073";
	cout << "\n";

int i = 0;
    while (i <= 10) 
	{
        int k = 0;
        while (k <= i) 
		{   
            cout << " ";
            k++;
        }
        int j = 10;
        while (j > i) 
		{   
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
   return 0;
}

