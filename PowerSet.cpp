//Program to print power set of a given string (all combinations)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void printPowerSet(string str){
    int len = str.length();
    int size = pow(2, len); //calculating size of power set
    for(int i=0;i<size;i++){
        string res="";
        for(int j=0;j<len;j++){
            if((i & (1<<j)) !=0){
                string s(1, str[j]); //converting char to string
                res.append(s);
            }
        }
        cout<<res<<endl;
    }
}


int main(){
    string str;
    cout<<"Enter string:\n";
    cin>>str;
    printPowerSet(str);
    return 0;
}