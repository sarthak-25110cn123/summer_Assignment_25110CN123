#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    int Count2=0;
    char maxChar='\0';
    for(int i=0;str[i]!='\0';i++){
        int count=0;
        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>Count2){
            Count2=count;
            maxChar=str[i];
        }
    }
    cout<<"Maximum occurring character = "<<maxChar << endl;
    cout<<"Frequency = "<<Count2;
    return 0;
}