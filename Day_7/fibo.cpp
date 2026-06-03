#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive number.";
        return 0;
    }
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}