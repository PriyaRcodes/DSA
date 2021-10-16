//Program to find FactoriLal
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}

int factTailRecursive(int n, int k){
    if(n==0 || n==1)
        return k;
    return factTailRecursive(n-1, k*n);
}

int main()
{
    int n, k=1;
    cin>>n;
    cout<<"Factorial of "<<n<<" using simple recursive fucntion: "<<fact(n)<<endl;
    cout<<"Factorial of "<<n<<" using Tail recursive function: "<<factTailRecursive(n, k);
    return 0;
}