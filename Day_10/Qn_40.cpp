#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {

        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print characters
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << char('A' + i - 1);
        }

        cout << endl;
    }

    return 0;
}