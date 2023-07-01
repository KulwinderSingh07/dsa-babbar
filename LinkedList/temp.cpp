#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> nums1={1,3,7,1,7,5};
    vector<int> nums2={1,9,2,5,1};
    int line_count=0;
        int i=0;
        int j=0;
        int k=0;
        int initial_check_index=-1;
        int size_of_num1=nums1.size();
        int size_of_num2=nums2.size();
        while(i<size_of_num1 && j<size_of_num2){
            if(k<5){
            cout<<i<<" "<<j<<endl;
            }
            int prev_count=line_count;
            int prev_j=j;
            for(;j<size_of_num2;j++){
                if(nums1[i]==nums2[j]){
                    line_count++;
                    j++;
                    break;
                }
                i++;
                k++;
                if(prev_count==line_count){
                    j=prev_j;
                }
            }
        }
        cout<< line_count;
return 0;
}