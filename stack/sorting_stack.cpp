#include<bits/stdc++.h>
using namespace std;
void insert_inProper_place(stack<int>&st,int val){
    if(st.empty() || st.top()>=val){
        st.push(val);
        return;
    }
    int temp=st.top();
    st.pop();
    insert_inProper_place(st,val);
    st.push(temp);
}
void sort_stack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int val=st.top();
    st.pop();
    sort_stack(st);
    insert_inProper_place(st,val);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(10);

    sort_stack(st);

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    

return 0;
}