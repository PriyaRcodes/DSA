//Program to convert Binary to Gary and vice-versa
#include<iostream>
using namespace std;

int binaryToGary(int n){
    //Time complexity: O(n)
    return n ^ (n>>1);
}

int garyToBinary(int n){
    //Time complexity: O(logn)
    int res;
    res = n;
    while(n>0){
        n = n>>1;
        res = res^n;
    }
    return res;
}

int main(){
    int choice;
    int ans,n;
    cout<<"Enter your input number: ";
    cin>>n;
    cout<<"Enter your choice from the options below:\n";
    cout<<"1. Convert Binary to Gary\n";
    cout<<"2. Convert Gary to Binary\n";
    cin>>choice;
    switch(choice){
        case 1:
            ans = binaryToGary(n);
            break;
        case 2:
            ans = garyToBinary(n);
            break;
        default:
            cout<<"Please select a valid option\n";
    }
    cout<<"******RESULT******\n";
    cout<<ans;
    return 0;
}
