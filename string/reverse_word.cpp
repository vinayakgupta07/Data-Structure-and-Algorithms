#reverse word in a string

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    string reverseWords(string s){
        string result="";
        int n= s.size();
        reverse(s.begin(),s.end());
        for(int i=0; i<s.size();i++){
            string ans="";
            while(i<n && s[i]!=' '){
                ans+=s[i];
                i++;
            }
                reverse(ans.begin(),ans.end());
                if(ans.length()>0){
                result+=" " + ans;
                }
        }
        return result.substr(1);
    }
};
