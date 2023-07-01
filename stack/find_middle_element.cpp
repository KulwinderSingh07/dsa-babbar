#include<bits/stdc++.h>
using namespace std;
void remove(int middle,stack<int>& st,int count){
    // cout<<count<<endl;
    if(count==middle){
        st.pop();
        return;
    }
    int val=st.top();
    st.pop();
    count=count+1;
    remove(middle,st,count);
    st.push(val);
}
int main()
{
    stack<int> st;
    int n;
    cout<<"Enter the value of size of stack"<<endl;
    cin>>n;
    int middle;
    int count;
    if(n%2==0){
        middle=n/2;
        count=0;
    }else{
        middle=((n+1)/2);
        count=1;
    }
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    remove(middle,st,count);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
return 0;
}