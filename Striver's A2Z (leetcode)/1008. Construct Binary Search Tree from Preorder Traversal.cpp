// Link: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal

// Time complexity: O(n)
// Space complexity: O(1)

/**
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
    TreeNode* buildtree(vector<int> &preorder, int &preidx, int boundary ){
        if(preidx>=preorder.size() || preorder[preidx]>=boundary)    return NULL;
        TreeNode* root=new TreeNode(preorder[preidx]);
        preidx++;
        root->left=buildtree(preorder,preidx,root->val);
        root->right=buildtree(preorder,preidx,boundary);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int preidx=0;
        return buildtree(preorder,preidx,1001);
    }
};