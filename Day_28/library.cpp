#include<iostream>
#include<string>
using namespace std;
struct Book {
    int bookId;
    string title;
    string author;
    int quantity;
};
int main() {
    Book b[100];
    int n=0;
    int choice;
    while (true){
        cout<<"Library Management System"<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display All Books"<<endl;
        cout<<"3. Search Book"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
        case 1:
            cout<<"Enter Book ID: ";
            cin>>b[n].bookId;
            cout<<"Enter Book Title: ";
            cin>>b[n].title;
            cout<<"Enter Author Name: ";
            cin>>b[n].author;
            cout<<"Enter Quantity: ";
            cin>>b[n].quantity;
            n++;
            cout<<"Book Added Successfully."<<endl;
            break;
        case 2:
            if (n==0){
                cout<<"No books available."<<endl;
            }else{
                cout << "Book Records "<<endl;
                for (int i=0;i<n;i++){
                    cout<<"Book "<<i+1<<endl;
                    cout<<"Book ID:"<<b[i].bookId<<endl;
                    cout<<"Title:"<<b[i].title<<endl;
                    cout<<"Author:" <<b[i].author<<endl;
                    cout<<"Quantity:"<<b[i].quantity<<endl;
                }
            }
            break;
        case 3:{
            int id;
            bool found=false;
            cout<<"Enter Book ID to Search: ";
            cin>>id;
            for (int i=0;i<n;i++) {
                if (b[i].bookId==id){
                    cout<<"Book Found"<<endl;
                    cout<<"Book ID :"<<b[i].bookId<<endl;
                    cout<<"Title   :"<<b[i].title<<endl;
                    cout<<"Author  :"<<b[i].author<<endl;
                    cout<<"Quantity:"<<b[i].quantity<<endl;
                    found=true;
                    break;
                }
            }
            if (found==0)
                cout<<"Book not found"<<endl;

            break;
        }
        case 4:
            cout<<"Thankyou"<<endl;
            return 0;
        default:
            cout<<"Invalid Choice!"<<endl;
        }
    }
    return 0;
}