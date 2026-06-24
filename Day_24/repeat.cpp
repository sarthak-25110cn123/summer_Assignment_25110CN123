#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    for(int i=0;str[i]!='\0';i++){
        bool flag=true;
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                flag=false;
                break;
            }
        }
        if(flag==1)
            cout<<str[i];
    }
    return 0;
}