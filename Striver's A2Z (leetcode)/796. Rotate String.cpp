// Link: https://leetcode.com/problems/rotate-string/

// Time complexity: O(2n)
// Space complexity: O(1)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        s += s;
        if(s.find(goal)<s.size())return true;
        else return false;
    }
};