#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> key(n,INT_MAX);
    vector<bool> mst(n,false);
    vector<int> parent(n,-1);

    unordered_map<int,list<pair<int,int>>> adjList;

    for(int i=0;i<n;i++){

        int min_val=INT_MAX;
        int v;
        for(int k=0;k<n;k++){
            if(!mst[k] && min_val<key[k]){
                v=k;
                min_val=key[k];
            }
        }

        mst[v]=true;

        for(auto j:adjList[v]){
            if(!mst[j.first] && j.second<key[j.first]){
                key[j.first]=j.second;
                parent[j.first]=v;
            }
        }
    }

    vector<pair<pair<int,int>,int>> ans;
    for(int i=0;i<n;i++){
        ans.push_back({{parent[i],i},key[i]});
    }
    ans.erase(ans.begin());


return 0;
}