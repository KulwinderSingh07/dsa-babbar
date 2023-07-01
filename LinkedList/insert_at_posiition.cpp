#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        this->data=value;
        this->next=NULL;
    }
};
void creation(int n,node*& head){
    int count=0;
    int value;
    node* temp;
    while(count!=n){
        if(count==0){
            cout<<"Enter the value at "<<count;
            cin>>value;
            count++;
            temp=new node(value);
            head=temp;
        }else{
            cout<<"Enter the value at "<<count;
            cin>>value;
            node* newTemp=new node(value);
            temp->next=newTemp;
            temp=newTemp;
            count++;
        }
    }
    return;
}
void print_ll(int n,node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}
void insert_at_position(node* &head,int pos,int target){
    if(pos==1){
        node* newNode=new node(target);
        newNode->next=head;
        head=newNode;
        return;
    }
    int count=1;
    node* temp=head;
    while (temp!=NULL)
    {
        if(count==pos-1)
        {
        node* newNode=new node(target);
        newNode->next=temp->next;
        temp->next=newNode;
        break;
        }
        temp=temp->next;
        count++;
    }
}
void delete_node(int pos,node*&head){
    int count=1;
    if(pos==1){
        node* temp=head;
        head=head->next;
        delete temp;
    }
    node* temp=head;
    node* prevTemp;
    while(temp!=NULL){
        if(count==pos){
            prevTemp->next=temp->next;
            temp->next=NULL;
            delete temp;
            break;
        }
        prevTemp=temp;
        temp=temp->next;
        count++;
    }

}
int main()
{
    int n;
    cout<<"Enter the value of no of enteres in linked list : ";
    cin>>n;
    node* head=NULL;
    creation(n,head);
    print_ll(n,head);
    int pos;
    cin>>pos;
    int target;
    cin>>target;
    insert_at_position(head,pos,target);
    delete_node(2,head);
    print_ll(n,head);

return 0;
}