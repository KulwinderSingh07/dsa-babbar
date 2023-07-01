#include<bits/stdc++.h>
using namespace std;
class Circular_Queue{
    int val;
    int front;
    int rear;
    int size;
    int *arr;
    public:
    Circular_Queue(int size){
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void enqueue(int val){
        if((front==0 && rear==size-1)||((rear==front-1)%(size))){
            cout<<"Queue is Full"<<endl;
            return;
        }else if(front==-1 && rear==-1){
            rear=front=0;
        }else{
            rear++;
        }
        arr[rear]=val;
    }
    void dequeue(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if(front==rear){
            front=rear=-1;
        }else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }
};
int main()
{
    Circular_Queue qu(4);
    qu.enqueue(20);
    qu.enqueue(10);
    qu.enqueue(2);
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();



return 0;
}