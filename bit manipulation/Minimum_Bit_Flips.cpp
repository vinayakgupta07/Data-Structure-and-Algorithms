# Minimum Bit Flips to Convert Number

// ⏱ Complexity
// Time: O(1) (constant for 32-bit integers)
// Space: O(1)

class Solution {
public:
    int minBitFlips(int start, int goal) {
           int x = start ^ goal;
        int count = 0;

        while (x) {
            x = x & (x - 1); 
            count++;
        }
        return count;   
    }
};
