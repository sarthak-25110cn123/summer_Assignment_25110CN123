#include <iostream>
using namespace std;
void max(int a,int b){
    if(a>b){
        cout<<a<<" is Maximum number";
    }
    else cout<<b<<" is Maximum number";
}
int main(){
    int n;
    cout << "Enter one number: ";
    cin >> n;
    int m;
    cout << "Enter other number: ";
    cin >> m;
    max(n,m);
    return 0;
}