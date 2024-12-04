// Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/

// Time complexity: O(nlogn)
// Space complexity: O(1)

class Solution {
    int count = 0;
    int ans;
    void inorder(TreeNode* root, int k){
        if(!root)return;
        inorder(root->left,k);
        if(++count==k){
            ans = root->val;
            return;
        }
        inorder(root->right,k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }
};