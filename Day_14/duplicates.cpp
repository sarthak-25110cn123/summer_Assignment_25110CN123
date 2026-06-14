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
    bool flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
              flag=true;
             break;                
            }
        }
    }
    if(flag==0){
        cout<<"There are no duplicates";
    }
    else cout<<"are  duplicates";
    return 0;
} 