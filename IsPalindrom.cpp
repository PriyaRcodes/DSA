//Program to find out whether a number is a palindrome or not
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

//Time complexity = O(d)  d - no. of digits

// vector<int> toArray(long num, int l){
//  vector<int> v(l);
//  cout<<"Length of the number:"<<l<<endl;
//  while(num>0){
//      v.insert(v.begin(),num%10);
//      num = num/10;
//  }
//  return v;
// }

bool isPalindrome(long num){
    long rev=0;
    long n = num;
    int rem;
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    cout<<"Reverse of the number:"<<rev<<endl;
    return rev==n;
}

/* Using vectors and simulataneous traversal
bool isPalindrome(long num){
    int lengthOfNum = floor(log10(num))+1; //finding count of digits
    vector<int> vec = toArray(num, lengthOfNum);

     Printing the number as array
    for(auto ir=vec.begin();ir!=vec.end();ir++){
        cout<<*ir<<" ";
    }

    for(int i=0,j=lengthOfNum-1;i<lengthOfNum/2;i++,j--){
        if(vec[i]!=vec[j]){
            return false;
        }
    }
    return true;
}*/

int main(){
    long num;
    cout<<"Enter a  number: ";
    cin>>num;
    bool result  = isPalindrome(num);
    if(result==true)
        cout<<"It is a palindrome!";
    else
        cout<<"Not a palindrome";
    return 0;
}