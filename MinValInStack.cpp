//Program to print the minimum element in a stack

#include<iostream>
#include<string>
#include<sstream>
#include<stack>
using namespace std;
int getMin(stack<int> s){
    int minVal = s.top();
    while(!s.empty()){
        if(s.top()<minVal){
            minVal = s.top();
        }
        s.pop();
    }
    return minVal;
}

int main(){
    stack<int> s;
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    string word;
    while(!ss.eof()){
        ss>>num;
        s.push(num);
    }
    cout<<"Minimum value in stack is : "<<getMin(s);
    return 0;
}