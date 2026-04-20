#Valid Palindrome II

class Solution {
public:
    bool validPalindrome(string s) {
          int left = 0, right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                int l1 = left + 1, r1 = right;
                while (l1 < r1 && s[l1] == s[r1]) {
                    l1++;
                    r1--;
                }

                int l2 = left, r2 = right - 1;
                while (l2 < r2 && s[l2] == s[r2]) {
                    l2++;
                    r2--;
                }

                return (l1 >= r1) || (l2 >= r2);
            }
            left++;
            right--;
        }
        return true;
    }
};
