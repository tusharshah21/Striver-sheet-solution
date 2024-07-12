// Link: https://leetcode.com/problems/find-the-highest-altitude/

// Time complexity: O(n)
// Space complexity: O(1)

// Optimal Version

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> alt(n+1,0);
        for(int i=1;i<=n;i++){
            alt[i]=alt[i-1]+gain[i-1];
        }
        int max_ele=*max_element(alt.begin(),alt.end());
        return max_ele;
    }
};