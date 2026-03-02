# Maximum Nesting Depth of the Parentheses

// ⏱️time complexity : O(N)
// 💼space complexity : O(1)

class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxdepth = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') {
                count++;
            maxdepth = max(maxdepth,count);
            }
            else if(s[i]==')') count--;
         
        }
        return maxdepth;
    }
};
