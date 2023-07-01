#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merger_array(int *arr,int start,int end){
    int mid=((start+end)/2);
    int leng1=mid-start+1;
    int leng2=end-mid;

    int *arr1=new int[leng1];
    int *arr2=new int[leng2];

    int k=start;
    for(int i=0;i<leng1;i++){
        arr1[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<leng2;i++){
        arr2[i]=arr[k];
        k++;
    }

    int index1=0;
    int index2=0;
    k=start;
    while (index1<leng1 && index2<leng2)
    {
        if(arr1[index1]<=arr2[index2]){
            arr[k++]=arr1[index1++];
        }
        else{
            arr[k++]=arr2[index2++];
        }
    }

    while (index1<leng1)
    {
        arr[k++]=arr1[index1++];
    }
    while (index2<leng2)
    {
        arr[k++]=arr2[index2++];
    }
}
void merger_sort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int mid=((start+end)/2);
    merger_sort(arr,start,mid);
    merger_sort(arr,mid+1,end);
    merger_array(arr,start,end);
}
int main()
{
    int arr[6]={4,6,24,6,2,5};
    merger_sort(arr,0,5);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}