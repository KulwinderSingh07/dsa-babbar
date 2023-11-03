#include<bits/stdc++.h>
using namespace std;
bool CycleDetectionDirectedGraph(unordered_map<int,list<int>> adjList,unordered_map<int,bool>&visited,unordered_map<int,bool>& dfsVisited,int node){
    visited[node]=true;

    dfsVisited[node]=true;

    for(auto ngb:adjList[node]){
        if(!visited[ngb]){
            int presence=CycleDetectionDirectedGraph(adjList,visited,dfsVisited,ngb);
            if(presence){
                return true;
            }
        }
        else if(dfsVisited[ngb]){
            return true;
        }
    }

    dfsVisited[node]=false;
    return false;
}

bool CycleDetectionUsingTopoSort(unordered_map<int,list<int>> adjList){
  vector<int> topoSequeunce;
  queue<int> qu;
  int n;
  int count=0;
   unordered_map<int,int> nodeIndegre;
    for(auto i:adjList){
        for(auto j:i.second){
            nodeIndegre[j]++;
        }
}
  for(int i=0;i<n;i++){
    if(nodeIndegre[i]==0){
        qu.push(i);
    }
}


while (!qu.empty())
{
    int front=qu.front();
    count++;

    qu.pop();

    for(auto ngb:adjList[front]){
        nodeIndegre[ngb]--;
        if(nodeIndegre[ngb]==0){
            qu.push(ngb);
        }
    }
}
return count;

}
int main()
{
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsvisited;
    unordered_map<int,list<int>> adjList;
    int n; // the no of vertices
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool ans=CycleDetectionDirectedGraph(adjList,visited,dfsvisited,i);
            if(ans){
                return true;
            }
        }
    }

    if(n!=CycleDetectionUsingTopoSort(adjList)){
        cout<<"Cycle Present";
    }
return 0;
}