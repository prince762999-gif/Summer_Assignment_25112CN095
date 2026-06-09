#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, digit, count = 0;
    int sum = 0, temp;

    cout << "Enter a number: ";
    cin >> num;

    original = num;
    temp = num;

    // Count number of digits
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate sum of powers of digits
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original)
        cout << num << " is an Armstrong Number";
    else
        cout << num << " is not an Armstrong Number";

    return 0;
}