#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<pair<int,int>>> adj;

    void addEdge(int from,int to,int distance){
        pair<int,int> temp={to,distance};
        adj[from].push_back(temp);
    }

    void printadj(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<"("<<j.first<<" , "<<j.second<<")";
            }
            cout<<endl;
        }
    }

void topologicalsort(unordered_map<int,bool>&visited,int node,stack<int>& st){
    visited[node]=true;
    for(auto i:adj[node]){
        if(!visited[i.first]){
            topologicalsort(visited,i.first,st);
        }
    }
    st.push(node);
}

void getShrtestpath(int src,vector<int>&distance,stack<int>&st){
    distance[src]=0;
    while (!st.empty())
    {
        int top=st.top();
        st.pop();
        if(distance[top]!=INT_MAX){
            for(auto i:adj[top]){
                if(distance[top]+i.second<distance[i.first]){
                    distance[i.first]=distance[top]+i.second;
                }
            }
        }
    }
}
};

int main()
{
    Graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);
    // g.addEdge(0,1,5)

    //topological sort apply
    int n=6;
    unordered_map<int,bool> visited;
    stack<int> st;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.topologicalsort(visited,i,st);
        }
    }

    int s=1;
    vector<int> distance(n);
    for(int i=0;i<n;i++){
        distance[i]=INT_MAX;
    }
    distance[s]=0;

    g.printadj();
    g.getShrtestpath(s,distance,st);
    for(auto i:distance){
        cout<<i<<" ";
    }



return 0;
}