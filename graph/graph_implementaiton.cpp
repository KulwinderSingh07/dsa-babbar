#include <bits/stdc++.h>
using namespace std;
int main()
{
  int no_vertexes,no_edges;
  cout<<"Enter the no of vertexes:";
  cin>>no_vertexes;
  cout<<"Enter the no of edges:";
  cin>>no_edges;
  int adjacency_matrix[no_vertexes+1][no_vertexes+1];
  for(int i=0;i<=no_vertexes;i++){
    for(int j=0;j<=no_vertexes;j++){
        adjacency_matrix[i][j]=0;
    }
  }
  for(int i=0;i<no_edges;i++){
    int ver_from,ver_to;
    cout<<"Enter the value of vertex from where edge originates:";
    cin>>ver_from;
    cout<<"Enter the value of vertex where edge is destined:";
    cin>>ver_to;
    adjacency_matrix[ver_from][ver_to]=1;
  }
  for(int i=0;i<=no_vertexes;i++){
    for(int j=0;j<=no_vertexes;j++){
       cout<<adjacency_matrix[i][j]<<" ";
    }
    cout<<endl;
  }


return 0;
}