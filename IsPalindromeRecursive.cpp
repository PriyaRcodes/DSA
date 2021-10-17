//Program to find if the given word is palindrome using recursion
#include<iostream>
using namespace std;
bool isPalindrome(string str, int start, int end){
    if(start>=end)
        return true;
    return (str[start] == str[end]) && isPalindrome(str, start+1, end-1); //recursive call happens only when first part of the condition is true
}

int main(){
    string str;
    cout<<"Enter the word: ";
    cin>>str;
    int l = str.length();
    if(isPalindrome(str, 0, l-1))
        cout<<"It is a Palindrome!";
    else    cout<<"It is not a Palindrome";
    return 0;
}