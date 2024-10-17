// Link: https://leetcode.com/problems/palindrome-number/

// Time complexity: O(log x)
// Space complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        string str=to_string(x);
        string reversed=str;
        reverse(reversed.begin(),reversed.end());
        return str==reversed;
    }
};