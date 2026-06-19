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
    int brr[n][m];
    cout<<"enter elements in other matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }
        cout<<endl;
    }
    int crr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}