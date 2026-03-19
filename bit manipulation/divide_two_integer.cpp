#Divide Two Integers

// ⚡ Complexity:
// Time: O(log n)
// Space: O(1)

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Convert to long long FIRST
        long long dvd = (long long) dividend;
        long long dvs = (long long) divisor;

        // Take absolute safely
        dvd = llabs(dvd);
        dvs = llabs(dvs);

        // Determine sign
        bool negative = (dividend < 0) != (divisor < 0);

        long long result = 0;

        while (dvd >= dvs) {
            long long temp = dvs;
            long long multiple = 1;

            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            result += multiple;
        }

        if (negative) result = -result;

        return (int)result;
    }
};
