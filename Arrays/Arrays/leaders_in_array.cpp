#Leaders in Arrays
⏱️ Complexity
   Time: O(n)
   Space: O(n) (output array )

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> arr;
      int n=nums.size();
      int maxi = INT_MIN;
      for(int i=n-1 ; i>=0 ; i--){
        if(nums[i]>maxi){
           arr.push_back(nums[i]);
           
        }
        maxi=max(maxi,nums[i]);
      }
      reverse(arr.begin(),arr.end());
      return arr;
    }
};
