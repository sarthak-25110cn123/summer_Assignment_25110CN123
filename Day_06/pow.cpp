#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int p;
    cout<<"Enter power: ";
    cin>>p;
    float ans=1;
    if(p>=0){
    for(int i=1;i<=p;i++){
        ans=ans*n;
    }
}
else {
    for(int i=1;i<=-p;i++){
        ans=ans*n;
    }
    ans=1/ans;
}
    cout<<"Answer is: "<<ans;
    return 0;
}