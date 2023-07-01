#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int value){
        this->data=value;
        this->next=NULL;
        this->prev=NULL;
    }
    ~node(){
        int value=this->data;
        cout<<"memory freee for node with data "<<value<<endl;
    }
};
void print_LL(node* &head){
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    while (temp!=NULL)
    {
    cout<<temp->data<<" ";
        temp=temp->prev;
    }
    // while (temp!=NULL)
    // {
    //     cout<<temp->data<<"->";
    //     temp=temp->next;
    // }
    
    
    
}
void insertion_at_head(node* &head,int n){
    int count=0;
    int value;
    node* temp;
    while (count!=n)
    {
        if(count==0){
            cout<<"ENter node value";
            cin>>value;
            temp=new node(value);
            head=temp;
            count++;
        }else{
            cout<<"ENter node value";
            cin>>value;
            node* newNode=new node(value);
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
            count++;
        }
    }
    
}
void insert_at_tail(node*& head,int n){
    int count=0;
    node* temp;
    int value;
    while (count!=n)
    {
    if(count==0){
        cout<<"Enter the value of data in node head value at "<<count+1<<" ";
        cin>>value;
        temp=new node(value);
    head=temp;
        count++;
    }else{
        cout<<"Enter the value of data in node "<<count+1<<" ";
        cin>>value;
        node* newTemp=new node(value);
        count++;
        newTemp->prev=temp;
        temp->next=newTemp;
        temp=newTemp;
    }
    } 
    return;
}
void insertAt_pos(node* &head,int pos,int target){
    if(pos==1){
           node * newNode=new node(target);
           newNode->next=head;
           head->prev=newNode;
           head=newNode;
           return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL){
        if(count==pos-1){
            node * newNode=new node(target);
            newNode->prev=temp;
            temp->next->prev=newNode;
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }

}
void deletion_node(node* &head,int pos){
    node* temp=head;
    if(pos==1){
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    int count=1;
    while (temp!=NULL)
    {
        if(count==pos){
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next;
            delete temp;
            break;
        }
        temp=temp->next;
        count++;
        
    }
    

}

int main()
{
    int n;
    cout<<"Enter the no of nodes : ";
    cin>>n;
    node * head=NULL;
    // insertion_at_head(head,n);
    insert_at_tail(head,n);
    // insertAt_pos(head,1,34);
    // cout<<head->data;
    deletion_node(head,1);
    print_LL(head);




return 0;
}