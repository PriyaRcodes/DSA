//Program to count the total set bits from 1 to N
#include<iostream>
using namespace std;

int largestPowOf2(int n){
    //Logic: keep shifting 1 to left while it is less than or equal to n
    int x = 0;
    while((1<<x) <= n)
        x++;
    return x-1;
}

int countSetBitsTillN(int n){
    if(n==0)
        return 0;
    int x = largestPowOf2(n);
    //2^x-1 . x   +   n-2^x+1    +    countSetBits1ToN(n - 2^x)
    int pow2Ofx;
    pow2Ofx = 1<<x;
    return (x * (pow2Ofx/2)) +  (n-pow2Ofx+1)  +  countSetBitsTillN(n-pow2Ofx);
}

int main(){
    int n;
    cout<<"Enter number till which set bits are to be counted: ";
    cin>>n;
    cout<<"Result:\n";
    cout<<countSetBitsTillN(n);
    return 0;
}