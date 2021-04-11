//Program to print all the factors of a number
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void efficientPrintDivisors(int num){
    int i;
    cout<<"All divisors/factors of the given number\n";
    for(i=1;i*i<num;i++){          //includes of 1
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    for(;i<=num;i++){            //includes num
        if(num%i==0)
            cout<<i<<" ";
    }
}

void printAllFactors(int n){
    vector<int> factors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            factors.push_back(i);
            if(i!=n/i)
                factors.push_back(n/i);
        }
    }
    sort(factors.begin(),factors.end()); //This takes O(nlogn) which is more than O(sqrt(n))
    for(auto itr = factors.begin(); itr!=factors.end();itr++){
        cout<<*itr<<" ";
    }
 return;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    //printAllFactors(n);
    efficientPrintDivisors(n);
    return 0;
}