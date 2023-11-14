#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,list<pair<int,int>>> adjList;
    int n;
    vector<int> distance(n,INT_MAX);

    int src=0;
    distance[src]=0;

    set<pair<int,int>> st;  // we can use priority queue insteead of set
    st.insert({0,src});
    
    while (!st.empty())
    {
        pair<int,int> node=*(st.begin());
        int dis=node.first;
        int u=node.second;

        st.erase(st.begin());

        for(auto ngbNode:adjList[u]){
            if(dis+ngbNode.second<distance[ngbNode.first]){
                auto record=st.find({distance[ngbNode.first],ngbNode.first});
                if(record!=st.end()){
                    st.erase(record);
                }
                distance[ngbNode.first]=dis+ngbNode.second;
                st.insert({distance[ngbNode.first],ngbNode.first});
            }
        }
    }

    for(auto data:distance){
        cout<<data<<" ";
    }
    
return 0;
}