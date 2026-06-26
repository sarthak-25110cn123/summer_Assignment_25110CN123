#include <iostream>
using namespace std;
int main(){
    int pin=1234,enteredPin;
    int choice=0;
    float balance=10000,amount;
    cout<<"===== ATM Simulation ====="<<endl;
    cout<<"Enter PIN: ";
    cin>>enteredPin;
    if (enteredPin != pin){
        cout<<"Incorrect PIN!";
        return 0;
    }
    while(choice!=4){
        cout<<" MENU "<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
            case 1:
                cout<<"Current Balance: Rs. "<<balance<<endl;
                break;
            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                balance+=amount;
                cout<<"Amount Deposited Successfully!"<<endl;
                break;
            case 3:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                if (amount<=balance){
                    balance-=amount;
                    cout<<"Please collect your cash."<<endl;
                    cout<<"Remaining Balance: Rs. "<<balance<<endl;
                } else{
                    cout<<"Insufficient Balance!"<<endl;
                }
                break;
            case 4:
                cout<<"Thank you for using the ATM!"<<endl;
                break;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }
    return 0;
}