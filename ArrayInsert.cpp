//Program to insert an element into the array
#include<iostream>
using namespace std;


void insert(int arr[50], int n, int element, int pos){
    if(n==50){
        cout<<"Array is already full!! Insertion failed!";
        return;
    }
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = element;
    n = n+1;
    cout<<"Final array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    int arr[50], n;
    int element,pos;
    cout<<"What's the size of the array?";
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be inserted:";
    cin>>element;
    cout<<"At what position?";
    cin>>pos;
    insert(arr,n,element,pos);
    return 0;
}