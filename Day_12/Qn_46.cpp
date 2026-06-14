#include <iostream>
#include <cmath>
using namespace std;

// Function to check Armstrong number
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;
    int temp = num;

    // Count number of digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate sum of powers of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp = temp / 10;
    }

    return sum == original;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";

    return 0;
}