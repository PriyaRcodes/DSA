//Program to find if kth bit is set
#include <iostream>
using namespace std;
bool isSet(int n, int k)
{
    //Logic: If we do n AND (number with only kth bit as 1) we can find that bit.
    //number with kth bit set: x*(pow(2,k)) -> x<<k | here x=1 
    if(n & (1<<k-1))
        return true;
    return false;
}
int main()
{
    int n;
    int k;
    cout<<"Enter the number and the kth position\n";
    cin >> n;
    cin >> k; //position calculated from rightmost end
    if (k<=0){
      cout<<"Please enter valid value for k";  
    }
    else if (isSet(n,k))
    cout<<"The bit is set"<<endl;
    else
    cout<<"The bit is not set";
    return 0;
}