#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter rows and columns: ";
    cin>>n>>m;
    int arr[n][m];
    if(n!=m){
    cout<<"Non Symmetric";
    return 0;
}
else{
    cout<<"enter elements in a matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int brr[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    bool flag=true;
    for(int i=0;i<m;i++){
        
        for(int j=0;j<n;j++){
            if(brr[i][j]!=arr[i][j]){
                flag=0;
                break;
            }

        }
        if(flag==0) break;
    }
    if(flag==1){
        cout<<"Symmetric";
    }
    else  cout<<" Non Symmetric";
}
    return 0;
}