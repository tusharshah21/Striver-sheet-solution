// Link: https://leetcode.com/problems/max-consecutive-ones-iii/description/

// Time complexity: O(n)
// Space complexity: O(1)


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxlen=0,zero=0,len=0;
        while(r<nums.size()){
            if(nums[r]==0) zero++;
            if(zero>k){
                if(nums[l]==0) 
                    zero--;
                l++;
            }
            if(zero<=k){
                len=r-l+1;
                maxlen=max(maxlen,len);
            }
            r++;
        }
        return maxlen;
    }
};