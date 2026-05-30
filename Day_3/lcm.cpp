#include <iostream>
using namespace std;
int main() {
    int n,m,start,lcm;
    cout<<"Enter two numbers: ";
    cin>>n>>m;
    if(n>m){
        start=n;
    }
    else start=m;
    for(int i=start;i<=n+m;i++){
        if(i%n==0 && i%m==0){
            lcm=i;
            break;
        }
    }
    cout<<"LCM :"<<lcm;
    return 0;
}