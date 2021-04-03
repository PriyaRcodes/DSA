//Program to find trailing zeros in factorial
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num, count=0;
    cout<<"Enter the number:";
    cin>>num;
    //one pair of 2 and 5 contribute to 1 zero, can also be taken as no. of 5s in n!
    //Only multiples of 5 can have 5s as factors
    //Multiples of 5s:  5, 10, 15, 20, 25....
    //No. of 5s in these : 1, 1, 1, 1, 2 
    //floor(n/5) + floor(n/25) + floor(n/125)+...
    for(int i=5;i<=num;i=i*5){
        count += num/i;
    }
    cout<<"No. of trailing zeros:"<<count;
    return 0;
}