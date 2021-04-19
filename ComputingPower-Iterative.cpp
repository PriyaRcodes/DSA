//Program to compute power - iterative method
#include<iostream>
using namespace std;

//efficient soln. Time complexity - O(logn)
long power(int x, int n){
    long res = 1;
    while(n>0){
        if(n&1){ //odd number
            res = res*x;
        }
        x = x*x;
        n=n>>1;    // same as n = n/2;
    }
    return res;
}


int main(){
    int x,n;
    cout<<"Enter a number:";
    cin>>x;
    cout<<"What power should "<<x<<" be raised to?";
    cin>>n;
    cout<<"Result: "<<power(x,n);    
    return 0;

}
