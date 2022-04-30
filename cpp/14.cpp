#include<iostream>
#include<vector>
#include<string>
using namespace std;

// https://leetcode-cn.com/problems/longest-common-prefix/
// https://leetcode-cn.com/problems/longest-common-prefix/solution/

string lcp(const string& s1, const string& s2){
	int j=0;
	for(int i=0; i<s1.size()&&i<s2.size(); i++)
		if(s1[i]==s2[i]) j++;
		else break;
	return s1.substr(0,j);
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    	if(strs.size()==1) return strs[0];
		string lcp_str = strs[0];
		for(int i=1;i<strs.size();i++){
			lcp_str = lcp(lcp_str, strs[i]);
		}
		return lcp_str;
    }
};

int main(void) {
	class Solution s;
	cout << lcp("flower","flow");
	vector<string> ss = {"flower","flow","flight"};
	cout << s.longestCommonPrefix(ss);
	ss = {"cir","car"};
	cout << s.longestCommonPrefix(ss);
	return 0;
}
