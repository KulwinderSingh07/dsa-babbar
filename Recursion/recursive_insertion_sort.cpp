#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort_recursive(int *arr,int n){
    if(n<=1){
        return;
    }
    sort_recursive(arr,n-1);
    int j=n-2;
    int last=arr[n-1];
    while (j>=0 && arr[j]>last)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
int main()
{
    int arr[6]={5,2,9,7,14,8};
    sort_recursive(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}