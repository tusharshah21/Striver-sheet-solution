// Link: https://leetcode.com/problems/next-permutation/

// Optimal Approach : Next Permutation
// Time Complexity: O(3N)
// Space Complexity: O(1)

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int ind = -1;
        int n = arr.size();
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                ind = i;
                break;
            }
        }
        if (ind == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        for (int i = n - 1; i > 0; i--) {
            if (arr[i] > arr[ind]) {
                swap(arr[i], arr[ind]);
                break;
            }
        }
        reverse(arr.begin() + ind + 1, arr.end());
    }
};