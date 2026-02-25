#Isomorphic String

// ⏱ Time & Space Complexity
// Time: O(n)
// Space: O(1)

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
        return false;
       unordered_map<char,char> ma1;
       unordered_map<char,char> ma2;
        for(int i=0; i<s.length();i++){
               if(ma1.count(s[i]) && ma1[s[i]] != t[i])
                return false;
            
            if(ma2.count(t[i]) && ma2[t[i]] != s[i])
                return false;
            
            ma1[s[i]] = t[i];
            ma2[t[i]] = s[i];
        }
        
        return true;
    }
};
