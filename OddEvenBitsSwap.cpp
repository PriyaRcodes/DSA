//Program to swap odd and even positioned bits
#include<iostream>
using namespace std;

int swapOddAndEvenBits(int n){
    //Time Complexity: O(1)
    const unsigned int evenconst = 0xAAAAAAAA; //32-bit no. with set bits in even positions
    const unsigned int oddconst = 0x55555555;  //32-bit no. with set bits in odd positions
    
    unsigned int evenbits = n & evenconst; //even bits filter
    unsigned int oddbits = n & oddconst;   //odd bits filter

    evenbits = evenbits>>1; 
    oddbits = oddbits<<1;
    return (evenbits | oddbits);
}

int main(){
    int n;
    cout<<"Enter the number for which you want odd and even bits to be swapped:\n";
    cin>>n;
    cout<<"********RESULT**********\n"<<swapOddAndEvenBits(n);
    return 0;
}