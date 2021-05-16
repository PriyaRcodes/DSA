//Program to find the Second Largest in array
#include<iostream>
using namespace std;

int secondLargest(int arr[], int n){
    int res = -1;
    int largest = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i]<arr[largest]){
            if(res==-1|| arr[i]>arr[res])
                res = i;
        }
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = secondLargest(arr,n);
    if(res==-1)
        cout<<"Second largest doesn't exist";
    else
        cout<<"The second largest in the array: "<<arr[res];
    return 0;
}