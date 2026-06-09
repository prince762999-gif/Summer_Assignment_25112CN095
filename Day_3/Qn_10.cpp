#include <iostream>
using namespace std;

int main() {
    int start, end, i, j, count;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers are:\n";

    for(i = start; i <= end; i++) {
        if(i <= 1)
            continue;

        count = 0;

        for(j = 1; j <= i; j++) {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            cout << i << " ";
    }

    return 0;
}