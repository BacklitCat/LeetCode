#include<iostream>
#include<stack>
#include<string>
using namespace std;

// https://leetcode-cn.com/problems/valid-parentheses/
// https://leetcode-cn.com/problems/valid-parentheses/solution/

class Solution {
public:
    bool isValid(string s) {
    	// (-40, )-41, {-123, }-125, (-91, )-93
    	if(s.size()%2!=0) return false;
    	stack<char> char_stack;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='(' || s[i]=='['|| s[i]=='{') char_stack.push(s[i]);
			else if(char_stack.size()==0) return false;
			else if(char_stack.top()==s[i]-1 || char_stack.top()==s[i]-2) char_stack.pop();
			else return false;
			}
		if (char_stack.size()==0) return true;
		else return false;
		}
};

int main(void) {
	class Solution s;
	cout << s.isValid("{([])}") << endl;
	cout << s.isValid("})") << endl;
	cout << s.isValid("((") << endl;
	return 0;
}
