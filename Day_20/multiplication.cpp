#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter rows and columns of 1st matrix: ";
    cin>>n>>m;
    int p,q;
    cout<<"enter rows and columns of 2nd matrix: ";
    cin>>p>>q;
    if(m!=p){
        cout<<"Multiplication not possible";
    }
else{
    int arr[n][m];
    cout<<"enter elements in a matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int brr[p][q];
    cout<<"enter elements in other matrix: "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
    }
    int res[n][q];
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<p;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}