#include <iostream>
using namespace std;

int main() {
    int n,rem=0,ld=0;
    cout<<"Enter a number: ";
    cin>>n;
    int num=n;
    while(n>0){
        ld=n%10;
        rem=rem*10+ld;
        n=n/10;
    }
    if(num==rem){
        cout<<num<<" is a Palindrome";
    }
    else{
        cout<<num<<" is NOT a Palindrome";
    }
    return 0;
}