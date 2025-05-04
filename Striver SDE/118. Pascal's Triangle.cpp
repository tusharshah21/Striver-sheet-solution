
// Link: https://leetcode.com/problems/pascals-triangle/
// Optimal Approach : Combinatorial Number
// Time Complexity: O(N^2)
// Space Complexity: O(1)

class Solution {
    vector<int> generateAns(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for (int i = 1; i < row; i++) {
            ans = ans * (row - i);
            ans = ans / i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for (int i = 1; i <= numRows; i++) {
            res.push_back(generateAns(i));
        }
        return res;
    }
};