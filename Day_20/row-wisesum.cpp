#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter rows and columns: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter elements in a matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum: "<<sum<<endl;
    }
    
    return 0;
}