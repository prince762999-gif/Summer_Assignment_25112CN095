#include <iostream>
using namespace std;

// Function to find maximum
int findMaximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int max = findMaximum(num1, num2);

    cout << "Maximum = " << max;

    return 0;
}