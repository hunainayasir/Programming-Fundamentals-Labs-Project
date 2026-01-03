#include <iostream>
using namespace std;

int main() {
int N;
int sum = 0;
cout << "Enter a positive integer N: ";
cin >> N;
if (N <= 0) {
cout << "Invalid input. Please enter a positive integer." << endl; return 1; // Exit with an error code.
}
cout << "Sum of even numbers from 1 to " << N << ":" << endl;
for (int i = 2; i <= N; i += 2) {
sum += i;
cout << i;
if (i < N - 1 && i + 2 <= N) {
cout << " + ";
} else if (i == N) {
cout << " = " << sum;
}
}
}

