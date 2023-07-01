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
int main()
{
    node* root=NULL;
        // 1 3  7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root=creation_of_tree(root);
return 0;
}