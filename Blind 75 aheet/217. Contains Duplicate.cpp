// Link: https://leetcode.com/problems/contains-duplicate/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp[nums[i]]>=1)
                return true;
            mpp[nums[i]]++;
        }
        return false;
    }
};