#include<iostream>
#include<cmath>
using namespace std;

string getProd(int a, int b){
    double prod=0;
    for(long long i=a;i<=b;i++){
        prod += log10(i);
    }
    cout<<prod<<endl;
    cout<<pow(10, prod)/pow(10,10);
    return "abc";
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<getProd(a,b);
    return 0;
}