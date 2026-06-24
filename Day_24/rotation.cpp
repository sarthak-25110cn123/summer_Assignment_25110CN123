#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char s1[100],s2[100];
    cout<<"enter first string: "; 
    cin>>s1;
    cout<<"enter second string: ";
    cin>>s2;
    if(strlen(s1)!=strlen(s2)){
        cout<<"Strings are not equal so no rotation possible";
        return 0;
    }
    char temp[200];
    strcpy(temp,s1);
    strcat(temp,s1);
    if(strstr(temp,s2))
        cout<<"Strings are Rotation of each other";
    else
        cout<<"Strings are Not Rotation of each other";
    return 0;
}