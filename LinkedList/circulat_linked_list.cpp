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
    temp->next=head;
    return;
}
void deletion_node(node* &head,int pos){
    if(head==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    node* temp=head;
    if(pos==1){
        do{
            temp=temp->next;
        }while(temp->next!=head);
        node* deleStore=head;
        head=head->next;
        temp->next=head;
        delete deleStore;
        return;
    }
    int count=1;
    node* prevNode;
    while (temp->next!=NULL)
    {
        if(count==pos){
            prevNode->next=temp->next;
            delete temp;
            break;

        }
        prevNode=temp;
        temp=temp->next;
        count++;
    }
    
}
void print_ll(int n,node* head){
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter the value of no of enteres in linked list : ";
    cin>>n;
    node* head=NULL;
    creation(n,head);
    deletion_node(head,1);
    print_ll(n,head);

return 0;
}