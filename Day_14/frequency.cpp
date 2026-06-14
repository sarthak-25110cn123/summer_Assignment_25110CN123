#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int count=0;
    int m;
    cout<<"Enter element you want to search in an array:";
    cin>>m;
    for (int i=0;i<n;i++) {
        if(m==arr[i]){
            count++;
        }
    }
    if(count==0)
    cout<<m<<" is not present in the array";
    else
    cout<<"The frequency of "<<m<<" is "<< count;
    return 0;
}