// Link: https://leetcode.com/problems/delete-node-in-a-linked-list/
// Optimal approach: Directly copy the value of the next node and adjust pointers
// Time Complexity: O(1)
// Space Complexity: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};