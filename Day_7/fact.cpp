#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    if (n > 20) {
        cout << "Factorial is too large to be stored in a long long data type." << endl;
        return 0;
    }
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}