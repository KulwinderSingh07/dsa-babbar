#include<bits/stdc++.h>
using namespace std;
class specialStrack{
    stack<int> st;
    int min;
    public:
    void push(int val){
        if(st.empty()){
            st.push(val);
            min=val;
        }else{
            if(min>val){
                st.push(2*val-min);
                min=val;
            }else{
                st.push(val);
            }
        }
    }
    void pop(){
        if(st.empty()){
            cout<<"Stack is empty"<<endl;
        }else{
            if(st.top()>min){
                st.pop();
            }else{
                min=2*min-st.top();
                st.pop();
            }
        }
    }
    int getMin(){
        if(st.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return min;
    }
    int top(){
        if(st.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }else{
        return st.top();
        }
    }
};
int main()
{
    specialStrack st;
    st.push(3);
    st.push(2);
    cout<<st.getMin()<<endl;
    st.push(1);
    cout<<st.getMin()<<endl;
    st.push(6);
    cout<<st.getMin()<<endl;
return 0;
}