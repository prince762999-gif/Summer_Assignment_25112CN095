#include <iostream>
using namespace std;

int main() {
    int num, original, digit, sum = 0, fact, i;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        digit = num % 10;

        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == original)
        cout << original << " is a Strong Number";
    else
        cout << original << " is not a Strong Number";

    return 0;
}