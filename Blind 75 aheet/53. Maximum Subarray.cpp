// Link: https://leetcode.com/problems/maximum-subarray/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        maxi=max(sum,maxi);
        if(sum<0) sum=0;
    }
    return maxi;
    }
};