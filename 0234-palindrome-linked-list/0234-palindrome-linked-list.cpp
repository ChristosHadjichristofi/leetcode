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

#include <stack>

class Solution {
public:
        
    bool isPalindrome(ListNode* head) {
        
        stack <int> s;
        ListNode* slow = head;
   
        while (slow) {
            s.push(slow->val);
            slow = slow->next;
        }
 
        while (head) {
            if (head->val != s.top()) {
                return false;
            }
            
            s.pop();
            head = head->next;
        }
 
        return true;
    }
};