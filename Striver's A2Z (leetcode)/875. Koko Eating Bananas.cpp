// Link: https://leetcode.com/problems/koko-eating-bananas/

// Time complexity: O( n*log(max(v)) )
// Space complexity: O(1)

class Solution {
public:
    int minEatingSpeed(vector<int>& v, int h) {
        int low = 1, high = *max_element(v.begin(), v.end());
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long timeTaken = isPossAns(mid, v);
            if (timeTaken <= h) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }

private:
    long long isPossAns(int m, vector<int>& v) {
        long long ctH = 0;
        for (int i = 0; i < v.size(); i++) {
            ctH += ceil((double)v[i] / (double)m);
        }
        return ctH;
    }
};