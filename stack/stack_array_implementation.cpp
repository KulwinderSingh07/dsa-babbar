#include<bits/stdc++.h>
using namespace std;
class array_stack{
    int *arr;
    int top_pointer;
    int size;
    public:
    array_stack(int size){
        arr=new int(size);
        size=size;
        top_pointer=-1;
    }
    void push(int value){
        if(top_pointer==size-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        top_pointer++;
        arr[top_pointer]=value;
    }
    void pop(){
        if(top_pointer==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        top_pointer--;
    }
    int top(){
        if(top_pointer==-1){
            cout<<"Stack has no value inside it"<<endl;
            return -1;
        }
        return arr[top_pointer];
    }

};
int main()
{
    array_stack st(3);
    st.push(34);
    cout<<st.top()<<endl;
    st.pop();
    st.pop();

return 0;
}