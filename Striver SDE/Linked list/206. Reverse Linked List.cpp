// Link: https://leetcode.com/problems/reverse-linked-list/
// Optimal approach: Iterative
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newHead=NULL;
        while(head!=NULL){
            ListNode* next=head->next;
            head->next=newHead;
            newHead=head;
            head=next;
        }
        return newHead;
    }
};