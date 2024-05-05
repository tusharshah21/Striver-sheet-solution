// Link: https://leetcode.com/problems/sort-characters-by-frequency/

// Time complexity: O(n)
// Space complexity: O(n)


class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        int low = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        for (auto x : mp) {
            while (x.second--) {
                s[low++] = x.first;
            }
        }
        return s;
    }
};