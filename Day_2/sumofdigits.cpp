#include <iostream>
using namespace std;

int main() {
    int n,ld=0,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    cout<<"Sum of digits: "<<sum;
    return 0;
}