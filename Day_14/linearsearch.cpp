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
    int m;
    cout<<"Enter element you want to search in an array:";
    cin>>m;
    bool flag=false;
    for (int i=0;i<n;i++) {
        if(m==arr[i]){
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"Element is present";
    else cout<<"Element is absent";
    return 0;
}