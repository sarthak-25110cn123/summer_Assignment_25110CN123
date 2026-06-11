#include <iostream>
using namespace std;
int fact(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto=facto*i;
    }
    return facto;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n<0) cout<<"Enter a positive number";
    else cout<<"The factorial of "<<n<<" is "<<fact(n);
    return 0;
}