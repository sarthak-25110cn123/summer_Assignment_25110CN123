#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,count=0,num,num2,ld,rem=0;
    cout<<"Enter a number: ";
    cin>>n;
    num=n;
    num2=n;
    while(n>0){
        n=n/10;
        count++;
    }
    while(num!=0){
        ld=num%10;
        rem=rem+(int)pow(ld,count);
        num=num/10;
    }
    if(num2==rem){
        cout<<num2<<" is an Armstrong Number";
    }
    else cout<<num2<<" is not an Armstrong Number";
    return 0;
}