#include<bits/stdc++.h>
using namespace std;
class Array_Queue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    Array_Queue(int val){
        size=val;
        arr=new int(size);
        front=-1;
        rear=-1;
    }
    void enqueue(int val){
        if(rear>=size-1){
            cout<<"Queue is Full"<<endl;
        }else{
            rear++;
            arr[rear]=val;
        }
    }
    void dequeue(){
        if(front>rear){
            cout<<"Queue is empty"<<endl;
        }else{
            front++;
        }
    }
};
int main()
{

return 0;
}