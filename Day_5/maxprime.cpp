#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,maxprime=0;
    cout<<"Enter a number:";
    cin>>n;
    int num=n;
    if(n<=1){
        cout<<"Prime factors doesnot exists. ";
        return 0;
    }
    for(int i=2;i<n;i++){
        while(n%i==0){
           maxprime=i;
           n=n/i;
        }
    }
    if(n>1){
        maxprime=n;
    }
    
        cout<<"Maximum prime factor: "<<maxprime;
    return 0;
}