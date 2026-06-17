#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n],brr[n],crr[2*n];
    cout<<"enter elements of both the arrays: "<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        cin>>brr[i];
    }
    int k=0;
    for(int i=0;i<n;i++) {
        crr[k]=arr[i];
        k++;
    }
    for(int i=0;i<n;i++) {
        bool flag = false;
        for(int j=0;j<k;j++){
            if(brr[i]==crr[j]){
                flag=true;
                break;
            }
        }
        if(flag==0){
            crr[k]=brr[i];
            k++;
        }
    }
    cout<<"Union: ";
    for(int i=0;i<k;i++){
        cout<<crr[i]<<" ";
    }
    return 0;
}