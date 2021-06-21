//Program to find the number of set bits
#include <iostream>
using namespace std;


int brianKernighanAlgo(int n){
    //Time complexity = O(no. of set bits)
    int count=0;
    while(n>0){
        n = n & n-1;
        count++;
    }
    return count;

}

int countSetBits(int n)
{
    //Time complexity = O(no. of bits in n's bin rep)
    int count=0;
    while(n>0){
        if(n&1==1)
            count++;
        n = n>>1;
    }
    return count;
}
int main()
{
    int n;
    int k;
    cout<<"Enter the number\n";
    cin >> n;
    cout<<"No. of set bits using\n1. BrianKernighan algo = "<<brianKernighanAlgo(n)<<endl;
    cout<<"2. My logic = "<<countSetBits(n)<<endl;
    return 0;
}