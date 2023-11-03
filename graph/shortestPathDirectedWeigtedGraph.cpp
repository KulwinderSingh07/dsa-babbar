#include<bits/stdc++.h>
using namespace std;
void topologicalSort(unordered_map<int,list<pair<int,int>>> adjList,unordered_map<int,bool>& visited,stack<int>& st,int node){
    visited[node]=true;

    for(auto ngb:adjList[node]){
        if(!visited[ngb.first]){
            topologicalSort(adjList,visited,st,ngb.first);
        }
    }
    st.push(node);
}
int main()
{
    unordered_map<int,list<pair<int,int>>> adjList;
    unordered_map<int,bool> visited;
    int n;
    stack<int> st;
    int src;
    for(int i=0;i<n;i++){
        if(!visited[src]){
            topologicalSort(adjList,visited,st,src);
        }
    }

    vector<int> distance(n,INT_MAX);
    distance[src]=0;
    while (!st.empty())
    {
        int top=st.top();
        st.pop();
        if(distance[top]!=INT_MAX){
        for(auto ngb:adjList[top]){
            if(distance[top]+ngb.second<distance[ngb.first]){
                distance[ngb.first]=distance[top]+ngb.second;
            }
        }
        }
    }

    for(auto val:distance){
        cout<<val<<" ";
    }
    
    


return 0;
}