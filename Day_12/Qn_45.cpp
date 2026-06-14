#include <iostream>
using namespace std;

// Function to check palindrome
bool isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return original == reverse;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number))
        cout << number << " is a Palindrome.";
    else
        cout << number << " is not a Palindrome.";

    return 0;
}