#include <bits/stdc++.h>
using namespace std;
// class queue_def{
//     vector<int> arr;
//     int front;
//     int rear;
//     public:
//     queue(){
//         front=-1;
//         rear=-1;
//     }
//     void push(int val){
//         if(rear==-1){
//             arr.push_back(val);
//             from=0;
//             rear=0;
//             return;
//         }else{
//             arr.push(val);
//             rear++;
//         }
//     }
//     void pop(){
//         if(front==-1 || front>rear){
//             return;
//         }else{
//             arr.erase(arr.begin(),arr.end());
//             rear--;
//             if(rear==-1){
//                 front=-1;
//             }
//         }
//     }
//     bool isempty(){
//         if(arr.size()==0) return true;
//         else return false;
//     }
//     int front_def(){
//         return arr[front];
//     }
// };
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
//   for(int i=0;i<=no_vertexes;i++){
//     for(int j=0;j<=no_vertexes;j++){
//        cout<<adjacency_matrix[i][j]<<" ";
//     }
//     cout<<endl;
//   }

int status[no_vertexes+1];
for(int i=0;i<=no_vertexes;i++){
    status[i]=1;
}

int starting_vertex;
cout<<"Enter the starting vertex";
cin>>starting_vertex;


queue<int> qu;
qu.push(starting_vertex);

status[starting_vertex]=2;

while(!qu.empty()){
    int v;
    v=qu.front();
    status[v]=3;
    cout<<v<<" ";
    qu.pop();
    for(int i=0;i<=no_vertexes;i++){
        if(adjacency_matrix[v][i]!=0 && status[i]==1){
            qu.push(i);
            status[i]=2;
        }
    }
}
return 0;
}