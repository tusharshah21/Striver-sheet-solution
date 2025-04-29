// Link: https://leetcode.com/problems/number-of-1-bits/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        for (int i = 0; i < 32; i++) {
            if ((n >> i) & 1) {
                res += 1;
            }
        }
        return res;        
    }
};