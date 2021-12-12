//Program to print path for rat in a maze
#include<iostream>
using namespace std;
bool soln[1000][1000];
bool maze[1000][1000];
int m,n;

bool isSafe(int i, int j){
    if(i<m && j<n && maze[i][j]==true)
        return true;
    return false;
}

void printMatrix(){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<soln[i][j]<<" ";
            }
            cout<<endl;
        }
}

bool solveMazeRec(int i, int j){
    if(i == m-1 && j == n-1){//have we reached the destination? 
        if(isSafe(i, j)){ 
            soln[i][j] = 1;   // to build soln matrix
            return true;
        } 
    }
    if(isSafe(i, j))
    {
        soln[i][j]=1;
        if((solveMazeRec(i+1,j))) return true;
            
        else if((solveMazeRec(i,j+1)))
            return true;
        soln[i][j]=0;   // cuz we couldn't find any paths from this position so making it o or false
    }
    return false;

}

void solveMaze(){
   if(solveMazeRec(0,0)) //starting maze from (0,0)
        printMatrix();
    else 
       cout<<"Solution path doesn't exist";
}


int main(){
    //int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }
    solveMaze();
    return 0;
}