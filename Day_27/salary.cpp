#include <iostream>
#include <string>
using namespace std;
struct Employee {
    int id;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;
};
int main(){
    Employee e[100];
    int n=0;
    int choice;
    while (true){
        cout<<"Salary Management System"<<endl;
        cout<<"1. Add Employee Salary"<<endl;
        cout<<"2. Display All Records"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Exit"<< endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
        case 1:
            cout<<"Enter Employee ID: ";
            cin>>e[n].id;
            cout<<"Enter Employee Name: ";
            cin>>e[n].name;
            cout<<"Enter Basic Salary: ";
            cin>>e[n].basicSalary;
            cout<<"Enter Bonus: ";
            cin>>e[n].bonus;
            e[n].totalSalary=e[n].basicSalary+e[n].bonus;
            n++;
            cout<<"Employee Salary Record Added Successfully."<<endl;
            break;
        case 2:
            if(n==0){
                cout<<"No Records Found."<<endl;
            }
            else{
                cout<<"Employee Salary Records"<<endl;
                for (int i=0;i<n;i++){
                    cout<<"Employee "<<i+1<<endl;
                    cout<<"ID: "<<e[i].id<<endl;
                    cout<<"Name: "<<e[i].name<<endl;
                    cout<<"Basic Salary: "<<e[i].basicSalary<<endl;
                    cout<<"Bonus: " <<e[i].bonus<<endl;
                    cout<<"Total Salary: "<<e[i].totalSalary<<endl;
                }
            }
            break;
        case 3:{
            int id;
            bool found=false;
            cout<<"Enter Employee ID: ";
            cin >> id;
            for (int i=0;i<n;i++){
                if (e[i].id==id){
                    cout<<"Employee Found"<<endl;
                    cout<<"Id: "<<e[i].id<<endl;
                    cout<<"Name: "<<e[i].name<<endl;
                    cout<<"Basic Salary: "<<e[i].basicSalary<<endl;
                    cout<<"Bonus: "<<e[i].bonus<<endl;
                    cout<<"Total Salary: "<<e[i].totalSalary<<endl;
                    found=true;
                    break;
                }
            }
            if (found==0)
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