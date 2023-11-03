#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &arr,int size,int i){
    int left_index=2*i+1;
    int right_index=2*i+2;
    int smallest=i;

    if(left_index<size && arr[left_index]>arr[i]){
        smallest=left_index;
    }
    if(right_index<size && arr[right_index]>arr[i]){
        smallest=right_index;
    }

    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        heapify(arr,size,smallest);
    }
}
void heapsort(vector<int> &arr){
    int size=arr.size()-1;
    int i=0;
    while(i<=size){
        swap(arr[i],arr[size]);
        size--;
        heapify(arr,size,i);
    }
}
int main(){

    vector<int> arr={70,60,55,45,50};
    heapsort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}