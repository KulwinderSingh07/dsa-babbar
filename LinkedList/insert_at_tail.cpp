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
            cin>>value;
            count++;
            temp=new node(value);
            head=temp;
        }else{
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
int main()
{
    int n;
    cout<<"Enter the value of no of enteres in linked list : ";
    cin>>n;
    node* head=NULL;
    creation(n,head);
    print_ll(n,head);



return 0;
}