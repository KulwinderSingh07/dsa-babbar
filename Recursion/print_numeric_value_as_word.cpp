#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void recurence(int num,string arr[]){
    if(num==0){
        return;
    }
    int ans=num%10;
    num=num/10;
    recurence(num,arr);
    cout<<arr[ans]<<" ";
}
int main()
{
    int num=124;
    string arr[5]={"zero","one","two","three","four"};
    recurence(num,arr);
return 0;
}