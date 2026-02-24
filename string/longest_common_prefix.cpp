# longest common prefix

// ⏱ Time Complexity : O(N log N)
// 💾 Space Complexity💾 :O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int i=0;
        while( i<strs[0].length() && strs[0][i]== strs[strs.size()-1][i]){
         ans+=strs[0][i];
         i++;
        }
        return ans;
    }
};
