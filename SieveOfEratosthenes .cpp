//Program to print all prime number less than or equal to n
#include<iostream>
#include<vector>
using namespace std;
void sieve(int n){
    vector<bool> isprime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            //If it is a prime number, mark all its multiples as false
            //As those are composite
            //factors less than i would have been considered already so start with j=i^2
            for(int j=i*i;j<=n;j=j+i){
                isprime[j] = false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isprime[i])
            cout<<i<<" ";
    }

}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Here are the prime numbers:\n";
    sieve(n);
    return 0;
}