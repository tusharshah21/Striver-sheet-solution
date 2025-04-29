// Link: https://leetcode.com/problems/sum-of-two-integers/

// Time complexity: O(b)
// Space complexity: O(1)

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int tmp = (a & b) << 1;
            a = a ^ b;
            b = tmp;
        }
        return a;
    }
};