#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* creation_using_level_order(node* root){
    cout<<"Enter data for root node";
    int val;
    cin>>val;
    root=new node(val);
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {
        node* temp=q.front();
        q.pop();
        int val;
        cout<<"Enter value for left node of "<<temp->data;
        cin>>val;
        if(val!=-1){
            temp->left=new node(val);
            q.push(temp->left);
        }
        cout<<"Enter value for right node of "<<temp->data;
        cin>>val;
        if(val!=-1){
            temp->right=new node(val);
            q.push(temp->right);
        }
    }
    return root;
}
void level_order_traversel(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        if(temp!=NULL)
        cout<<temp->data<<" ";
    }
}

int main()
{
    node* root=NULL;
   root=creation_using_level_order(root);
   cout<<endl;
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    level_order_traversel(root);

return 0;
}