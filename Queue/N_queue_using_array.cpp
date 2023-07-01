#include<bits/stdc++.h>
using namespace std;
class NQueue{
    vector<int> front;
    vector<int> rear;
    vector<int> next;
    vector<int> arr;
    int freespace;
public:
    // Initialize your data structure.
    NQueue(int n, int s){
        front=vector<int>(n,-1);
        rear=vector<int>(n,-1);
        next=vector<int>(s);
        for(int i=0;i<s;i++){
            next[i]=i+1;
        }
        next[s-1]=-1;
        freespace=0;
        arr=vector<int>(s);
        // for(int i=0;i<n;i++){
        //     cout<<front[i]<<" "<<rear[i]<<"  ";
        // }
        // cout<<endl;
        // for(int i=0;i<s;i++){
        //     cout<<next[i]<<" ";
        // }
        // cout<<endl;

    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        if(freespace==-1){
            return false;
        }
        int index=freespace;
        arr[index]=x;
        freespace=next[index];
        if(front[m-1]==-1){
            front[m-1]=index;
        }else{
            next[rear[m-1]]=index;
        }
        next[index]=-1;
        rear[m-1]=index;
        return true;
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        if(front[m-1]==-1){
            return -1;
        }
        int index=front[m-1];
        front[m-1]=next[index];
        next[index]=freespace;
        freespace=index;
        return arr[index];
    }
};
int main()
{
    NQueue nq(3,6);
    nq.enqueue(34,1);
    cout<<nq.dequeue(1);

return 0;
}