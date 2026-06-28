#include<iostream>
#include<string>
using namespace std;
struct BankAccount {
    int accountNo;
    string name;
    float balance;
};
int main(){
    BankAccount acc;
    int choice;
    float amount;
    bool created=false;
    while (true){
        cout<<"Bank Account System"<<endl;
        cout<<"1. Create Account"<<endl;
        cout<<"2. Display Account"<<endl;
        cout<<"3. Deposit Money"<<endl;
        cout<<"4. Withdraw Money"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter Account Number: ";
            cin>>acc.accountNo;
            cout<<"Enter Account Holder Name: ";
            cin>>acc.name;
           cout<<"Enter Initial Balance: ";
            cin>>acc.balance;
            created=true;
            cout<<"Account Created Successfully."<<endl;
            break;
        case 2:
            if(created==0){
                cout<<"No account found."<<endl;
            } else{
                cout<<"Account Details"<<endl;
                cout<<"Account Number : "<<acc.accountNo<<endl;
                cout<<"Name: "<<acc.name<<endl;
                cout<<"Balance: "<<acc.balance<<endl;
            }
            break;
        case 3:
            if (created==0){
                cout<<"Create an account first"<<endl;
            } else{
                cout<<"Enter Amount to Deposit: ";
                cin>>amount;
                acc.balance+=amount;
                cout<<"Amount Deposited Successfully."<<endl;
                cout<<"Current Balance: " <<acc.balance<<endl;
            }
            break;
        case 4:
            if(created==0) {
                cout<<"Create an account first." << endl;
            } else{
                cout<<"Enter Amount to Withdraw: ";
                cin>>amount;
                if (amount<=acc.balance) {
                    acc.balance-=amount;
                    cout<<"Withdrawal Successful."<<endl;
                    cout<<"Remaining Balance: "<<acc.balance<<endl;
                } else{
                    cout<<"Insufficient Balance."<<endl;
                }
            }
            break;
        case 5:
            cout<<"Thankyou"<<endl;
            return 0;
        default:
            cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}