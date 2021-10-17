//Program to find sum of N natural numbers using recursion
#include<iostream>
using namespace std;
int getSumOfnNaturalNos(int n, int k){
    //base case when we have 'n' natural numbers
    if(n==0)
        return k;
    return getSumOfnNaturalNos(n-1, n+k);
}

int main(){
    int n, k=0;
    cin>>n;
    cout<<"Sum of "<<n<<" natural numbers is: "<<getSumOfnNaturalNos(n, k);
    /* Alternative soln 
    cout<<(n*(n+1))/2;
    */
    return 0;
}