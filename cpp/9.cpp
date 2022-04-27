#include <iostream>
using namespace std;

// https://leetcode-cn.com/problems/palindrome-number/
// https://leetcode-cn.com/problems/palindrome-number/solution/hui-wen-shu-by-leetcode-solution/

class Solution {
public:
    bool isPalindrome(int x) {
    	int ori = x, rvt=0, i=0;
    	if(0<=ori && ori<=9) return true;
		if(ori<0 || ori%10==0) return false;
		while(ori > rvt){
			rvt *= 10;
			rvt += ori % 10;
			ori /= 10;
//			cout << ori << ' ' << rvt << endl;
		}
		if(ori==rvt || ori==rvt/10) return true;
		else return false;
    }
};

int main(void){
	class Solution s;
	cout << s.isPalindrome(-121) << endl;
	cout << s.isPalindrome(121) << endl;
	cout << s.isPalindrome(123321) << endl;
	cout << s.isPalindrome(1234321) << endl;
	cout << s.isPalindrome(10) << endl;
	cout << s.isPalindrome(0) << endl;
	cout << s.isPalindrome(123) << endl;
	return 0;
}
