#include <iostream>
#include <vector>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void reverse(int arr[],int i,int j){
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter number of elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }cout<<endl;
    int k;
    cout<<"Enter the element upto which you have to rotate: ";
    cin>>k;
    cout<<endl;
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        reverse(arr,0,n-1);
    
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}