//Program to find the only two odd occurrences
#include <iostream>
#include <vector>
using namespace std;

void findOddOccurrence(vector<int> v, int n){
    int num1=0, num2=0;  //The two numbers that occur odd no. of times
    int xor_result=0;
    for(int i=0;i<n;i++){
        xor_result = xor_result^ v[i];
    }
    //Logic: we can split the array into two grp such that one num falls in each group
    //Then xor on the two sub arrays will give the respective odd occurrences

    int ans = xor_result & (~(xor_result-1)); //AND of xor and -xor

    for(int j=0;j<n;j++){
         if ((v[j] & ans) != 0) 
                num1 = num1 ^ v[j]; 
        else
                num2 = num2 ^ v[j]; 

    }
    cout<<"Result:\n";
    cout<<num1<<" "<<num2;
}

int main(){
    int n, ele;
    cout<<"Enter size\n";
    cin>>n;
    vector<int> v;
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"The only number that's occurring odd no. of times:\n";
    findOddOccurrence(v,n);
    return 0;
}