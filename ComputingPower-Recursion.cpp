//Program to compute power of a number
#include<iostream>
using namespace std;

long powerEfficient(int n, int pow){
    //Time complexity = O(log(pow))
    //T(n) = T(n/2)+ theta(1)
    if(pow==0)
        return 1;
    long temp;
    temp = powerEfficient(n,pow/2);
    if (pow%2 ==0)
        return temp*temp;
    else
        return temp*temp*n;
}

long power(int n, int pow){
    //Time complexity = O(pow)
    if(pow==0)
        return 1; //any number raised to the power 0 is 1;
    return n* power(n,pow-1); 
}

long powerIterative(int n, int pow){
    int res = 1;
    while(pow--){
        cout<<pow<<" ";
        res = res*n;
    }
    return res;
}

int main(){
    int n,pow;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"What power of "<<n<<" should be computed?\n";
    cin>>pow;
    cout<<"Result: "<<powerEfficient(n,pow);
    return 0;
}