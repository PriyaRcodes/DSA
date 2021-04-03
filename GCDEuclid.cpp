//Program to find the GCD using Euclid's algorithm.
#include<iostream>
using namespace std;
//Euclid's algorithm idea: HCF of 2 numbers will be the HCF of the smaller number and the difference between the 2 numbers.
//GCD(a,b) = GCD(b,a-b)
//Time complexity O(log(min(a,b)))
int GCD(int a, int b){
    if(b==0)
        return a;
    return GCD(b, a%b);
}
int main(){
    int a,b; //two numbers. We gotta find GCD(a,b) or HCF(a,b)
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    int ans = GCD(a,b);
    cout<<"The GCD of "<<a<<" and "<<b<<" is: "<<ans;
    return 0;
}