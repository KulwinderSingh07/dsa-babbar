#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* insertintoBST(Node*& root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data>root->data){
        root->right=insertintoBST(root->right,data);
    }else{
        root->left=insertintoBST(root->left,data);
    }
    return root;
}
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        insertintoBST(root,data);
        cin>>data;
    }
}
void level_order_traversel(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* temp=q.front();
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
bool search_inTree(Node* root,int value){
    if(root==NULL){
        return false;
    }
    if(value==root->data){
        return true;
    }
    if(value>root->data){
       return search_inTree(root->right,value);
    }
    return search_inTree(root->left,value);
    
}
bool optimized_search(Node* root,int value){
    Node* temp=root;
    while (temp!=NULL)
    {
        if(root->data==value){
            return true;
        }
        if(value>temp->data){
            temp=temp->right;
        }else{
            temp=temp->left;
        }
    }
    return true;
}
Node* min_finder(Node* root){
    while (root->left)
    {
        root=root->left;
    }
    return root;
    }
    Node* max_finder(Node* root){
    while (root->right)
    {
        root=root->right;
    }
    return root;
    }

Node* deleteFromBST(Node* root,int val){
    if(root==NULL) return root;
    if(root->data==val){
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        if(!root->left && root->right){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        if(!root->right && root->left){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left && root->right){
            int  min=min_finder(root->right)->data;
            root->data=min;
            root->right=deleteFromBST(root->right,min);
            return root;
        }
    }else if(root->data>val){
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}
int main()
{
    Node* root=NULL;
    cout<<"Enter data to create BST"<<endl;
    takeinput(root);
    level_order_traversel(root);
    int element;
    cin>>element;
    // cout<<search_inTree(root,element);
    // cout<<optimized_search(root,element);
        cout<<min_finder(root)->data<<endl;
        cout<<max_finder(root)->data<<endl;

    
return 0;
}