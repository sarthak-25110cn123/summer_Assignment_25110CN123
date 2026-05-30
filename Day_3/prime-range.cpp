#include <iostream>
using namespace std;
int main() {
    int start,end;
    cout<<"Enter a number: ";
    cin>>start >> end;
    int prime=0;
    for(int i=start;i<=end;i++){
        
        for(int j=1;j<=i;j++){
            if(i%j==0){
                prime++;
            }
        }
    
    if(prime==2){
        cout<<i<< " ";
    }
}
    return 0;
}