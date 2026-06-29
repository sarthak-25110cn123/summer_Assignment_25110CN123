#include<iostream>
#include<string>
using namespace std;
struct Product{
    int productId;
    string productName;
    int quantity;
    float price;
};
int main(){
    Product p[100];
    int n=0;
    int choice=0;
    while(choice!=4){
        cout<<"Inventory Management System"<<endl;
        cout<<"1. Add Product"<<endl;
        cout<<"2. Display Products"<<endl;
        cout<<"3. Search Product"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter Product ID: ";
            cin>>p[n].productId;
            cout<<"Enter Product Name: ";
            cin>>p[n].productName;
            cout<<"Enter Quantity: ";
            cin>>p[n].quantity;
            cout<<"Enter Price: ";
            cin>>p[n].price;
            n++;
            cout<<"Product Added Successfully"<<endl;
            break;
        case 2:
            if(n==0){
                cout<<"No Products Available"<<endl;
            }
            else{
                cout<<"\nProduct Details"<<endl;
                for(int i=0;i<n;i++){
                    cout<<"\nProduct "<<i+1<<endl;
                    cout<<"Product ID: "<<p[i].productId<<endl;
                    cout<<"Product Name: "<<p[i].productName<<endl;
                    cout<<"Quantity: "<<p[i].quantity<<endl;
                    cout<<"Price: "<<p[i].price<<endl;
                }
            }
            break;
        case 3:{
            int id;
            bool found=0;
            cout<<"Enter Product ID: ";
            cin>>id;
            for(int i=0;i<n;i++){
                if(p[i].productId==id){
                    cout<<"Product Found"<<endl;
                    cout<<"Product ID: "<<p[i].productId<<endl;
                    cout<<"Product Name: "<<p[i].productName<<endl;
                    cout<<"Quantity: "<<p[i].quantity<<endl;
                    cout<<"Price: "<<p[i].price<<endl;
                    found=true;
                    break;
                }
            }
            if(found==0){
                cout<<"Product Not Found"<<endl;
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