#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,ld;
    cout<<"enter a binary number: ";
    cin >> n;
    int ans  = 0;
    int i = 0;
    while(n != 0 ) {
        ld=n%10;
        ans=(ld*pow(2,i))+ans;
        n=n/10;
        i++;
    }
    cout<<" Answer is :" << ans << endl;
    return 0;
}