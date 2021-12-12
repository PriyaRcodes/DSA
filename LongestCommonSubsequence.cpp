//Program to find the length of the longest common subsequence between two strings
#include<iostream>
#include<string.h>
using namespace std;
int getLengthOfLCS(string s1, string s2){
    int maxLength=0;
    int dp[s1.length()+1][s2.length()+1];
    memset(dp,0,sizeof(dp));
    
    for(int i=1;i<=s1.length();i++){
        for(int j=1;j<=s2.length();j++){
            if(s1[i-1]==s2[j-1]){
                // cout<<s1[i-1]<<" "<<s2[j-1]<<endl;
                // cout<<dp[i-1][j-1]<<endl;
                dp[i][j] = dp[i-1][j-1] + 1; //adding 1 (which represent the same char in both strings that we just encountered)    
            }
            else{
                //cout<<dp[i][j-1]<<"--"<<dp[i-1][j]<<endl;
                if(dp[i-1][j]>=dp[i][j-1])
                {
                    dp[i][j] = dp[i-1][j];
                }
                    
                else
                    dp[i][j] = dp[i][j-1];
            }
            
            //cout<<dp[i][j]<<"at the ch "<<s1[i-1]<<endl;
            //keeping track of max
            if(dp[i][j]>maxLength)
                maxLength = dp[i][j];
        }
    }
    // cout<<endl<<dp[s1.length()-1][s2.length()-1]<<endl;
    return maxLength;
}
int main(){
    string s1, s2;
    cout<<"Enter 2 words:\n";
    cin>>s1>>s2;
    cout<<"\nLength of longest common subsequence is: \n"<<getLengthOfLCS(s1, s2);
    return 0;
}