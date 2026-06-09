#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end, num, temp, digit, count, sum;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are:\n";

    for (num = start; num <= end; num++) {
        temp = num;
        count = 0;
        sum = 0;

        // Count digits
        while (temp != 0) {
            count++;
            temp = temp / 10;
        }

        temp = num;

        // Calculate sum of powers
        while (temp != 0) {
            digit = temp % 10;
            sum = sum + pow(digit, count);
            temp = temp / 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}
