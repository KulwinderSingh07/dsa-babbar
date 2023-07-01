#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int> nums={12,9};
  nums[1]=nums[1]*2;
  cout<<(nums[0]|nums[1]);
return 0;
}