#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[1000];
    cout << "Enter array elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }cout<<endl;
    for(int pass=0;pass<n-1;pass++) {  
        for(int i=0;i<n-1;i++){        
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i + 1]);
            }
        }
    }
    cout<<"Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}