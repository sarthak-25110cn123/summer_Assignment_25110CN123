#include <iostream>
#include <cmath>
using namespace std;
void arms(int n){
    int count=0;
    int num=n;
    int num2=n;
    int ld;
    int rem=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    while(num!=0){
        ld=num%10;
        rem=rem+(int)pow(ld,count);
        num=num/10;
    }
    if(rem==num2) cout<<num2<<" is a armstrong";
    else cout<<num2<<" is not a armstrong";
    
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    arms(n);
    return 0;
}