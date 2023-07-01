#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int power_of(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    if(b%2==0){
        return power_of(a,b/2)*power_of(a,b/2);
    }
    else{
        return a*power_of(a,b/2)*power_of(a,b/2);
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    int result=power_of(a,b);
    cout<<result;
return 0;
}