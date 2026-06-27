#include <iostream>
#include <string>
using namespace std;
struct Employee {
    int id;
    string name;
    string department;
    float salary;
};
int main(){
    Employee e[100];
    int n=0;
    int choice;
    while(true){
        cout<<"Employee Management System"<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display All Employees"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter Employee ID: ";
            cin>>e[n].id;
            cout<<"Enter Name: ";
            cin>>e[n].name;
            cout<<"Enter Department: ";
            cin>>e[n].department;
            cout<<"Enter Salary: ";
            cin>>e[n].salary;
            n++;
            cout<<"Employee Added Successfully."<<endl;
            break;
        case 2:
            if(n==0){
                cout<<"No Employee Records Found."<<endl;
            }else{
                cout<<"Employee Records"<<endl;
                for (int i=0;i<n;i++){
                    cout<<"Employee "<<i+1<<endl;
                    cout<<"Id: "<<e[i].id<<endl;
                    cout<<"Name: "<<e[i].name<<endl;
                    cout<<"Department: "<<e[i].department<<endl;
                    cout<<"Salary: "<<e[i].salary<<endl;
                }
            }
            break;
        case 3:{
            int id;
            bool found=0;
            cout<<"Enter employee Id to search: ";
            cin>>id;
            for(int i=0;i<n;i++) {
                if(e[i].id==id) {
                    cout<<"Employee found"<<endl;
                    cout<<"Id: "<<e[i].id<<endl;
                    cout<<"Name: "<<e[i].name<<endl;
                    cout<<"Department: "<<e[i].department<<endl;
                    cout<<"Salary: "<< e[i].salary<<endl;
                    found=true;
                    break;
                }
            }
            if(found==0)
                cout<<"Employee record not found."<<endl;
            break;
        }
        case 4:
            cout<<"Thankyou"<<endl;
            return 0;
        default:
            cout<<"Invalid input"<<endl;
        }
    }
    return 0;
}