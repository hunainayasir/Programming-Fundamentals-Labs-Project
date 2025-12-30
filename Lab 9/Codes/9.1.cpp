#include <iostream>
using namespace std;

int main() 
{
    int attendance[5];

    cout << "Enter attendance for 5 days:";
    for (int i = 0; i < 5; i++) 
	{
        cin >> attendance[i];
    }
	cout << "\nAttendance records:" << endl;
	
    for (int i = 0; i < 5; i++)
	{
        cout << "Day " << i + 1 << ": " << attendance[i] << endl;
    }

    return 0;
}

