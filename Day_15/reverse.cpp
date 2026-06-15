#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main() {
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter number of elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }cout<<endl;
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"reversed array: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}