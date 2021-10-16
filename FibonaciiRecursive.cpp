//Program to print N Fibonacii numbers using recursive function and iterative solution
#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1)
        return n;
    return fibo(n-1) + fibo(n-2);
}

int main(){

    int n;
    cin>>n;
    for(int k=0;k<n;k++){
        cout<<fibo(k)<<" ";
    }

    //iterative solution
    int fib[n+2];
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<=n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    cout<<"\nPrinting Fibonacii numbers using iterative solution:\n";
    for(int j=0;j<n;j++){
        cout<<fib[j]<<" ";
    }
    return 0;
}