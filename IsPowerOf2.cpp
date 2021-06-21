//Program to find if number is a power of 2
#include<iostream>
using namespace std;

bool isPowerOf2(int n){
    //logic: powers of 2 will have only one bit set
    if(!(n & n-1)){
        return true;
    }
    return false;
}


int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    if(isPowerOf2(n))
        cout<<"It is a power of 2";
    else
        cout<<"It is not a power of 2";
    return 0;
}