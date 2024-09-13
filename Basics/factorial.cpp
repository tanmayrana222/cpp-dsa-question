#include <iostream>
using namespace std;

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0)
        cout << "Factorial of negative number doesn't exist.\n";
    else
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
