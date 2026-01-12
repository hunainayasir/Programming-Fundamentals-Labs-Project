#include <iostream>
using namespace std;
int main ()
{
	cout << "Aysel Aamer" << "    " << "067";
	cout << "\n";

int thousands = 0;
    while (thousands <= 9) 
	{
        int hundreds = 0;
        while (hundreds <= 9) 
		{
            int tens = 0;
            while (tens <= 9) 
			{
                int ones = 0;
                while (ones <= 9) 
				{
                    cout << thousands << hundreds << tens << ones << endl;
                    ones++;
                }

                tens++;
            }

            hundreds++;
        }

        thousands++;
    }
return 0;
}

