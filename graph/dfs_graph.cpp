#include<bits/stdc++.h>
using namespace std;
unordered_map<int,list<int>> caluclateAdjList(vector<vector<int>> edges){

    unordered_map<int,list<int>> adjList;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][1];
        int v=edges[i][2];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    return adjList;
}
void dfs(unordered_map<int,list<int>> adjList,int src,unordered_map<int,bool> &visited,vector<int>& output){
    visited[src]=true;
    output.push_back(src);

        for(auto ngb:adjList[src]){
            if(!visited[ngb]){
                dfs(adjList,ngb,visited,output);
            }
        }
}

int main()
{
    vector<vector<int>> edges;
    int v;
    cout<<"Enter the no of verices:";
    cin>>v;
    edges.push_back({1,2});
    edges.push_back({2,1});
    edges.push_back({2,4});
    edges.push_back({3,4});
    edges.push_back({1,5});

    unordered_map<int,list<int>> adjList=caluclateAdjList(edges);

    vector<int> bfsTraversel;
    unordered_map<int,bool> visited;
    dfs(adjList,0,visited,bfsTraversel);

    for(auto i:bfsTraversel){
        cout<<i<<" ";
    }


return 0;
}