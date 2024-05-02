// Link: https://leetcode.com/problems/longest-common-prefix/

// Time complexity: O(n*m)
// Space complexity: O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int n = arr.size();
        string ans = arr[0];
        for (int i = 1; i < n; i++) {
            string ch = arr[i];
            int j;
            for (j = 0; j < ans.size() && j < ch.size(); j++) {
                if (ans[j] != ch[j]) {
                    ans = ans.substr(0, j);
                    break;
                }
            }
            ans = ans.substr(0, j);
        }
        if (ans.size() == 0)
            return "";
        return ans;
    }
};