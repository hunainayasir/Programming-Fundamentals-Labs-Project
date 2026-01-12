#include <iostream>
using namespace std;
int main ()
{
	cout << "Hunaina Yasir" << "    " << "073";
	cout << "\n";

for (int thousands = 0; thousands <= 9; thousands++) 
{
    for (int hundreds = 0; hundreds <= 9; hundreds++) 
	{
        for (int tens = 0; tens <= 9; tens++) 
		{
            for (int ones = 0; ones <= 9; ones++) 
			{
                cout << thousands << hundreds << tens << ones << endl;
            }
        }
    }
}
return 0;
}

