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
node* looppresence(node* head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=NULL && slow!=fast);
    return slow;
}
node* loop_node_detecter(node* head,node* fast){
    node* slow=head;
    do{
        slow=slow->next;
        fast=fast->next;
    }while(slow->next!=fast->next);
    return fast;
}
int main()
{
    node* head=new node(2);
    node* n2=new node(23);
    node* n3=new node(21);
    node* n4=new node(25);
    node* n5=new node(5);
    node* n6=new node(7);
    head->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n3;
   node* fast_pointer= looppresence(head);
//    cout<<fast_pointer->data;
    if(fast_pointer!=NULL){
        node * loop_point_node=loop_node_detecter(head,fast_pointer);
        cout<<loop_point_node->data;
        loop_point_node->next=NULL;
        // cout<<loop_point_node->next;
    }else{
        cout<<"No loop is present inside linked list";
    }

//      node* checker_pointer= looppresence(head);
//    cout<<checker_pointer->data;
//     if(checker_pointer!=NULL){
//         node * loop_point_node=loop_node_detecter(head,fast_pointer);
//         loop_point_node->next=NULL;
//     }else{
//         cout<<"No loop is present inside linked list";
//     }

return 0;
}