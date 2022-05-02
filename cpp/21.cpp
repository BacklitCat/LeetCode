#include<iostream>
#include<vector>
#include<string>
using namespace std;

// https://leetcode-cn.com/problems/merge-two-sorted-lists/
// https://leetcode-cn.com/problems/merge-two-sorted-lists/solution/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode head;
        ListNode *ptr1=list1, *ptr2=list2 , *p=&head;
        while(ptr1!=nullptr && ptr2!=nullptr){
        	if(ptr1->val < ptr2->val){
                p->next = ptr1;
                ptr1 = ptr1->next;
            } 
			else{
                p->next = ptr2;
                ptr2 = ptr2->next;
            }
            p=p->next;
		}
        p->next = ptr1!=nullptr ? ptr1 : ptr2;
        return head.next;
    }
};

int main(void) {
	class Solution s;
	return 0;
}
