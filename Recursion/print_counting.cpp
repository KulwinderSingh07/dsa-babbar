#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printing_count(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printing_count(n-1);
}
int main()
{
    int n;
    cin>>n;
    printing_count(n);
return 0;
}