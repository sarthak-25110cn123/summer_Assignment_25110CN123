#include <iostream>
#include <cmath>
using namespace std;
void fibo(int n){
    int c;
    int a=0;
    int b=1;
    if(n==0){
        cout<<a;
        return;
    }
    if(n==1){cout<<a;
        return;
    }
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;

    }
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fibo(n);
    return 0;
}