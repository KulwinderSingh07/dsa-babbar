#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,list<int>> adjList;
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;

    int src;

    queue<int> qu;
    qu.push(src);
    visited[src]=true;
    parent[src]=-1;

    while (!qu.empty())
    {
        int front=qu.front();
        qu.pop();
        
        for(auto ngb:adjList[front]){
            if(!visited[ngb]){
                visited[ngb]=true;
                parent[ngb]=front;
            }
        }
    }

    int target;
    int currentNode=target;
    vector<int> path;
    path.push_back(currentNode);

    while (currentNode!=src)
    {
        path.push_back(parent[currentNode]);
        currentNode=parent[currentNode];
    }
    
    
return 0;
}