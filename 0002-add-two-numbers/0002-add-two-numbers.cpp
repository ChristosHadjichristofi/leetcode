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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // hold the sum of two nodes, but the carry also
        int sum = 0;
        // create a new list for the result with the first node's val eq to 0
        ListNode* current = new ListNode(0);
        // create a pointer to the current list
        ListNode* result = current;
        
        // while either of the two linked lists hasn't reach the end
        while (l1 || l2) {
            // add to sum the l1->val if l1 isn't nullptr
            sum = l1 ? sum + l1->val : sum;
            // add to sum the l2->val if l2 isn't nullptr
            sum = l2 ? sum + l2->val : sum;
            
            // add the result of the summation to the next node of the current
            // value is the sum modulo 10
            current->next = new ListNode(sum % 10);
            // move to the next node of the current
            current = current->next;
            
            // in case sum is greater than 9 then carry 1 else 0
            sum = sum > 9 ? 1 : 0;
            // move linked lists to the next node
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        
        // if sum is greater than 0 then add the final node to the current list
        if (sum > 0) current->next = new ListNode(sum);
        // return result->next because result is a pointer to the first element of the current
        // which is 0
        return result->next;
    }
};