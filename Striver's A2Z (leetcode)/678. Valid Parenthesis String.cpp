

class Solution {
public:
    bool checkValidString(string s) {
        int leftPar = 0;
        int star = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                leftPar++;
            } else if(s[i] == ')') {
                if(leftPar > 0) {
                    leftPar--;
                } else if(star > 0) {
                    star--;
                } else { // cannot find a '('
                    return false;
                }
            } else {
                star++;
            }
        }

        int rightPar = 0; star = 0;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == '(') {
                if(rightPar > 0) {
                    rightPar--;
                } else if(star > 0) {
                    star--;
                } else { // cannot find a ')'
                    return false;
                }
            } else if(s[i] == ')') {
                rightPar++;
            } else {
                star++;
            }
        }
        return true;
    }
};