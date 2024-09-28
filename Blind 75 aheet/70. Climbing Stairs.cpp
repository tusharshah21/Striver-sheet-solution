// Link: https://leetcode.com/problems/climbing-stairs/description/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1)
            return 1;
        int prev=1,curr=1;
        for(int i=2;i<=n;i++){
            int temp=curr;
            curr=prev+curr;
            prev=temp;
        }
        return curr;
    }
};