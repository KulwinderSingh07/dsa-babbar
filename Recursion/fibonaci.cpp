#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fibonnaci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonnaci(n-1)+fibonnaci(n-2);
}
int main()
{
    int nth_term;
    cout<<"Enter the nth term to find in fibonnaci series:";
    cin>>nth_term;
    cout<<fibonnaci(8);
    
return 0;
}