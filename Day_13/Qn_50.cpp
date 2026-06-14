#include <iostream>
using namespace std;

int main() {
    int arr[100], n, sum = 0;
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display result
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}