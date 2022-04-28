#include<iostream>
#include<map>
#include<string>
using namespace std;

// https://leetcode-cn.com/problems/roman-to-integer/
// https://leetcode-cn.com/problems/roman-to-integer/solution/luo-ma-shu-zi-zhuan-zheng-shu-by-leetcod-w55p/

class Solution {
public:
    int romanToInt(string s) {
		map<char, int> m= {{'I', 1},
			{'V', 5},   {'X', 10},  {'L', 50},
			{'C', 100}, {'D', 500}, {'M', 1000}};
		int res = 0;
//		for(int i=0; i<s.size(); i++){			
//			if(s[i] == 'I' && (s[i+1]=='V' || s[i+1]=='X')){
//				res += m[s[i+1]]-1;
//				i++;
//			}else if(s[i] =='X' && (s[i+1]=='L' || s[i+1]=='C')){
//				res += m[s[i+1]]-10;
//				i++;
//			}else if(s[i] =='C' && (s[i+1]=='D' || s[i+1]=='M')){
//				res += m[s[i+1]]-100;
//				i++;
//			}else{
//				res += m[s[i]];
//			}
//		};
		for(int i=0; i<s.size(); i++){			
			if(i<s.size()-1 && m[s[i]] < m[s[i+1]]){
				res -= m[s[i]];
			}else{
				res += m[s[i]];
			}
		};
		cout << res << endl;
		return res;
    }
};


int main(void){
	class Solution s;
	s.romanToInt("III");  // 3
	s.romanToInt("IV");  // 4
	s.romanToInt("MCMXCIV");  // 1994
	return 0;
}
