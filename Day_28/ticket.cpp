#include<iostream>
#include<string>
using namespace std;
struct Ticket {
    int ticketNo;
    string name;
    string destination;
    int seats;
    bool booked;
};
int main() {
    Ticket t;
    t.booked=0;
    int choice=0;
    while (choice!=4){ 
        cout<<"Ticket Booking System"<<endl;
        cout<<"1.Book Ticket"<<endl;
        cout<<"2.Display Ticket"<<endl;
        cout<<"3.Cancel Ticket"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>> choice;
        switch (choice){
        case 1:
            if(t.booked==1){
                cout<<"Ticket is already booked."<<endl;
            } else{
                cout<<"Enter Ticket Number: ";
                cin>>t.ticketNo;
                cout<<"Enter Passenger Name: ";
                cin>>t.name;
                cout<<"Enter Destination: ";
                cin>>t.destination;
                cout<<"Enter Number of Seats: ";
                cin>>t.seats;
                t.booked=true;
                cout<<"Ticket Booked"<<endl;
            }
            break;
        case 2:
            if (t.booked==0){
                cout<<"No Ticket Booked"<<endl;
            } else{
                cout<<"Ticket Details"<<endl;
                cout<<"Ticket Number :"<<t.ticketNo<<endl;
                cout<<"Passenger Name:"<<t.name<<endl;
                cout<<"Destination   :"<<t.destination<<endl;
                cout<<"Seats         :"<<t.seats<<endl;
            }
            break;
        case 3:
            if(t.booked==0){
                cout<<"No Ticket to Cancel"<<endl;
            } else{
                t.booked=false;
                cout<<"Ticket Cancelled"<<endl;
            }
            break;
        case 4:
            cout<<"Thankyou"<<endl;
            return 0;
        default:
            cout<<"Invalid input"<<endl;
        }
    }
    return 0;
}