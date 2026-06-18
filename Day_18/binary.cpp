#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter sorted array elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter element to search: ";
    cin>>target;
    int low = 0;
    int high = n - 1;
    int found = 0;
    while(low<=high) {
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            cout<<"Element found at index "<< mid;
            found=1;
            break;
        }
        else if(arr[mid]<target) {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==0){
        cout<<"Element not found";
    }
    return 0;
}