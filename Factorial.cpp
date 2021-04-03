//Program to find factorial of a number
#include<iostream>
using namespace std;

//Time complexity :recursive -  T(n) = T(n-1)+theta(1) and aux space = O(n)
//Time complexity : iterative - theta(n) but constant aux space

//Recursive solution  
long long factorial(int num){
    if(num==0)
        return 1;
    return num*factorial(num-1);
}

/* //Iterative solution
long long int factorial(int num){
    int i=1;
    long long int fact=1;
    while(i<=num){
        fact = fact*i;
        i++;
    }
    return fact;
}
*/

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Factorial of the given number: "<<factorial(num);
    return 0;
}