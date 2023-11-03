#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[10]={1,2,3,10,9,9,2,2,3,4};
    int max=INT_MIN;
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int freq[max+1]={0};
    for(int i=0;i<10;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<=max;i++){
        if(freq[i]>0)
        cout<<"Frequency of "<<i<<" is:"<<freq[i]<<endl;
    }

    return 0;
}