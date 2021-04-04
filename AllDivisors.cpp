//Program to print all the factors of a number
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printAllFactors(int n){
    vector<int> factors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            factors.push_back(i);
            if(i!=n/i)
                factors.push_back(n/i);
        }
    }
    sort(factors.begin(),factors.end());
    for(auto itr = factors.begin(); itr!=factors.end();itr++){
        cout<<*itr<<" ";
    }
 return;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printAllFactors(n);
    return 0;
}