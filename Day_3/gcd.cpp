#include <iostream>
using namespace std;
int main() {
    int n,m,gcd;
    cout<<"Enter two numbers: ";
    cin>>n>>m;
    for(int i=1;i<=n && i<=m;i++){
        if(n%i==0 &&  m%i==0){
            gcd=i;
    }

}
cout<<"GCD: "<<gcd;
    return 0;
}