#include<bits/stdc++.h>
using namespace std;
void dfs(unordered_map<int,list<int>> adjList,vector<int>& disc,vector<int>& low,vector<bool>& vis,int parent,int& timer,int node,vector<vector<int>>& res){
    disc[node]=low[node]=timer++;
    vis[node]=true;

    for(auto ngb:adjList[node]){
        if(ngb==parent){
            continue;
        }
        if(!vis[ngb]){
            dfs(adjList,disc,low,vis,node,timer,ngb,res);
            low[node]=min(low[node],low[ngb]);
            if(low[ngb]>disc[node]){
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(ngb);
                res.push_back(ans);
            }
        }
        else{
            low[node]=min(low[node],disc[ngb]);
        }
    }
}
int main()
{
    unordered_map<int,list<int>> adjList;
    int n;
    vector<int> disc(n,-1);
    vector<int> low(n,-1);
    vector<bool> vis(n,false);
    vector<int> parent(n,-1);
    int src=0;
    disc[src]=0;
    int timer=0;
    low[src]=0;
    vector<vector<int>> ans;
    
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(adjList,disc,low,vis,-1,timer,i,ans);
        }
    }
return 0;
}