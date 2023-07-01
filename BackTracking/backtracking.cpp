#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printArray(int *arr,int n){
     for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
}
void fillArray(int *arr,int i,int n,int val){
    if(i==n){
       printArray(arr,n);
        return;
    }
    arr[i]=val;
    fillArray(arr,i+1,n,val+1);
    arr[i]=-1*arr[i];
}
int main()
{
    int n;
    cin>>n;
    int arr[100]={0};
    fillArray(arr,0,n,1);
    printArray(arr,n);

return 0;
}