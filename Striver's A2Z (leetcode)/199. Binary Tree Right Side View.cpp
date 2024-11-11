// Link: https://leetcode.com/problems/binary-tree-right-side-view/

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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void get(TreeNode* root,vector<int> &ans, int count){
        if(!root)   return;
        if(ans.size()<count)
            ans.push_back(root->val);
        else
            ans[count-1]=root->val;
        get(root->left,ans,count+1);
        get(root->right,ans,count+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        get(root,ans,1);
        return ans;
    }
};