#Concatenate Non-Zero Digits and Multiply by Sum I

class Solution {
public:
    long long sumAndMultiply(int n) {
        string str = to_string(n);

        long long x = 0;
        long long sum = 0;

        for (char ch : str) {
            if (ch != '0') {
                int digit = ch - '0';
                x = x * 10 + digit;   
                sum += digit;
            }
        }

        return x * sum;
    }
};
