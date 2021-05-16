//Program to delete element from array
#include<iostream>
#define SIZE 50
using namespace std;

int linearSearch(int arr[], int n, int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

void arrayDelete(int arr[], int n, int element){
    int index = linearSearch(arr,n, element);
    if(index==-1){
        cout<<"Element not found!!";
        return;
    }
    for(int i=index+1;i<n;i++){
        arr[i-1] = arr[i];
    }
    n = n-1;
    cout<<"Final array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    int n;
    int element;
    cout<<"What's the size of the array?";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be deleted: ";
    cin>>element;
    arrayDelete(arr,n,element);
    return 0;
}