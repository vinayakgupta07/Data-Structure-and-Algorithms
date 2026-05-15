#Longest Continuous Increasing Subsequence

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int curr = 1;
        int ans = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[i - 1]) {
                curr++;
            }
            else {
                curr = 1;
            }
            ans = max(ans, curr);
        }
        return ans;
    }
};
