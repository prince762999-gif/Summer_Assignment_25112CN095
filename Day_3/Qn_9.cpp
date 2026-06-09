#include <iostream>
using namespace std;

int main() {
    int num, i, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a Prime Number";
    }
    else {
        for(i = 1; i <= num; i++) {
            if(num % i == 0) {
                count++;
            }
        }

        if(count == 2)
            cout << num << " is a Prime Number";
        else
            cout << num << " is not a Prime Number";
    }

    return 0;
}