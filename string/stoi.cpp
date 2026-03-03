# String to Integer (atoi)

// Time Complexity : O(N)
// Space Complexity : O(1)

  class Solution {
public:
    int myAtoi(string s) {
       int n = s.length();
        int i = 0;
        
       
        while (i < n && s[i] == ' ')
            i++;
        
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }
        
       
        long result = 0;
        
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            
            if (sign * result > INT_MAX)
                return INT_MAX;
            if (sign * result < INT_MIN)
                return INT_MIN;
            
            i++;
        }
        
        return sign * result;
    }
};
