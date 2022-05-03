#include<iostream>
#include<vector>
using namespace std;

// https://leetcode-cn.com/problems/remove-element/
// https://leetcode-cn.com/problems/remove-element/solution/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		if(nums.size()==0) return 0;
		int len = 0;
		for(int i=0; i<nums.size();i++)
			if(nums[i]!=val)
				nums[len++]=nums[i];
		return len;
    }
};

int main(void) {
	class Solution s;
	vector<int> nums = {0,1,2,2,3,0,4,2};
	int len = s.removeElement(nums, 2);
	for(int k=0; k<len;k++) cout<<nums[k] << " ";
	return 0;
}
