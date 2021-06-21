//Program to find the only odd occurrence
#include <iostream>
#include <vector>
using namespace std;

int findOddOccurrence(vector<int> v, int n){
    int res=0;
    vector<int>::iterator it;
    for( it=v.begin(); it != v.end(); ++it){
        res = res ^ *it;
    }
    return res;
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
    cout<<findOddOccurrence(v,n);
    return 0;
}