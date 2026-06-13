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
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else odd++;   
    }
    cout<<"Number of even elements: "<<even<<endl;
    cout<<"Number of odd elements: "<<odd<<endl;
    return 0;
}