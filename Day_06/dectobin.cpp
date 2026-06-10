#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    int ans  = 0;
    int i = 0;
    if(n<0){
        cout << "Enter a positive number";
        return 0;
    }
    if (n==0){
        cout<<"Answer is: 0";
        return 0;
    }
    while(n != 0 ) {
        int bit  = n & 1;
        ans = (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout<<" Answer is: " << ans << endl;
    return 0;
}