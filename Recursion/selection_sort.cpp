#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selection_sort(int *arr,int target,int n){
    if(target==n){
        return ;
    }
    for(int j=target+1;j<n;j++){
        if(arr[j]<arr[target]){
        swap(arr[j],arr[target]);
        }
    }
    selection_sort(arr,target+1,n);

}
int main()
{
    int arr[5]={64,25,12,22,11};
    selection_sort(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}