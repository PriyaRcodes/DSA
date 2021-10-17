//Program to find max number of pieces such that lengths of rope fall in given values - a,b,c
#include<iostream>
#include<algorithm>
using namespace std;

int getMaxPieces(int n, int a, int b, int c){
    if(n<=-1)
        return -1;
    if(n==0)
        return 0;
    int maxCuts = max(getMaxPieces(n-a, a,b,c), max(getMaxPieces(n-b,a,b,c), getMaxPieces(n-c,a,b,c)));
    if(maxCuts==-1)
        return -1;
    else
        return maxCuts+1;
}


int main(){
    int n,a,b,c;
    cout<<"Enter values of length of rope(n) and piece lengths a,b,c:\n";
    cin>>n>>a>>b>>c;
    cout<<"Max Pieces that can be cut of the given rope: "<<getMaxPieces(n,a,b,c);
    return 0;
}