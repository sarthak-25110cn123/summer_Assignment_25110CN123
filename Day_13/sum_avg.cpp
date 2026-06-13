#include <iostream>
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
    int sum=0;
    float avg=0;
    float ans=0;
    cout << "Sum of array elements: ";
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }cout<<sum<<endl;
    cout << "Average of array elements: ";
    for(int i=0;i<n;i++){
        avg+=arr[i];
    }
    ans=avg/n;
    cout<<ans;
    return 0;
}