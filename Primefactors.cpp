//Program to print the prime factors of a given number
#include<iostream>
using namespace std;

bool isPrime(long num){
    if(num==1)
        return false;
    if(num==2 ||num==3)
        return true;
    if(num%2==0 || num%3==0)
        return false;
    for(long i=5;i*i<=num;i=i+6){
        if(num%i==0 || num%(i+2)==0)
            return false;
    }
    return true;
}

//Naive solution
void naivePrintPF(long number){
    for(long i=2;i<=number;i++){
        if(isPrime(i)){
            while(number%i==0){
                cout<<i<<" ";
                number = number/i;
            }
        }
    }
}

void PrintPrimeFactors(long n){
    for(long i=2;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n>1){
        cout<<n;
    }
    return;
} 

int main(){
    long num;
    cout<<"Enter a number:";
    cin>>num;
    PrintPrimeFactors(num);
    return 0;
}
