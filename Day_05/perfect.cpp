#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=0){
    cout<<"Perfect numbers are defined only for positive integers";
    return 0;
}
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"It is a Perfect number";
    }
    else cout<<"It is not a Perfect number";
    return 0;
}