#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,m,gcd;
    cout<<"Enter two numbers: ";
    cin>>n>>m;
    if(n<0) n = -n;
    if(m<0) m = -m;
    if (n==0 && m==0){
        cout << "GCD is undefined";
        return 0;
    }
    if (n == 0) {
        cout << "GCD: " << m;
        return 0;
    }
    if (m == 0) {
        cout << "GCD: " << n;
        return 0;
    }
    for(int i=1;i<=n && i<=m;i++){
        if(n%i==0 &&  m%i==0){
            gcd=i;
    }

}
cout<<"GCD: "<<gcd;
    return 0;
}