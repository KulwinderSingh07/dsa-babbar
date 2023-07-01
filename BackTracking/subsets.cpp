#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void compute(string str,string &output,vector<string> &ans,int i,int j){
    if(i>=str.length()){
        ans.push_back(output);
        // cout<<output<<" ";
        return;
    }
    output[j]=str[i];
    compute(str,output,ans,i+1,j+1);
    compute(str,output,ans,i+1,j);
}
int main()
{
    string str;
    cin>>str;
    vector<string> ans;
    string output(str.length(),0);
    compute(str,output,ans,0,0);
    for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
        cout<<endl;
return 0;
}