#include<iostream>
using namespace std;

// https://leetcode-cn.com/problems/add-two-numbers/

struct ListNode {
	int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode *ptr = head, *p = l1, *q = l2;
        int new_val, carry = 0;
        while(p && q){
            new_val = p->val + q->val + carry;
            carry=0;
            if(new_val >= 10){
                carry = new_val / 10;
                new_val = new_val - carry * 10;
                }
            ListNode* new_node = new ListNode(new_val); 
            ptr->next = new_node; ptr = new_node;
            p = p->next; q = q->next;
        }
        p = p ? p : q;
        while(p){
            if(carry==0){
                ptr->next = p; ptr = p;
            }else{
                new_val = p->val + carry;
                carry=0;
                if(new_val >= 10){
                    carry = new_val / 10;
                    new_val = new_val - carry * 10;
                    }
                ListNode* new_node = new ListNode(new_val);
                ptr->next = new_node; ptr = new_node;
            }
            p = p->next;
        }
        if(carry!=0){
            ListNode* new_node = new ListNode(carry);
            ptr->next = new_node; ptr = new_node;
        }
        return head->next;
    }
};

class Solution1{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr, *tail = nullptr;
        int carry = 0;
        while (l1 || l2) {
            int n1 = l1 ? l1->val: 0;
            int n2 = l2 ? l2->val: 0;
            int sum = n1 + n2 + carry;
            if (!head) {
                head = tail = new ListNode(sum % 10);
            } else {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
            }
            carry = sum / 10;
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        if (carry > 0) {
            tail->next = new ListNode(carry);
        }
        return head;
    }
};

int main(void) {
	class Solution s;
	return 0;
}
