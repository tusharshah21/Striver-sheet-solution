// Link: https://leetcode.com/problems/middle-of-the-linked-list/
// Optimal approach: two pointer approach
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};