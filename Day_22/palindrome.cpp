#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int len = 0;
    while(str[len]!='\0'){
        len++;
    }
    int i=0;
    int j=len-1;
    bool flag=true;
    while(i<j){
        if(str[i]!= str[j]) {
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag)
        cout<<"Palindrome String";
    else
        cout<<"Not a Palindrome String";
    return 0;
}