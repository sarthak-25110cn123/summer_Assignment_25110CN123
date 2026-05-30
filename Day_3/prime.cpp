#include <iostream>
using namespace std;
int main() {
    int n,prime=0;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            prime++;
        }
    }
    if(prime==2){
        cout<<"It is Prime";
    }
    else cout<<"It is not Prime";
    return 0;
}