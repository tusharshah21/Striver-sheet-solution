// https://leetcode.com/problems/longest-repeating-character-replacement/

// Time complexity: O(n)
// Space complexity: O(26)

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int l = 0, r = 0;
        vector<int> freq(26, 0);  
        int maxFreq = 0;
        int maxLen = 0;
        while(r < n) {
            freq[s[r] - 'A']++;  
            maxFreq = max(maxFreq, freq[s[r] - 'A']);  
            if(( (r-l+1) - maxFreq ) > k){
                freq[s[l] - 'A']--;
                maxFreq = 0;
                for(int i=0; i<26; i++){
                    maxFreq = max(maxFreq, freq[i]);
                }
                l++;
            }
            if( (r-l+1) - maxFreq  <=  k){
                maxLen = max(maxLen, r-l+1);
            }
            r++;
        }
        return maxLen;
    }
};