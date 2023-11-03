#include<bits/stdc++.h>
using namespace std;
void topologicalSort(unordered_map<int,list<int>> adjList,stack<int>& st,int node,unordered_map<int,bool>& visited){
    visited[node]=true;
    for(auto ngb:adjList[node]){
        if(!visited[node]){
            topologicalSort(adjList,st,ngb,visited);
        }
    }
    st.push(node);
}
int main()
{
    unordered_map<int,list<int>> adjList;
    stack<int> st;
    unordered_map<int,bool> visited;
    int n;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            topologicalSort(adjList,st,i,visited);
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();        
    }
    

return 0;
}