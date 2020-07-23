// https://leetcode.com/explore/learn/card/recursion-i/250/principle-of-recursion/1681/

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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr)    return head;
        if(head->next == nullptr)   return head;
        
        int temp = head->val;
        head->val = head->next->val;
        head->next->val = temp;
        
        head->next->next = swapPairs(head->next->next);
        return head;
    }
};
