#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of words: ";
    cin>>n;
    vector<string> word(n);
    string temp;
    cout<<"Enter words:"<<endl;
    for(int i=0;i<n;i++)
        cin>>word[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(word[i].length()>word[j].length()){
                temp=word[i];
                word[i]=word[j];
                word[j]=temp;
            }
        }
    }
    cout<<"Words sorted by length:"<<endl;
    for(int i=0;i<n;i++){
        cout<<word[i]<<endl;
    }
     return 0;
} 