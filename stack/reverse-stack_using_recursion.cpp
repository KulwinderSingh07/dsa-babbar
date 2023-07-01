#include<bits/stdc++.h>
using namespace std;
void insert_atBottom(stack<int>&st,int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int temp=st.top();
    st.pop();
    insert_atBottom(st,val);
    st.push(temp);
}
void reverse_stack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int val=st.top();
    st.pop();
    reverse_stack(st);
    insert_atBottom(st,val);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse_stack(st);

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
return 0;
}