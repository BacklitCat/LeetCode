#include<iostream>
#include<vector>
using namespace std;

// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/
// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/solution/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	if(nums.size()==0) return 0;
    	int len=1;
		for(int j=1;j<nums.size();j++)
			if(nums[len-1]!=nums[j])
				nums[++len-1]=nums[j];
//		for(int k=0; k<len;k++) cout<<nums[k] << " ";
		return len;
    }
};

int main(void) {
	class Solution s;
	vector<int> nums = {1,1,2,2,4};
	s.removeDuplicates(nums);
	return 0;
}
