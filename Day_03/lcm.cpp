#include <iostream>
using namespace std;
int main() {
    int n,m,start,lcm;
    cout<<"Enter two numbers: ";
    cin>>n>>m;
    if(n < 0) n = -n;
    if(m < 0) m = -m;
    if(n == 0 && m == 0) {
        cout << "LCM is undefined";
        return 0;
    }
    if(n == 0 || m == 0) {
        cout << "LCM: 0";
        return 0;
    }
    if(n>m){
        start=n;
    }
    else start=m;
    for(int i=start;i<=n*m;i++){
        if(i%n==0 && i%m==0){
            lcm=i;
            break;
        }
    }
    cout<<"LCM :"<<lcm;
    return 0;
}