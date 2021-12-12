//Program to print all subsequences of a string, same method can be used to generate all subsets of a set or the power set
#include<iostream>
using namespace std;

void printSubsequence(string str, string subseq, int i){
    if(i==str.length()){
        cout<<subseq<<endl;
        return;
    }
    printSubsequence(str, subseq, i+1);
    printSubsequence(str, subseq + str[i], i+1);
}

int main(){
    string str;
    cin>>str;
    printSubsequence(str,"", 0);
    return 0;
}

