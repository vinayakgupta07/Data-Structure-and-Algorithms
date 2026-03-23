#Complement of Base 10 Integer

class Solution {
public:
    int bitwiseComplement(int n) {
           if (n == 0) return 1;

        int result = 0;
        int power = 1;

        while (n > 0) {
            int bit = n % 2;

            
            if (bit == 0) {
                result += power;
            }

            power *= 2;
            n /= 2;
        }

        return result;
    }
};
