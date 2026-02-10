# PERMUTATION 

class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(int index, vector<int>& nums) {
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            backtrack(index + 1, nums);
            swap(nums[index], nums[i]); // backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(0, nums);
        return ans;
    }
};
