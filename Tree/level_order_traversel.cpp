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
node* creation_of_tree(node* root){
    int val;
    cout<<"Enter data for input in this tree"<<endl;
    cin>>val;
    root=new node(val);
    if(val==-1){
        return NULL;
    }
    cout<<"Enter data for insertion in left node"<<endl;
    root->left=creation_of_tree(root->left);
    cout<<"Enter data for insertion in right node"<<endl;
    root->right=creation_of_tree(root->right);
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
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left); 
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    
}
void reverse_level_order_traversel(node *root){
     queue<node*> q;
    q.push(root);
    q.push(NULL);
    stack<node*> st;
    while (!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        st.push(temp);
    }
    while (!st.empty())
    {
        if(st.top()!=NULL){
            cout<<st.top()->data<<" ";
        }else{
            cout<<endl;
        }
        st.pop();   
    }
    cout<<endl;
}
int main()
{
    node* root=NULL;
    // 1 3  7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root=creation_of_tree(root);
    level_order_traversel(root);
    reverse_level_order_traversel(root);
return 0;
}