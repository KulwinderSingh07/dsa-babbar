#include<bits/stdc++.h>
using namespace std;
void topologicalSort(unordered_map<int,list<int>> adjList,unordered_map<int,bool> &visited,int node,stack<int>& st){
    visited[node]=true;

    for(auto ngb:adjList[node]){
        if(!visited[node]){
            topologicalSort(adjList,visited,ngb,st);
        }
    }
    st.push(node);
}
void dfs(unordered_map<int,bool>& visited,unordered_map<int,list<int>> TadjList,int node){
    visited[node]=true;

    for(auto ngb:TadjList[node]){
        if(!visited[ngb]){
            dfs(visited,TadjList,ngb);
        }
    }
}
int main()
{
    unordered_map<int,list<int>> adjList;

    stack<int> st;

    //Topological Sort ordering caluclation

    unordered_map<int,bool> visited;
    int n;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            topologicalSort(adjList,visited,i,st);
        }
    }

    // Transpose the adjList
    unordered_map<int,list<int>> TadjList;

    for(auto vec:adjList){
        visited[vec.first]=false;
        for(auto node:vec.second){
            TadjList[node].push_back(vec.first);
        }
    }

    int stronglyConnectedCount=0;


    // DFS on Transposed Graph
    while (!st.empty())
    {
        int top=st.top();
        st.pop();

        if(!visited[top]){
            stronglyConnectedCount++;
            dfs(visited,TadjList,top);
        }
    }
    

    cout<<"No of stringly connecgted components in the graph is:"<<stronglyConnectedCount<<endl;

return 0;
}