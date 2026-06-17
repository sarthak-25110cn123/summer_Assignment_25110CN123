#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }cout<<endl;
    cout<<"common elements: ";
    for(int i=0;i<n;i++){
        bool flag=0;
        for(int j=0;j<n;j++){
            if(arr[i]==brr[j]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}