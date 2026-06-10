#include <iostream>
using namespace std;

int main() {
    int n,prod=1,ld=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        ld=n%10;
        prod=prod*ld;
        n=n/10;
    }
    cout<<"Product of digits is: "<<prod;
    return 0;
}