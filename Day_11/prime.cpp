#include <iostream>
using namespace std;
void prime(int n){
    if(n<=1){ 
        cout<<"It is not a prime number";
    }
    else{
    bool flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }

    if(flag==1) cout<<"The given number is prime";
    else cout<<"The given number is not prime";
    }
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime(n);
    
    return 0;
}