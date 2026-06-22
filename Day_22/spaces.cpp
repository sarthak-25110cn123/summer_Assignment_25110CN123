#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter a string: ";
    cin.getline(s,100);
    int k=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=' ') {
            s[k]=s[i];
            k++;
        }
    }
    s[k]='\0';
    cout <<"String after removing spaces: "<< s;
    return 0;
}