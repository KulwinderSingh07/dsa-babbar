#include<bits/stdc++.h>
using namespace std;
bool CycleDetectionUsingBFS(unordered_map<int,list<int>> adjList,int node){
    queue<int> qu;
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    qu.push(node);
    visited[node]=true;
    parent[node]=-1;

    while (!qu.empty())
    {
        int front=qu.front();
        qu.pop();
        for(auto ngb:adjList[front]){
            if(!visited[ngb]){
                visited[ngb]=true;
                parent[ngb]=front;
            }else if(parent[front]!=ngb){
                return true;
            }
        }
    }
    return false;
}

bool cycleDetectionUsingDFS(unordered_map<int,list<int>> adjList,int node,int parent,unordered_map<int,bool>& visited){
    visited[node]=true;

    for(auto ngb:adjList[node]){
        if(!visited[node]){
            bool presenceCycle= cycleDetectionUsingDFS(adjList,ngb,node,visited);
            if(presenceCycle){
                return true;
            }
        }
        else if(parent!=ngb){
            return true;
        }
    }
    return false;
}
int main()
{
    unordered_map<int,list<int>> adjList;

return 0;
}