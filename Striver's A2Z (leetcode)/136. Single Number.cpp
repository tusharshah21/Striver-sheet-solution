// Link= https://leetcode.com/problems/single-number/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        return xorr;
    }
};
