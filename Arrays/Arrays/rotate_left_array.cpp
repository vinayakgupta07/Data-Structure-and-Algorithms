# left rotate an array by d
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
       while(k!=0){
        int move =nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=move;
        k--;
       }
    }
