#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a sentence: ";
    cin.getline(str,100);
    int count=0,max=0;
    int start=0,pos=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            if(count>max){
                max=count;
                pos=start;
            }
            count=0;
            start=i+1;
        }
        else{
            count++;
        }
    }
    if(count>max) {
        max=count;
        pos=start;
    }
    cout<<"Longest word: ";
    for(int i=pos;i<pos+max;i++){
        cout<<str[i];
    }
    return 0;
}