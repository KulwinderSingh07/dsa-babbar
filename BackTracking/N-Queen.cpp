#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(int board[][20],int i,int j,int n){
    int xindex=i;
    int yindex=j;
    while(xindex>=0){
        if(board[xindex][j]==1){
            return false;
        }
        xindex--;
    }
    xindex=i;
    yindex=j;
    while ((xindex>=0)&&(yindex>=0))
    {
        if(board[xindex][yindex]==1){
            return false;
        }
        xindex--;
        yindex--;
    }
    xindex=i;
    yindex=j;
    while ((xindex>=0)&&(yindex<n))
    {
        if(board[xindex][yindex]==1){
            return false;
        }
        xindex--;
        yindex++;
    }
    return true;
    
}
bool solve(int board[][20],int index,int n){
    if(index==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    for(int j=0;j<n;j++){
        if(isPossible(board,index,j,n)){
            board[index][j]=1;
        bool success=solve(board,index+1,n);
        if(success){
            return true;
        }
            board[index][j]=0;
        }
    }
    return false;

}
int main()
{
    int board[20][20]={0};
    int n;
    cin>>n;
    solve(board,0,n);

return 0;
}