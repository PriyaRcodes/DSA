//Program to find if the sum of digits of a given number
#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if(n<=9)                         //to avoid one extra call where single digit number is divided by 10 and reduced to 0
        return n;
    return n%10 + sumOfDigits(n/10);
}

int sumOfDigitsIterative(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of digits: "<<sumOfDigits(n)<<endl;
    cout<<"Sum of digits calculated the Iterative way: "<<sumOfDigitsIterative(n);
    return 0;
}