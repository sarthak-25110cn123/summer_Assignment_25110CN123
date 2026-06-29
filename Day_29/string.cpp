#include <iostream>
#include <string>
using namespace std;
void enterString(string &str){
    cout<<"Enter a String: ";
    cin.ignore();
    getline(cin,str);
}
void displayString(string str){
    if(str.empty()){
        cout<<"String is empty"<<endl;
        return;
    }
    cout<<"String: "<<str<<endl;
}
void stringLength(string str){
    cout<<"Length = "<<str.length()<<endl;
}
void reverseString(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<"Reversed String: "<<str<<endl;
}
void upperCase(string str){
    for (int i=0;i<str.length();i++) {
        if (str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    cout<<"Uppercase String: "<<str<<endl;
}
int main() {
    string str;
    int choice=0;
    while (choice!=6){
        cout<<"String Operations"<<endl;
        cout<<"1.Enter String"<<endl;
        cout<<"2.Display String"<<endl;
        cout<<"3.Find Length"<<endl;
        cout<<"4.Reverse String"<<endl;
        cout<<"5.Convert to Uppercase"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
        case 1:
            enterString(str);
            break;
        case 2:
            displayString(str);
            break;
        case 3:
            stringLength(str);
            break;
        case 4:
            reverseString(str);
            break;
        case 5:
            upperCase(str);
            break;
        case 6:
            cout<<"Thankyou"<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
        }
    }

    return 0;
}