#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

// https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {    // 可读性好一点 
        unordered_set<char> hash_set;
        int low=0, high=0 , ans=0;
        while(high<s.size()){
            if(!hash_set.count(s[high])){       // 不在集合
                hash_set.insert(s[high]);       // 插入
                ans = max(ans, high-low+1);     // 计算长度
            }else{                              // 在集合
                while(hash_set.count(s[high]))  // 删到不重复为止
                    hash_set.erase(s[low++]);   // low每次左移一次，删一个
                hash_set.insert(s[high]);       // 删干净了，子串无重复，再插入
            }
            high++;
        }
        return ans;
    }
};

class Solution1 {
public:
    int lengthOfLongestSubstring(string s) {    // 可读性差一点 
        unordered_set<char> hash_set;
        int low=0, high=0 , ans=0;
        while(high<s.size()){
            if(hash_set.count(s[high]))         // 如果重复 
                while(hash_set.count(s[high]))  // 删到不重复为止
                    hash_set.erase(s[low++]);   // low每次左移一次，删一个
            hash_set.insert(s[high]);           // 要么新插入，要么删之后插入 
            ans = max(ans, high-low+1);         // 计算长度
            high++;
        }
        return ans;
    }
};

int main(void) {
	class Solution s;
	int ans = 0;
	string str = "abcabcbb";  // abc 3
	ans = s.lengthOfLongestSubstring(str);
	cout << ans;
	return 0;
}
