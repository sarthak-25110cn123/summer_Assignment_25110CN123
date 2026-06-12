#include <iostream>
using namespace std;
void palin(int n){
    int num=n;
    int ld,rem=0;
    while(n!=0){
        ld=n%10;
        rem=rem*10+ld;
        n=n/10;
    }
    if(rem==num) cout<<num<<" is a palindrome";
    else cout<<num<<" is not a palindrome";
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    palin(n);
    return 0;
}