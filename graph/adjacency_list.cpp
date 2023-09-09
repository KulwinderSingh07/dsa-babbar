#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph
{
private:
    int no_ofNodes;
    map<T,vector<T>> adj_list;
public:
    graph(int val){
        no_ofNodes=val;
    }
    void add_edge(T edge_to,T edge_from,bool direction){
        if(direction==0){  // if direction==0 then it is a un-directed graph
            adj_list[edge_to].push_back(edge_from);
        }
        adj_list[edge_from].push_back(edge_to);
    }
    void print_adj_list(){
        for(auto i:adj_list){
            cout<<i.first<<"->";
            for(int j=0;j<i.second.size();j++){
                cout<<i.second[j]<<",";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the no of nodes";
    cin>>n;
    int m;
    cout<<"Enter the no of edges";
    cin>>m;
    graph<int> gp(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        gp.add_edge(v,u,0);
    }
    gp.print_adj_list();

return 0;
}