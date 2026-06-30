#include<iostream>
#include<string>
using namespace std;
void addStudent(int rollNo[],string name[],int age[],float marks[],int &n){
    cout<<"Enter Roll Number: ";
    cin>>rollNo[n];
    cout<<"Enter Name: ";
    cin>>name[n];
    cout<<"Ente Age: ";
    cin>>age[n];
    cout<<"Enter Marks: ";
    cin>>marks[n];
    n++;
    cout<<"Student Added Successfully"<<endl;
}
void displayStudent(int rollNo[],string name[],int age[],float marks[],int n){
    if(n==0){
        cout<<"No Student Records"<<endl;
        return;
    }
    cout<<"\nStudent Details"<<endl;
    for(int i=0;i<n;i++){
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Roll Number: "<<rollNo[i]<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Age: "<<age[i]<<endl;
        cout<<"Marks: "<<marks[i]<<endl;
    }
}
void searchStudent(int rollNo[],string name[],int age[],float marks[],int n){
    int roll;
    bool found=0;
    cout<<"Enter Roll Number: ";
    cin>>roll;
    for(int i=0;i<n;i++){
        if(rollNo[i]==roll){
            cout<<"Student Found"<<endl;
            cout<<"Roll Number: "<<rollNo[i]<<endl;
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Age: "<<age[i]<<endl;
            cout<<"Marks: "<<marks[i]<<endl;
            found=1;
            break;
        }
    }
   if(found==0){
        cout<<"Student Not Found"<<endl;
    }
}
void totalStudents(int n){
    cout<<"Total Students: "<<n<<endl;
}
int main(){
    int rollNo[100];
    string name[100];
    int age[100];
    float marks[100];
    int n=0;
    int choice=0;
    while(choice!=5){
        cout<<"Student Management System"<<endl;
        cout<<"1.Add Student"<<endl;
        cout<<"2.Display Students"<<endl;
        cout<<"3.Search Student"<<endl;
        cout<<"4.Total Students"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            addStudent(rollNo,name,age,marks,n);
            break;
        case 2:
            displayStudent(rollNo,name,age,marks,n);
            break;
        case 3:
            searchStudent(rollNo,name,age,marks,n);
            break;
        case 4:
            totalStudents(n);
            break;
        case 5:
            cout<<"Thankyou"<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;
        }
    }
    return 0;
}