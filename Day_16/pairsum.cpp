#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"enter the sum: ";
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"{"<<arr[i]<<","<<arr[j]<<"}";
            }
        }
    }


    return 0;
}