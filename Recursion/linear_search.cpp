// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool finding_index(int arr[],int target,int size){
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==target){
//         return true;
//     }
//     else{

//     return finding_index(arr+1,target,size-1);
//     }
// }
// int main()
// {
//     int arr[5]={1,4,2,5,3};
//     int target=4;
//     int size=5;
//     cout<<finding_index(arr,target,size);
// return 0;
// }
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool binary_search(int arr[],int target,int size){
    if(size==0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }
    else{
        return binary_search(arr+1,target,size-1);
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[10]={1,34,23,5,34,67,31,6,32,4};
    cout<<binary_search(arr,n,10);

return 0;
}