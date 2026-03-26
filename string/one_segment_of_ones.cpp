# Check if Binary String Has at Most One Segment of Ones

class Solution {
public:
    bool checkOnesSegment(string s) {
   
        int n = s.size();
        bool foundZero = false;

        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                foundZero = true;
            }
            else if(foundZero && s[i] == '1') {
                return false; 
            }
        }

        return true;
    }
};
