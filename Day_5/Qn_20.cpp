#include <iostream>
using namespace std;

int main() {
    int num, i, j, largestPrime = 1, count;

    cout << "Enter a number: ";
    cin >> num;

    for(i = 2; i <= num; i++) {
        if(num % i == 0) {     // Check if i is a factor

            count = 0;

            // Check if factor is prime
            for(j = 1; j <= i; j++) {
                if(i % j == 0)
                    count++;
            }

            if(count == 2) {
                largestPrime = i;
            }
        }
    }

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}