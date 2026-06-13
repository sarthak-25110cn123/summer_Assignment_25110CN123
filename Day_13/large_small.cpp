#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout << "Enter a size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout <<endl;
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Largest element: "<<max<<endl;
     cout<<"Smallest element: "<<min<<endl;
    return 0;
}