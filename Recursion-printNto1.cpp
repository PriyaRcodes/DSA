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

void print1toN(int n){
    if(n==0)
        return;
    if(n<0)
        cout<<"Number must be greater than 0";
    print1toN(n-1);
    cout<<n<<" ";
}

int main()
{
    int n, ch;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter your choice from the menu below:\n";
    cout<<"1. Print 1 to "<<n<<endl;
    cout<<"2. Print "<<n<<" to 1"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
            print1toN(n);
            break;
        case 2:
            printNto1(n);
            break;
        default: cout<<"Invalid menu choice!";
    }
    return 0;
}
