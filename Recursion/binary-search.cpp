// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool binary__search(int arr[],int start,int end,int target){
//     if(start<=end){
//             int mid=(start+end/2);
//     if(arr[mid]==target){
//         return true;
//     }
//     else if(arr[mid]>target){
//        return binary__search(arr,start,mid,target);
//     }
//     else{
//        return binary__search(arr,mid,end,target);
//     }
//     }else{
//         return false;
//     }
// }
// int main()
// {
//     int arr[6]={-1,0,3,5,9,12};
//     int target=9;
//     bool ans=binary__search(arr,0,5,target);
//     cout<<ans;
// return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary_search(int arr[],int start,int end,int target){
    if(start>end){
        return -1;
    }
    int mid=start+((end-start)/2);
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        return binary_search(arr,start,mid-1,target);
    }
    else{
        return binary_search(arr,mid+1,end,target);
    }
}
int main()
{
    int arr[10]={1,3,4,5,8,10,12,45,60,90};
    int target;
    cin>>target;
   cout<< "Target is present at index:"<<binary_search(arr,0,10,target);
return 0;
}
