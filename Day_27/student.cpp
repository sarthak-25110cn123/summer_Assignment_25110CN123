#include <iostream>
#include <string>
using namespace std;
struct Student{
    int rollno;
    string name;
    int age;
    float marks;
};
int main(){
    Student s[100];
    int n=0;
    int choice;
    while(true){
        cout<<"Student Record Management System"<<endl;
        cout<<"1.Add atudent"<<endl;
        cout<<"2.Display all atudents"<<endl;
        cout<<"3.search student"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter roll number: ";
            cin>>s[n].rollno;
            cout<<"Enter name: ";
            cin>>s[n].name;
            cout<<"Enter age: ";
            cin>>s[n].age;
            cout<<"Enter Marks: ";
            cin>>s[n].marks;
            n++;
            cout<<"Student record added successfully";
            break;
        case 2:
            if(n==0){
                cout<<"No Records Found."<<endl;
            }else{
                cout<<"Student Records"<<endl;
                for(int i=0;i<n;i++){
                    cout<<"Student"<<i+1<<endl;
                    cout<<"Roll No:"<< s[i].rollno<<endl;
                    cout<<"Name:"<<s[i].name<<endl;
                    cout<<"Age:"<<s[i].age<<endl;
                    cout<<"Marks:"<<s[i].marks<<endl;
                }
            }
            break;
        case 3:{
            int roll;
            bool found=false;
            cout<<"Enter Roll Number to Search: ";
            cin>>roll;
            for (int i = 0; i < n; i++) {
                if (s[i].rollno == roll) {
                    cout<<"Student Found";
                    cout <<"Roll No " << s[i].rollno << endl;
                    cout <<"Name: " << s[i].name << endl;
                    cout <<"Age: " << s[i].age << endl;
                    cout <<"Marks: " << s[i].marks << endl;
                    found=true;
                    break;
                }
            }
            if(found==0)
                cout<<"Student Record Not Found."<<endl;
            break;
        }
        case 4:
            cout<<"Thankyou";
            return 0;
        default:
            cout<<"Invalid Choice!";
        }
    }
}