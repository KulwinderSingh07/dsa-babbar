#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,list<int>> adjList;

    unordered_map<int,int> nodeIndegre;
    for(auto i:adjList){
        for(auto j:i.second){
            nodeIndegre[j]++;
        }
}
int n;
queue<int> qu;
for(int i=0;i<n;i++){
    if(nodeIndegre[i]==0){
        qu.push(i);
    }
}

vector<int> topoSequeunce;

while (!qu.empty())
{
    int front=qu.front();
    topoSequeunce.push_back(front);

    qu.pop();

    for(auto ngb:adjList[front]){
        nodeIndegre[ngb]--;
        if(nodeIndegre[ngb]==0){
            qu.push(ngb);
        }
    }
}

for(auto i:topoSequeunce){
    cout<<i<<" ";
}

return 0;
}