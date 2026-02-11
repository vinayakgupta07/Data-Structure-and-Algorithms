#First bad version

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        
        while (left < right) {
            int mid = left + (right - left) / 2;  // prevent overflow
            
            if (isBadVersion(mid)) {
                right = mid;   // mid might be the answer
            } else {
                left = mid + 1;  // search in right half
            }
        }
        
        return left;  // or return right (both are same here)
    }
};
