#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node* next;
    node(int val){
        value=val;
        next=NULL;
    }
};
class ll_stack{
    node* head;
    public:
    ll_stack(){
        head=NULL;
    }
    void push(int val){
        node *newNode=new node(val);
        newNode->next=head;
        head=newNode;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack already empty"<<endl;
            return;
        }
        node* deleteNode=head;
        head=head->next;
        delete deleteNode;
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->value;
    }
};
int main()
{
    ll_stack st;
    st.push(23);
   cout<< st.top()<<endl;
   st.pop();
    st.pop();

return 0;
}