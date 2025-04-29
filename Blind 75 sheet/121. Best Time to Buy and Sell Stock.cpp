// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mini=v[0],profit=0;
        for(int i=0;i<v.size();i++){
            int cost=v[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,v[i]);
        }
        return profit;
    }
};