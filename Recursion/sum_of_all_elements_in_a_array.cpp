#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    return arr[0]+find_sum(arr+1,size-1);
}
int main()
{
    int arr[5]={2,5,2,5,6};
   cout<< find_sum(arr,5);
return 0;
}