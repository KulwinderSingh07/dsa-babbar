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
void inorder_traversel(node* root){
    if(root==NULL) return;
    inorder_traversel(root->left);
    cout<<root->data<<" ";
    inorder_traversel(root->right);
}
void preorder_traversel(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder_traversel(root->left);
    preorder_traversel(root->right);
}
void postorder_traversel(node* root){
    if(root==NULL) return;
    postorder_traversel(root->left);
    postorder_traversel(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root=NULL;
    root=creation_of_tree(root);
    inorder_traversel(root);
    cout<<endl;
    postorder_traversel(root);
    cout<<endl;
    preorder_traversel(root);
return 0;
}