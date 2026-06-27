#include <iostream>
#include <string>
using namespace std;
struct Student {
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
};
int main(){
    Student s;
    cout<<"Marksheet Generation System"<<endl;
    cout<<"Enter Roll Number: ";
    cin>>s.rollNo;
    cout<<"Enter Name: ";
    cin>>s.name;
    s.total=0;
    cout<<"Enter Marks of 5 Subjects:"<<endl;
    for (int i=0;i<5;i++){
        cout<<"Subject " << i + 1 << ": ";
        cin >>s.marks[i];
        s.total+=s.marks[i];
    }
    s.percentage=s.total/5.0;
    cout<<"MARKSHEET"<<endl;
    cout<<"Roll Number : "<<s.rollNo<<endl;
    cout<<"Name: "<<s.name<<endl;

    cout<<"Marks: ";
    for(int i=0;i<5;i++) {
        cout<<s.marks[i]<<" ";
    }
    cout<<endl;
    cout<<"Total:" <<s.total<<endl;
    cout<<"Percentage:"<<s.percentage<<"%"<<endl;
    if (s.percentage>=75)
        cout<<"Division: Distinction"<<endl;
    else if(s.percentage>=60)
        cout<<"Division:First Division"<<endl;
    else if(s.percentage>=45)
        cout<<"Division:Second Division" << endl;
    else if(s.percentage>=33)
        cout<<"Division:Third Division"<<endl;
    else
        cout<<"Result :Fail"<<endl;
    return 0;
}