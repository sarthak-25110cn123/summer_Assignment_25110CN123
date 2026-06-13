#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout <<endl;
    cout << "Array elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}