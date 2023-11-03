#include<bits/stdc++.h>
using namespace std;
void dfs(unordered_map<int,list<int>> adjList,int node,int parent,int& timer,vector<int>& disc,vector<int>& low,unordered_map<int,bool>& visited,vector<int>&ap){
    visited[node]=true;
    disc[node]=low[node]=timer++;
    int child=0;

    for(auto ngb:adjList[node]){
        if(parent==ngb){
            continue;
        }
        if(!visited[ngb]){
            dfs(adjList,ngb,node,timer,disc,low,visited,ap);
            low[node]=min(low[node],low[ngb]);
            if(low[ngb]>=disc[node] && parent!=-1){
                ap[node]=1;
            }
                child++;
        }else{
            low[node]=min(low[node],disc[ngb]);
        }
    }
    if(parent==-1 && child>1){
        ap[node]=1;
    }
}
int main()
{
    int n=5;
    int e=5;
    vector<pair<int,int>> edges;

    edges.push_back({0,3});
    edges.push_back({3,4});
    edges.push_back({0,4});
    edges.push_back({0,1});
    edges.push_back({1,2});



    unordered_map<int,list<int>> adjList;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int timer=0;
    vector<int> disc(n,-1);
    vector<int> low(n,-1);
    unordered_map<int,bool> visited;
    vector<int>ap(n,0);

    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(adjList,i,-1,timer,disc,low,visited,ap);
        }
    }

    for(int i=0;i<ap.size();i++){
        if(ap[i]!=0){
            cout<<i<<endl;
        }
    }


return 0;
}