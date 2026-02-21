#Remove Outermost Parentheses

// ⏱ Time & Space Complexity
// Time → O(n)
// Space → O(n)

class Solution {
public:
    string removeOuterParentheses(string s) {
        int counter=0;
        string ans ="";
        for(int i=0; i<s.size();i++){
        if(s[i] == ')') counter--;
        if(counter != 0) ans+=s[i];
        if(s[i] == '(') counter++;
        }
        return ans;
    }
};
