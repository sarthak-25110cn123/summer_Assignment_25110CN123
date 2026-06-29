#include <iostream>
using namespace std;
void enterArray(int arr[], int &n) {
    cout<<"Enter Size of Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void displayArray(int arr[], int n) {
    if(n==0){
        cout<<"Array is empty"<<endl;
        return;
    }
    cout<<"Array Elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void largestElement(int arr[], int n) {
    if(n==0){
        cout<<"Array is Empty"<<endl;
        return;
    }
    int largest = arr[0];
    for (int i=1;i<n;i++) {        if(arr[i]>largest)
            largest=arr[i];
    }
    cout<<"Largest Element= "<<largest<<endl;
}
void smallestElement(int arr[], int n) {
    if (n==0) {
        cout<<"Array is Empty."<<endl;
        return;
    }
    int smallest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest)
            smallest=arr[i];
    }
   cout<<"Smallest Element= "<<smallest<<endl;
}
void sumArray(int arr[], int n) {
    if(n==0){
        cout<<"Array is Empty."<<endl;
        return;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum= "<<sum<<endl;
}
int main() {
    int arr[100];
    int n=0;
    int choice=0;
    while (choice!=6){
        cout<<"Array Operations System"<<endl;
        cout<<"1.Enter Array" << endl;
        cout<<"2.Display Array" << endl;
        cout<<"3.Find Largest Element" << endl;
        cout<<"4.Find Smallest Element" << endl;
        cout<<"5.Find Sum" << endl;
        cout<<"6.Exit" << endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
        case 1:
            enterArray(arr,n);
            break;
        case 2:
            displayArray(arr,n);
            break;
        case 3:
            largestElement(arr,n);
            break;
        case 4:
            smallestElement(arr,n);
            break;
        case 5:
            sumArray(arr,n);
            break;
        case 6:
            cout<<"Thankyou"<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
        }
    }

    return 0;
}