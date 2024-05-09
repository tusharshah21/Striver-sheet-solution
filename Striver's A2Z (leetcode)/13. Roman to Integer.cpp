// Link: https://leetcode.com/problems/roman-to-integer/

// Time complexity: O(n)
// Space complexity: O(1)


int num(char c){
    if(c=='I') return 1;
    else if(c=='V') return 5;
    else if(c=='X') return 10;
    else if(c=='L') return 50;
    else if(c=='C') return 100;
    else if(c=='D') return 500;
    else return 1000;
}

class Solution {
public:
    int romanToInt(string s) {
        int l=s.length();
        int val=num(s[l-1]);
        for(int i=l-2;i>=0;i--){
            if(num(s[i])<num(s[i+1]))
                val=val-num(s[i]);
            else
                val=val+num(s[i]);
        }
    return val;
    }
};