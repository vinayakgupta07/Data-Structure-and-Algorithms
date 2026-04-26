#Find Numbers with Even Number of Digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int digits = 0;
            int temp = nums[i];

            while (temp > 0) {
                temp = temp / 10;  
                digits++;          
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};
