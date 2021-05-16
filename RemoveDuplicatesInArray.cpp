//Program to remove duplicates in Array
#include<iostream>
#include<algorithm>
using namespace std;

void removeDuplicates(int arr[], int n){
    int res=1;  //to keep track of distinct elements
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]) //different from last found distict element
        {
            arr[res] = arr[i];
            res++;
        }
    }
    
    //Displaying the distinct array
    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
    }
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
    sort(arr,arr+n);
    removeDuplicates(arr,n);
    return 0;
}