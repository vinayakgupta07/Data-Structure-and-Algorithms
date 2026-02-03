Trionic Array I

 // ⏱️Time & Space Complexity
 //      Time: O(n log n) (sorting)
 //      Space: O(n)

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        int count = 0;  

        for (int i = 0; i < n - 1; i++) {

            if (nums[i] == nums[i + 1]) 
                return false; 

            if (nums[i] < nums[i + 1] && count == 0) {
                count = 1;
            }
           
            else if (nums[i] > nums[i + 1] && count == 1) {
                count = 2;
            }
            
            else if (nums[i] < nums[i + 1] && count == 2) {
                count = 3;
            }
            
            else if (
                (nums[i] > nums[i + 1] && count == 0) ||
                (nums[i] < nums[i + 1] && count == 0) ||
                (nums[i] > nums[i + 1] && count == 3)
            ) {
                return false;
            }
        }
        return count == 3;
    }
};
