//Program to count the number of digits in a number
#include <iostream>
using namespace std;

//Time complexity = O(d) d-no og digits

int countDigits(long num)
{
    if (num == 0)
        return 0;
    return 1+ countDigits( num / 10);
}

int main()
{
    long num;
    cout << "Enter number: ";
    cin >> num;
    cout << "No. of digits = " << countDigits(num);
    return 0;
}