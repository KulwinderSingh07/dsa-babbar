#include<bits/stdc++.h>
using namespace std;
bool bfs(vector<vector<int>> graph, int s, int t,int n)
{
    vector<bool> visited(n);
    vector<int>parent(n);

    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v = 0; v < n; v++) {
            if (visited[v] == false && graph[u][v] > 0) {
                if (v == t) {
                    parent[v] = u;
                    return true;
                }
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the number of edges:";
    cin>>n;
    vector<vector<int>> graph(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int val;
            cout<<"Enter the value of edge from "<<i<<" to "<<j;
            cin>>val;
            graph[i][j]=val;
        }
    }
    vector<bool> visited(n);




return 0;
}