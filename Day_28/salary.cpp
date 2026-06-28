#include <iostream>
using namespace std;
struct Employee {
    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float totalSalary;
};
// Function to calculate salary
void calculateSalary(Employee &e){
    e.hra=0.2*e.basicSalary;   // 20% HRA
    e.da=0.1*e.basicSalary;   // 10% DA
    e.totalSalary=e.basicSalary+e.hra+e.da; // Total salary
}

// Function to display employee details
void displayEmployee(Employee e) {
    cout<<"\nEmployee Id: "<<e.id;
    cout<<"\nName: "<<e.name;
    cout<<"\nBasic Salary: "<<e.basicSalary;
    cout<<"\nHRA: "<<e.hra;
    cout<<"\nDA: " <<e.da;
    cout<<"\nTotal Salary: "<<e.totalSalary<<endl;
}
int main(){
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    Employee emp[n];  
    for(int i=0;i<n;i++){
        cout<<"Enter details of employeen "<<i+1<<endl;
        cout<<"Id:";
        cin>>emp[i].id;
        cout<<"Name: ";
        cin>>emp[i].name;
        cout<<"Basic Salary: ";
        cin>>emp[i].basicSalary;
        calculateSalary(emp[i]);
    }
    cout<<"Employee Salary Details";
    for(int i=0;i<n;i++){
        displayEmployee(emp[i]);
    }
    return 0;
}