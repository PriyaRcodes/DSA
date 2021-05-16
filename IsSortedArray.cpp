//Program to check if array is sorted(increasing order)
#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
           return false;
        }
    }
    return true;
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
    bool res = isSorted(arr,n);
    if(res)
        cout<<"Array is sorted";
    else
        cout<<"Array ain't sorted";
    return 0;
}