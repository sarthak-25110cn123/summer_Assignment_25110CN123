#include <iostream>
using namespace std;
int main(){
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
    while(i<j){
        if(arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[j]==0) j--;
        else i++;
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}