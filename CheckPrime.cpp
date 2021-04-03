//Program to check if a number is prime
#include <iostream>
using namespace std;
bool isPrime(int num){
    if(num==1)
        return false;
    if(num==2||num==3)
        return true;
    //Reducing the number of iterations by removing factors of 2 and 3 immediately
    if(num%2==0 || num%3==0){
        return false;
    }
    //In a window of every 5 numbers starting with 5, i+1 and i+3 are even and can be skipped, i+4 will be div by 3 so skipped
    for(int i=5;i*i<=num;i+=6){
        if(num%i==0 || num%(i+2)==0){
            return false;
        }
    }
    return true;
}

//Brute force method
bool checkPrime(int num){
    int i=2;
    if(num==1){
        return false;
    }
    while(i<num){
        if(num%i==0){
            return false;
        }
        i++;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPrime(num))
        cout<<"The entered number is a Prime number!";
    else
        cout<<"The entered number is not a Prime number";    
    return 0;
}