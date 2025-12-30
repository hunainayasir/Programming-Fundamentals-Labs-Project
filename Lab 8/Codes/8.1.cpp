#include <iostream>
using namespace std;

void square()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void square(char ch)
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void square(char ch, int size)
{
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    square();
    cout << endl;

    square('#');
    cout << endl;

    square('@', 4);

    return 0;
}

