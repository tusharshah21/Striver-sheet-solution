// Link : https://leetcode.com/problems/symmetric-tree/

// Time complexity: O(n)
// Space complexity: O(1)

 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool symm(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL)
            return true;
        if(p==NULL || q==NULL)
            return false;
        if(p->val!=q->val)
            return false;
        return symm(p->left,q->right) && symm(p->right,q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)  return true;
        return symm(root->left,root->right);
    }
};