#Minimum Changes To Make Alternating Binary String

class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int count1 = 0, count2 = 0;

        for(int i = 0; i < n; i++){
            
            // Pattern 1: "010101..."
            if(i % 2 == 0){
                if(s[i] != '0'){
                    count1++;
                }
            } else {
                if(s[i] != '1'){
                    count1++;
                }
            }

            // Pattern 2: "101010..."
            if(i % 2 == 0){
                if(s[i] != '1'){
                    count2++;
                }
            } else {
                if(s[i] != '0'){
                    count2++;
                }
            }
        }

        return min(count1, count2);
    }
};
