#include <iostream>
using namespace std;

// Recursive function to find sum of digits
int sumDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << sumDigits(num);

    return 0;
}