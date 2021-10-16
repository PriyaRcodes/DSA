//Program to print numbers n to 1 using recursion
#include<iostream>
using namespace std;

//Time complexity: O(n)
void printNto1(int n){
    if(n==0)
        return;
    if(n<0)
        cout<<"Number must be greater than 0";
    cout<<n<<" ";
    printNto1(n-1);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNto1(n);
    return 0;
}
