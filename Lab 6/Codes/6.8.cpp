#include <iostream>
using namespace std;
int main ()
{
	cout << "Hunaina Yasir" << "    " << "073";
	cout << "\n";

int thousands = 0;
    do {
        int hundreds = 0;
        do {
            int tens = 0;
            do {
                int ones = 0;
                do {
                    cout << thousands << hundreds << tens << ones << endl;
                    ones++;
                } while (ones <= 9);
                tens++;
            } while (tens <= 9);
            hundreds++;
        } while (hundreds <= 9);
        thousands++;
    } while (thousands <= 9);
    
    return 0;
}

