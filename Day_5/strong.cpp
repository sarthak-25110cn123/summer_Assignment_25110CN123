#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,num,fact=1,ld,sum=0;
    cout <<"Enter a number: ";
    cin>>n;
    num=n;
   while(n>0){
        ld=n%10;
        int fact=1;
        for(int i=1;i<=ld;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(num==sum){
        cout<<"It is a strong number";
    }
    else cout<<"It is not a strong number";
    return 0;
}