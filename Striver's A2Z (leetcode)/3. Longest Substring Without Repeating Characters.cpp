// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

// Time complexity: O(n)
// Space complexity: O(256)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1);
        int n=s.size();
        int l=0,r=0,maxlen=0;
        while(r<n){
            if(mpp[s[r]]!=-1){
                if(mpp[s[r]]>=l)
                    l=mpp[s[r]]+1;
            }
            maxlen=max(r-l+1,maxlen);
            mpp[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};