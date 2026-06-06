#include<iostream>
using namespace std;
int main() {
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0){
    cout<<"Enter a non-negative number";
    return 0;
}
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"Count is: "<<count;
    
    return 0;
}