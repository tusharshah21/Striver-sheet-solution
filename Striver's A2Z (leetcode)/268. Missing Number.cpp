// Problem Link: https://leetcode.com/problems/missing-number/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution { public: 
    int missingNumber(vector<int>& nums) {        
        int n = nums.size();         
        int total = ((n+1)*(n))/2;         
        for(int i=0; i<n; i++){             
            total = total - nums[i]; 
        } 
        return total; 
    } 
}; 
