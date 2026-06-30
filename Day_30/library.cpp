#include<iostream>
#include<string>
using namespace std;
int main(){
    int bookId[100];
    string bookName[100];
    string author[100];
    int quantity[100];
    int n=0;
    int choice=0;
    while(choice!=4){
        cout<<"Mini Library System"<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display Books"<<endl;
        cout<<"3. Search Book"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter Book ID: ";
            cin>>bookId[n];
            cout<<"Enter Book Name: ";
            cin>>bookName[n];
            cout<<"Enter Author Name: ";
            cin>>author[n];
            cout<<"Enter Quantity: ";
            cin>>quantity[n];
            n++;
            cout<<"Book Added Successfully"<<endl;
            break;
        case 2:
            if(n==0){
                cout<<"No Books Available"<<endl;
            }
            else{
                cout<<"Book Details"<<endl;
                for(int i=0;i<n;i++){
                    cout<<"Book "<<i+1<<endl;
                    cout<<"Book ID: "<<bookId[i]<<endl;
                    cout<<"Book Name: "<<bookName[i]<<endl;
                    cout<<"Author: "<<author[i]<<endl;
                    cout<<"Quantity: "<<quantity[i]<<endl;
                }
            }
            break;
        case 3:{
            int id;
            bool found=0;
            cout<<"Enter Book ID: ";
            cin>>id;
            for(int i=0;i<n;i++){
                if(bookId[i]==id){
                    cout<<"Book Found"<<endl;
                    cout<<"Book ID: "<<bookId[i]<<endl;
                    cout<<"Book Name: "<<bookName[i]<<endl;
                    cout<<"Author: "<<author[i]<<endl;
                    cout<<"Quantity: "<<quantity[i]<<endl;
                    found=1;
                    break;
                }
            }
            if(found==0){
                cout<<"Book Not Found"<<endl;
            }
            break;
        }
        case 4:
            cout<<"Thankyou"<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;
        }
    }
    return 0;
}