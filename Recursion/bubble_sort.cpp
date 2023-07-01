#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bubble_sort(int arr[],int size){
    if(size==0|| size==1){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
   return bubble_sort(arr,size-1);
}
int main()
{
    int arr[6]={1,5,3,6,3,6};
    bubble_sort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}