#include<iostream>
using namespace std;
int main(){
    char str[100];
    int count=1;
    cout<<"Enter a sentence: ";
    cin.getline(str,100);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<"Number of words = "<<count;
    return 0;
}