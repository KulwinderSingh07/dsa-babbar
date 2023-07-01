#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="((a+b))";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' ||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
            st.push(s[i]);
        }else{
            if(s[i]==')'){
            bool presence=false;
            while(st.top()!='('){
                if(st.top()=='+' ||st.top()=='-' || st.top()=='*' || st.top()=='/'){
                    presence=true;
                }
                st.pop();
            }
            if(presence){
            st.pop();
            }else{
                cout<<"redundancy present"<<endl;
                return 0;
            }
        }
        }
    }
    cout<<"redundant nahi haiga"<<endl;
return 0;
}