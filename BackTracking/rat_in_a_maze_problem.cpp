#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool turn_possible(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>> maze){
    if((x>=0 && x<n)&&(y>=0 && y<n)&&(visited[x][y]==0)&&(maze[x][y]==1)){
        return true;
    }
    else{

    return false;
    }

}
void calculate_path(vector<vector<int>> &m,int n,int x,int y,vector<vector<int>> visited,vector<string> &ans,string path){
      if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        int newx=x+1;
        int newy=y;
        if(turn_possible(newx,newy,n,visited,m)){
            path.push_back('D');
            calculate_path(m,n,newx,newy,visited,ans,path);
            path.pop_back();
        }
        
         newx=x;
         newy=y-1;
        if(turn_possible(newx,newy,n,visited,m)){
            path.push_back('L');
            calculate_path(m,n,newx,newy,visited,ans,path);
            path.pop_back();
        }
        
        newx=x-1;
         newy=y;
        if(turn_possible(newx,newy,n,visited,m)){
            path.push_back('U');
            calculate_path(m,n,newx,newy,visited,ans,path);
            path.pop_back();
        }
        
         newx=x;
         newy=y+1;
        if(turn_possible(newx,newy,n,visited,m)){
            path.push_back('R');
            calculate_path(m,n,newx,newy,visited,ans,path);
            path.pop_back();
        }
        visited[x][y]=0;
}
int main()
{
    vector<vector<int>> maze={{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};
    int x=0;
    int y=0;
     vector<vector<int>> visited(4,vector<int>(4,0));
    vector<string> ans;
    string path;
    calculate_path(maze,4,x,y,visited,ans,path);
    // cout<<ans.size();
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        cout<<endl;
    }
return 0;
}