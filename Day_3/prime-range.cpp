#include <iostream>
using namespace std;
int main() {
    int start,end;
    cout<<"Enter a number: ";
    cin>>start >> end;
    if(start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    for(int i=start;i<=end;i++){
        if(i < 2) continue;
            
        int prime=0;
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