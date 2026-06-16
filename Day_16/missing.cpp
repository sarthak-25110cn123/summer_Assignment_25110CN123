#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;
    int ans;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]>1){
            
            arr[i+1]=arr[i]+1;
            ans=arr[i+1];
            break;
        }
    }
    cout<<"missing element: "<<ans;
    cout<<endl;
    
    return 0;
}