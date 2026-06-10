#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter starting number: ";
    cin>>start;
    cout<<"Enter a ending number: ";
    cin>>end;
    for(int i=start;i<=end;i++){
        int num=i;
        int num2=i;
        int num3=num2;
        int count=0;
        int rem=0,ld;
        while(num!=0){
            num=num/10;
            count++;
        }
        while(num2!=0){
        ld=num2%10;
        rem=rem+(int)pow(ld,count);
        num2=num2/10;
        }
        if(num3==rem){
        cout<<num3<<" ";
    }
    
}
    return 0;
}