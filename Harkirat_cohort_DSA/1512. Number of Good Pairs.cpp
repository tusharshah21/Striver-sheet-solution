// Link: https://leetcode.com/problems/number-of-good-pairs/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int freq[101]={0};
        for(int i=0;i<n;i++){
            ans+=freq[nums[i]];
            freq[nums[i]]+=1;
            cout<<ans<<endl;
        }
        return ans;
    }
};