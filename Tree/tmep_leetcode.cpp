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
vector<vector<int>> testing_code(node* root){
     queue<node*> q;
        q.push(root);
        q.push(NULL);
        vector<vector<int>> ans;
        vector<int> output;
        while(!q.empty()){
            node* temp=q.front();
            q.pop();
            if(temp==NULL){
                ans.push_back(output);
                output.clear();
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
            if(temp!=NULL){
            output.push_back(temp->data);
            }
        }
        return ans;
}
int main()
{
    node* root=NULL;
    root=creation_of_tree(root);
    vector<vector<int>> ans=testing_code(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}