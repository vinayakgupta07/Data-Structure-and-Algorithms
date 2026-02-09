#Find the Smallest Divisor Given a Threshold

// ⏱️ Complexity
// Time: O(n log max(nums))
// Space: O(1)

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = 0;

        // Manually find maximum element
        for (int x : nums) {
            if (x > high)
                high = x;
        }

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long sum = 0;

            for (int x : nums) {
                sum += (x + mid - 1) / mid; // ceil division
            }

            if (sum <= threshold) {
                ans = mid;      // valid divisor
                high = mid - 1; // try smaller divisor
            } else {
                low = mid + 1;  // need bigger divisor
            }
        }
        return ans;
    }
};
