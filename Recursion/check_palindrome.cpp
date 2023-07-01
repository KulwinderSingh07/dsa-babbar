#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool check_palindrome(string st,int start,int end){
    if(start<end){
        if(st[start]==st[end]){
            return check_palindrome(st,start+1,end-1);
        }
        else{
            return false;
        }
    }
    else{
        return true;
    }
}
int main()
{
    string st="abbbbk";
    int start=0;
    int end=st.length()-1;
    cout<<check_palindrome(st,start,end);
    cout<<endl;
return 0;
}