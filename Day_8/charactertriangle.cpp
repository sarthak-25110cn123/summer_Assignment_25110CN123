#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n<0){
        cout<<"Enter a positive number !";
    }
    else if(n<0||n>26){
        cout<<"Enter a number between 0 and 26";
    }
    else{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }
}
    return 0;
}