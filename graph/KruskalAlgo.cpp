#include<bits/stdc++.h>
using namespace std;
bool mycompare(vector<int>&a ,vector<int>&b){
    return a[2]<b[2];
}

int findParet(vector<int>& parent,int node){
    if(parent[node]==node){
        return node;
    }
    return parent[node]=findParet(parent,parent[node]);
}

void unionSet(int u,int v,vector<int>& rank,vector<int> parent){
    u=findParet(parent,u);
    v=findParet(parent,v);

    if(rank[u]<rank[v]){
        parent[u]=v;
    }
    else if(rank[v]<rank[u]){
        parent[v]=u;
    }
    else{
        parent[v]=u;
        rank[u]++;
    }
}

int main()
{   
    int n;
    vector<int> parent;
    vector<int> rank;
    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }

    vector<vector<int>> edges;
    sort(edges.begin(),edges.end(),mycompare);
    int minWeigt=0;

    for(int i=0;i<edges.size();i++){
        int u=findParet(parent,edges[i][0]);
        int v=findParet(parent,edges[i][1]);
        int w=edges[i][2];
        
        if(u!=v){
        minWeigt+=w;
            unionSet(u,v,rank,parent);
        }
    }


return 0;
}