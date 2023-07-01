#include<bits/stdc++.h>
using namespace std;
class D_Queue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    D_Queue(int val){
        arr=new int(val);
        size=val;
        front=-1;
        rear=-1;
    }
    void push_front(int val){
            if((front==0&&rear==size-1)||(front!=0 && rear==(front-1)%size)){
                cout<<"Queue is full";
                return;
            }
            else if(front==-1){
                front=rear=0;
            }
            else if(front==0 && rear!=size-1){
                front=size-1;
            }else{
                front--;
            }
            arr[front]=val;
    }
    void push_rear(int val){
        if((front==0 && rear==size-1) || (front!=0 && rear==(front-1)%size)){
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear=size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=val;
    }
    int pop_rear(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
        return ans;
    }
     int pop_front(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }

};
int main()
{
    D_Queue dt(4);
    dt.push_front(2);
    dt.push_rear(23);
    dt.push_rear(23);
    dt.push_rear(23);
    dt.push_rear(23);
    dt.push_rear(23);
    dt.push_rear(23);
    dt.push_rear(23);




return 0;
}