// Link: https://leetcode.com/problems/isomorphic-strings/

// Time complexity: O(n)
// Space complexity: O(1)   


class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        if (n != m)
            return false;
        map<char, char> mp1;
        map<char, char> mp2;
        for (int i = 0; i < n; i++) {
            if (mp1.find(str1[i]) == mp1.end()) {
                mp1[str1[i]] = str2[i];
            } else {
                if (mp1[str1[i]] != str2[i])
                    return false;
            }
            if (mp2.find(str2[i]) == mp2.end()) {
                mp2[str2[i]] = str1[i];
            } else {
                if (mp2[str2[i]] != str1[i])
                    return false;
            }
        }
        return true;
    }
};