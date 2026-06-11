#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int n;
    cout << "Enter one number: ";
    cin >> n;
    int m;
    cout << "Enter one number: ";
    cin >> m;
    cout<<"Sum :"<<sum(n,m);
    return 0;
}