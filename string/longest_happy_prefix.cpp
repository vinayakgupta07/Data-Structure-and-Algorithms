# Longest Happy Prefix
// Time Complexity
// O(n)
// Space Complexity
// O(n)
class Solution {
public:
    string longestPrefix(string s) {
        int n = s.length();
        vector<int> ans(n, 0);

        int len = 0;
        int i = 1;

        while(i < n){
            if(s[i] == s[len]){
                len++;
                ans[i] = len;
                i++;
            }
            else{
                if(len != 0){
                    len = ans[len - 1];
                }
                else{
                    ans[i] = 0;
                    i++;
                }
            }
        }

        int length = ans[n - 1];
        return s.substr(0, length);
    }
};
