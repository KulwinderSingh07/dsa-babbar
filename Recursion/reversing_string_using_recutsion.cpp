// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void reverse_string(string &st,int start,int end){
//     if(start>end){
//         return ;
//     }
//     swap(st[start],st[end]);
//     reverse_string(st,start+1,end-1);
// }
// int main()
// {
//     string st="laddiaulakh";
//     int start=0;
//     int size=st.length();
//     // int end=size-1;
//     reverse_string(st,start,size-start-1);
//     cout<<st;
//     cout<<endl;
// return 0;
// }
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverse_string(string &str,int start,int end){
    if(start>end){
        return;
    }
    swap(str[start],str[end]);
    return reverse_string(str,start+1,end-1);

}
int main()
{
    vector<int> stringhaiga;
    stringhaiga.push_back(3);
   cout<< stringhaiga.back();
    string str;
    cin>>str;
    reverse_string(str,0,str.size()-1);
    cout<<str;
return 0;
}