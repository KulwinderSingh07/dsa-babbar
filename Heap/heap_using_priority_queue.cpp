#include <bits/stdc++.h>
using namespace std;
int main()
{
  priority_queue<int> pq;
  pq.push(4);
  pq.push(2);
  pq.push(5);
  pq.push(3);

  cout<<"Elemnt at top "<<pq.top()<<endl;
  pq.pop();
  cout<<"Elemnt at top "<<pq.top()<<endl;

  cout<<"Size if queue is "<<pq.size()<<endl;

  if(pq.empty()){
    cout<<"pq is empty"<<endl;
  }else{
    cout<<"pq is not empty"<<endl;
  }

  priority_queue<int,vector<int>,greater<int>> minHeap;
  minHeap.push(4);
  minHeap.push(2);
  minHeap.push(5);
  minHeap.push(3);

  cout<<"Elemnt at top "<<minHeap.top()<<endl;
  minHeap.pop();
  cout<<"Elemnt at top "<<minHeap.top()<<endl;

  cout<<"Size if queue is "<<minHeap.size()<<endl;

  if(minHeap.empty()){
    cout<<"minHeap is empty"<<endl;
  }else{
    cout<<"minHeap is not empty"<<endl;
  }

return 0;
}