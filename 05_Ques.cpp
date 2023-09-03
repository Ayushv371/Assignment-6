// Given two numbers a and b, write a program to print all the prime 
// numbers present between a and b.

#include <iostream>
using namespace std;

bool isPrime(int num) {
if (num <= 1) {
    return false;
}
for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
        return false;
    }
}
return true;
}

int main() {
int a, b;

cout << "Enter the range (a and b): ";
cin >> a >> b;

if (a > b) {
    cout << "Invalid input: a should be less than or equal to b." << endl;
    return 1;
}

cout << "Prime numbers between " << a << " and " << b << " are:" << endl;

for (int i = a; i <= b; i++) {
    if (isPrime(i)) {
        cout << i << " ";
    }
}

cout << endl;

return 0;
}
