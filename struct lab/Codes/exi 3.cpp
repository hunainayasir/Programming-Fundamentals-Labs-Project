#include <iostream>
using namespace std;

struct Book {
    string title;
    float price;
};

int main() {
    cout << "Hunaina Yasir" << endl;
    cout << "Roll number: 073" << endl << endl;

    Book b[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter book title: ";
        cin >> b[i].title;
	
        cout << "Enter price: ";
        cin >> b[i].price;
        cout << endl;
    }

    cout << endl << "Books with price greater than 500:" << endl;

    for (int i = 0; i < 5; i++) {
        if (b[i].price > 500) {
            cout << b[i].title << " " << b[i].price << endl;
        }
    }

    return 0;
}

