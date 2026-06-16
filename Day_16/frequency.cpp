#include <iostream>
using namespace std;
void maxFrequency(int arr[], int n) {
    int maxFreq = 0;
    int ele = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            ele = arr[i];
        }
    }
    cout << "Maximum frequency: " << maxFreq << endl;
    cout << "Of element " << ele << endl;
}
int main() {
    int arr[] = {1, 3, 2, 3, 4, 2, 4, 4, 3, 4, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxFrequency(arr, n);
    return 0;
}