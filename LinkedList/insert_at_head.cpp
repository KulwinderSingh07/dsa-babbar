#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class LL_Node{
    public:
    int data;
    LL_Node* next;
    LL_Node(int value){
        this->data=value;
        this->next=NULL;
    }
};
void creation(LL_Node* &head,int n){
    LL_Node* temp;
    head=temp;
    int count=0;
    int value;
    while (count!=n)
    {
      cout<<"Enter "<<count<<" value : ";
      cin>>value;
      LL_Node* temp=new LL_Node(value);
      temp->next=head;
      head=temp;
      count++;
    }
    return;
}
void print_list(LL_Node*& head,int n){
    LL_Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the no of ndes : ";
    cin>>n;
    LL_Node* head=NULL;
    creation(head,n);
    print_list(head,n);
return 0;
}