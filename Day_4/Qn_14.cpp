#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next, i;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n == 1)
        cout << "Nth Fibonacci term = " << first;

    else if (n == 2)
        cout << "Nth Fibonacci term = " << second;

    else {
        for(i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        cout << "Nth Fibonacci term = " << next;
    }

    return 0;
}