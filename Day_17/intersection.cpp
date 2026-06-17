#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array: ";
    cin >> n;
    int arr1[100];
    for(int i=0;i<n;i++) {
        cin>>arr1[i];
    }
    int arr2[100];
    for(int i=0;i<n;i++) {
        cin>>arr2[i];
    }
    cout << "Intersection: ";
    for(int i=0;i<n;i++) {
        bool flag=false;
        for(int j=0;j<i;j++) {
            if(arr1[i]==arr1[j]) {
                flag = true;
                break;
            }
        }
        if(flag==1) continue;
        else {
        for(int k=0;k<n;k++) {
            if(arr1[i]==arr2[k]) {
                cout<<arr1[i]<<" ";
                break;
            }
        }
        }
    }
    return 0;
}