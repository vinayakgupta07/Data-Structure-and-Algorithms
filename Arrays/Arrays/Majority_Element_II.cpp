#Majority Element II(n>3)

// ⏱ Complexity
//     Time: O(n)
//     Space: O(1)
  
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1=0;
        int temp1=INT_MIN;
        int count2=0;
        int temp2=INT_MIN;
        for(int i=0;i<n;i++){
            if(count1==0 && nums[i]!=temp2){
                count1=1;
                temp1=nums[i];
            }
            else if(count2==0 && nums[i]!=temp1){
                temp2=nums[i];
                count2=1;
            }
            else if(nums[i]==temp1){
                count1++;
            }
             else if(nums[i]==temp2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
            count1 = 0;
        count2 = 0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i] == temp1) count1++;
            else if (nums[i] == temp2) count2++;
        }

        vector<int> ans;
        if (count1 > n / 3) ans.push_back(temp1);
        if (count2 > n / 3) ans.push_back(temp2);

        return ans;
    }
};
