#include <iostream>
#include <vector>
#include <map>
using namespace std;

// https://leetcode-cn.com/problems/two-sum/
// https://leetcode-cn.com/problems/two-sum/solution/liang-shu-zhi-he-by-leetcode-solution/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res(2);
		map<int,int> num_loc;
		map<int,int>::iterator find_key;
		int rest;
		for(int i=0;i<nums.size();i++){
			rest = target - nums[i];
			find_key = num_loc.find(rest);
			if (find_key!=num_loc.end()){
				res[0] = find_key -> second; res[1] = i;
//				cout << res[0] << ' ' << res[1];
				return res;
			}else{
				num_loc[nums[i]] = i;
			}
		}
		return res;
		
    }
};

int main(void){
	class Solution s;
	vector<int> nums1={2,7,11,15};
	s.twoSum(nums1,9);
	return 0;
}


