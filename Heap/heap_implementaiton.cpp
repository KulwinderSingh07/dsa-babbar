#include<iostream>
using namespace std;
#include<vector>
class Heap{
    vector<int> arr;
    int size;
    public:
    Heap(){
        arr.push_back(-1);
        size=0;
    }
    void insert_inHeap(int val){
        size+=1;
        int index=size;
        arr.push_back(val);
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }

    void deleteFromHeap(){
        if(size==0)
        return;

        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int left_index=2*i;
            int right_index=2*i+1;
            if(left_index<size && arr[left_index]>arr[i])
            {
                swap(arr[i],arr[left_index]);
                i=left_index;
            }
            else if(right_index<size && arr[right_index]>arr[i])
            {
                swap(arr[i],arr[right_index]);
                i=right_index;
            }
            else{
                return;
            }
        }
    }
};

void heapify(int arr[],int n,int i){
    int left_index=2*i;
    int right_index=2*i+1;

    int largest=i;
    
    if(left_index<n && arr[left_index]>arr[i])
    largest=left_index;
    if(right_index<n && arr[right_index]>arr[i])
    largest=right_index;

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int main(){

    Heap hp;
    hp.insert_inHeap(50);
    hp.insert_inHeap(55);
    hp.insert_inHeap(53);
    hp.insert_inHeap(52);
    hp.insert_inHeap(54);
    hp.print();
    cout<<endl;
    hp.deleteFromHeap();
    hp.print();
    cout<<endl;
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }

    
        return 0;
}