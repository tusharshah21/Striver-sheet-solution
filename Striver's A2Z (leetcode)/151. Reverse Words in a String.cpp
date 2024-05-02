// Link: https://leetcode.com/problems/reverse-words-in-a-string/

// Time complexity: O(n^2)
// Space complexity: O(n)

class Solution {
public:
    string reverseWords(string str) {
        string res;
        int i = 0;
        int n = str.length();
        while (i < n) {
            while (i < n && str[i] == ' ')
                i++;
            if (i >= n)
                break;
            int j = i + 1;
            while (j < n && str[j] != ' ')
                j++;
            string sub = str.substr(i, j - i);
            if (res.length() == 0)
                res = sub;
            else
                res = sub + " " + res;
            i = j + 1;
        }
        return res;
    }
};