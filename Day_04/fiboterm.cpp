#include <iostream>
using namespace std;
int main() {
    int n,a=0,b=1,c;
    cout<<"Enter the nth term : ";
    cin>>n;
    if(n<=0){
        cout << "Enter a positive term number";
        return 0;
    }
    if(n==1){
        cout<<"nth Fibonacci term: "<<a;
    }
    else if(n==2){
        cout<<"nth Fibonacci term: "<<b;
    }

    else {for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"nth Fibonacci term: "<<b;
}
    return 0;
}