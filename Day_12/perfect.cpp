#include <iostream>
#include <cmath>
using namespace std;
void perfect(int n){
    int sum=0;
    if(n <= 0){
    cout << "Enter positive number!" << endl;
    return;
}
else{
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n) cout<<"It is a perfect number";
    else cout<<"It is not a perfect number";
}
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    perfect(n);
    return 0;
}