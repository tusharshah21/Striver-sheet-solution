// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// Optimal approach: One pass (recursion)
// Approach: We can keep track of the minimum price seen so far and calculate the profit at each step.
// Time Complexity: O(N)
// Space Complexity: O(1)
class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mini=v[0];
        int profit=0;
        for(int i=1;i<v.size();i++){
            int cost=v[i]-mini;
            profit=max(cost,profit);
            mini=min(v[i],mini);
        }
        return profit;
    }
};