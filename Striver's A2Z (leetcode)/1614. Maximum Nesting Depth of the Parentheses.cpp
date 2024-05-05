// Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int opened = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(')
                ans = max(ans, ++opened);
            else if (s[i] == ')')
                --opened;
        }
        return ans;
    }
};