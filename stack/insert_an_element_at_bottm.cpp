#include<bits/stdc++.h>
using namespace std;
void insert_atBottom(stack<int>& st,int target){
    if(st.empty()){
        st.push(target);
        return;
    }
    int top_element=st.top();
    st.pop();
    insert_atBottom(st,target);
    st.push(top_element);
}
int main()
{
    stack<int> st;
    int n;
    cout<<"Enter the size of stack";
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    int target;
    cout<<"Enter the element to insert at bottom";
    cin>>target;
    insert_atBottom(st,target);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
return 0;
}