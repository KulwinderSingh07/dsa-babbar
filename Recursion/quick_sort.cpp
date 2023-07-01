#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  int partition(vector<int>& nums,int start,int end){
        int first=start;
        int second=end;
        int pivot=nums[start];
        int position_count=0;
        for(int i=start+1;i<=end;i++){
            if(nums[i]<=pivot){
                position_count++;
            }
        }
        int pivot_index=start+position_count;
        swap(nums[start],nums[pivot_index]);

        while(first<pivot_index && second>pivot_index){
            while(nums[first]<=nums[pivot_index]){
                first++;
            }
            while(nums[second]>nums[pivot_index]){
                second--;
            }
            if(first<pivot_index && second>pivot_index){
                swap(nums[first++],nums[second--]);
            }
        }

        return pivot_index;
    }
    void quick_sort(vector<int> &nums,int start,int end){
        if(start>=end){
            return;
        }
        int pivot_index=partition(nums,start,end);
        quick_sort(nums,start,pivot_index-1);
        quick_sort(nums,pivot_index+1,end);
    }
int main()
{
    vector<int> nums={1,3,32,65,11,4,87,23};
      quick_sort(nums,0,nums.size()-1);
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        // cout<<endl;
return 0;
}