//Program to reverse the array
#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int temp;
    int left=0;
    int right=n-1;
    while(left<right){
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
    }
    
    //Displaying the reversed array
    for(int i=0;i<n;i++){
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
    reverseArray(arr,n);
    return 0;
}