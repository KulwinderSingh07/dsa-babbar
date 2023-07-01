#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int power_of_a_raise_to_b(int a,int b){
    if(b==0){
        return 1;
    }
    return a*power_of_a_raise_to_b(a,b-1);
}
int main()
{
    int a;  
    int b;  
    cin>>a>>b;
   cout<<power_of_a_raise_to_b(a,b);
return 0;
}