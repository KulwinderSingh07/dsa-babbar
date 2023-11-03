#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    int freq=0;
    int flag=0;
};
int main(){
    int n;
    cout<<"Enter the no of values:";
    cin>>n;
    Node arr[n];
    for(int i=0;i<n;i++){
        cout<<"Input "<<i+1<<" value in array:";
        int val;
        cin>>val;
        arr[i].data=val;
    }
    for(int i=0;i<n;i++){
        if(arr[i].flag!=0) continue;
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i].data==arr[j].data){
                arr[j].flag=-1;
                count++;
            }
        }
        arr[i].freq=count;
    }
    for(int i=0;i<n;i++){
        if(arr[i].freq>0)
        cout<<"Frequency of "<<arr[i].data<<" = "<<arr[i].freq<<endl;
    }
    return 0;
}