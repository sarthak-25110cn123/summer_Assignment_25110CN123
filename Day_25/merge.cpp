#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter size of first array: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter sorted elements: ";
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    cout<<"Enter size of second array: ";
    cin>>m;
    int arr2[m];
    cout<<"Enter sorted elements: ";
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    int arr3[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n){   //if elements in arr1 is left 
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){   //if elements in arr2 is left 
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    cout<<"Merged Array: ";
    for(int i=0;i<n+m;i++)
        cout<<arr3[i]<<" ";
    return 0;
}