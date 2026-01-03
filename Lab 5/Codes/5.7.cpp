#include <iostream>
using namespace std;

int main(){
int N;
int sum = 0;
cout << "Enter a positive integer N: ";
cin >> N;
cout << "Sum of prime numbers from 1 to " << N << ":" << endl;
for (int i = 2; i <= N; ++i) {
bool isPrime = true;
for (int j = 2; j * j <= i; ++j) {
if (i % j == 0) {
isPrime = false;
break;
}
}
if (isPrime) {
sum += i;
cout << i;
if (i < N) {
cout << " + ";
}
}
}
cout << " = " << sum << endl;
}

