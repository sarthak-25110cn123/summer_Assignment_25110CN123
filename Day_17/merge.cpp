#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter elements of 1st array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;
    int m;
    cout<<"enter size of array: ";
    cin>>m;
    cout<<"enter elements of 2nd rray: ";
    int brr[m];
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }cout<<endl;
    int crr[m+n];
    for(int i=0;i<n;i++){
        crr[i]=arr[i];
    }
    for(int i=0;i<m;i++){
        crr[n+i]=brr[i];
    }
    sort(crr,crr+(m+n));
    for(int i=0;i<(m+n);i++){
        cout<<crr[i]<<" ";
    }
    return 0;
}