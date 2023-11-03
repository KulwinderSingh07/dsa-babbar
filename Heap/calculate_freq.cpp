#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    map<int,int> mp;
    vector<int> arr={1,3,23,3,42,132,3};
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}