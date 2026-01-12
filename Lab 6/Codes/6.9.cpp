#include <iostream>
using namespace std;
int main ()
{
	cout << "Hunaina Yasir" << "    " << "073";
	cout << "\n";

int i = 1;
    do 
	{
        int j = 1;
        do {
            cout << j << " ";
            j++;
        } while (j <= i);

        cout << endl; 
        i++;
    } while (i <= 10);

    return 0;
}

