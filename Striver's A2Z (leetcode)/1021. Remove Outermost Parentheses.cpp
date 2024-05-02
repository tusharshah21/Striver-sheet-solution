// Link: https://leetcode.com/problems/remove-outermost-parentheses/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    string removeOuterParentheses(string s) {
    string res; 
    int count = 0; 
    for (char c : s) { 
        if (c == '(' && count++ > 0) 
            res += c; 
        if (c == ')' && count-- > 1) 
            res += c;
    } 
    return res;
    }
};