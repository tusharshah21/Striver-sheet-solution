// Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/

// Time complexity: O(n)
// Space complexity: O(n)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    int maxPathDown(TreeNode* node, int& maxi) {
        if (node == nullptr)
            return 0;
        int lh = max(0, maxPathDown(node->left, maxi));
        int rh = max(0, maxPathDown(node->right, maxi));
        maxi = max(maxi, lh + rh + node->val);
        return max(lh, rh) + node->val;
    }

public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }
};