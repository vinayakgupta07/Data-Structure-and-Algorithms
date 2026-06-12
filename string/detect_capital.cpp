#Detect Capital

class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;

        for (char ch : word) {
            if (isupper(ch))
                upper++;
        }

        if (upper == word.size())      // All uppercase
            return true;
        if (upper == 0)                // All lowercase
            return true;
        if (upper == 1 && isupper(word[0])) // Only first letter uppercase
            return true;

        return false;
    }
};
