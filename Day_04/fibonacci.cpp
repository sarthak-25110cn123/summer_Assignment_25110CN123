#include <iostream>
using namespace std;
int main() {
    int n,a=0,b=1,c;
    cout<<"Enter number of fibonacci numbers : ";
    cin>>n;
    if(n<=0){
        cout<<"Enter a positive number";
        return 0;
    }
    if(n==1){
        cout<<a;
        return 0;
    }
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}