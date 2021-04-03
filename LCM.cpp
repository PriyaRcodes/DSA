//Program to find the LCM of two numbers
#include <iostream>
using namespace std;

int GCD(int a, int b){
    if(b==0)
        return a;
    return GCD(b, a%b);
}

//Using the formula LCM*HCF = product of the two numbers
int LCM(int a, int b){
    int prod = a*b;
    int hcf = GCD(a,b);
    int lcm = prod/hcf;
    cout<<"HCF is:"<<hcf<<endl;
    return lcm; 
}

int main(){
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    int res = LCM(num1,num2);
    cout<<"The LCM of "<<num1<<" and "<<num2<<" is: "<<res;
    return 0;
}
