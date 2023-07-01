#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
 bool compare(map<char,int> m1,map<char,int> m2){
        // return m1==m2;
        // for(auto x:m1,m2){
            // if()
        // }
        // for(auto x: m1,m2){
        // }
        // cout<m1("a");
        cout<<m1.at('A');
        return true;
    }
int main()
{
    string s1="ab";
    string s2="eidbaooo";

 map<char,int> m1;
        for(int i=0;i<s1.size();i++){
            m1[s1[i]]++;
        }
        // for(auto x:m1){
            // cout<<x.first<<" "<<x.second<<endl;
        // }
        int window_size=s1.size();
        int start=0;
            map<char,int> m2;
        while(start+window_size<s2.size()){
            int end=start+window_size;
            for(int i=start;i<end;i++){
                m2[s2[i]]++;
            }
            if(compare(m1,m2)){
                cout<<"haiga hiaga";
                return true;
            }
            m2.clear();
        }
        return false;
return 0;
    }