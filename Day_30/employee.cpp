#include<iostream>
#include<string>
using namespace std;
int main(){
    int empId[100];
    string name[100];
    string department[100];
    float salary[100];
    int n=0;
    int choice=0;
    while(choice!=4){
        cout<<"Mini Employee Management System"<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display Employees"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter Employee ID: ";
            cin>>empId[n];
            cout<<"Enter Employee Name: ";
            cin>>name[n];
            cout<<"Enter Department: ";
            cin>>department[n];
            cout<<"Enter Salary: ";
            cin>>salary[n];
            n++;
            cout<<"Employee Added Successfully"<<endl;
            break;
        case 2:
            if(n==0){
                cout<<"No Employee Records"<<endl;
            }
            else{
                cout<<"\nEmployee Details"<<endl;
                for(int i=0;i<n;i++){
                    cout<<"\nEmployee "<<i+1<<endl;
                    cout<<"Employee ID: "<<empId[i]<<endl;
                    cout<<"Name: "<<name[i]<<endl;
                    cout<<"Department: "<<department[i]<<endl;
                    cout<<"Salary: "<<salary[i]<<endl;
                }
            }
            break;
        case 3:{
            int id;
            bool found=0;
            cout<<"Enter Employee ID: ";
            cin>>id;
            for(int i=0;i<n;i++){
                if(empId[i]==id){
                    cout<<"Employee Found"<<endl;
                    cout<<"Employee ID: "<<empId[i]<<endl;
                    cout<<"Name: "<<name[i]<<endl;
                    cout<<"Department: "<<department[i]<<endl;
                    cout<<"Salary: "<<salary[i]<<endl;
                    found=1;
                    break;
                }
            }
            if(found==0){
                cout<<"Employee Not Found"<<endl;
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