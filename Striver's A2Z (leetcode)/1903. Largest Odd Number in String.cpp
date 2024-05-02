// Link: https://leetcode.com/problems/largest-odd-number-in-string/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        if(num[n-1]%2!=0)
            return num;
        for (int i = n - 1; i >= 0; --i)
            if (num[i]%2!=0)
                return num.substr(0, i + 1);
        return "";
    }
};