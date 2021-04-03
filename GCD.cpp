//Program to find the GCD using Brute force algorithm.
#include<iostream>
using namespace std;
int getHCF(int a, int b){
    //If we start from the min of the two numbers and find a factor that divides both, then that will be the 'highest' common factor dividing the two numbers
    int hcf = min(a,b);
    while(hcf>0){
        if(a % hcf == 0 && b % hcf == 0){
            return hcf;
        }
        hcf--;
    }
    return 1; //I could also use a break inside the if condition and return res which would have become 1 by now.
}
int main(){
    int a,b; //two numbers. We gotta find GCD(a,b) or HCF(a,b)
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    int ans = getHCF(a,b);
    cout<<"The HCF of "<<a<<" and "<<b<<" is: "<<ans;
    return 0;
}