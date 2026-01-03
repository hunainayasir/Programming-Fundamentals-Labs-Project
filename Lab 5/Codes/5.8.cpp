
#include <iostream>
using namespace std;

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;
    cout << "Enter an alphabet: ";
    cin >> c;
    // evaluates to true if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // evaluates to true if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (!isalpha(c)) {
        cout << "Error! Non-alphabetic character." << endl;
    } else if (isLowercaseVowel || isUppercaseVowel) {
        cout << c << " is a vowel." << endl;
    } else {
        cout << c << " is a consonant." << endl;
    }
}


