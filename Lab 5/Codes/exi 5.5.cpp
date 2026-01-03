#include <iostream>
using namespace std;

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl;

    double balance = 0;
    int choice;

    // The while loop runs indefinitely until the user chooses to exit
    while (true) {
        cout << "\nATM Menu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Switch statement handles the user's menu choice
        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount deposited successfully." << endl;
                break;
            }
            case 2: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Amount withdrawn successfully." << endl;
                } else {
                    cout << "Insufficient balance." << endl;
                }
                break;
            }
            case 3:
                cout << "Current balance: " << balance << endl;
                break;
            case 4:
                cout << "Thank you for using ATM." << endl;
                return 0;  // Exit the program
            default:
                cout << "Invalid choice, try again." << endl;
        }
    }

    return 0;
}

