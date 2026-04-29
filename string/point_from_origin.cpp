#Furthest Point From Origin

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
                int left = 0, right = 0, blank = 0;

        for(int i = 0; i < moves.length(); i++) {
            if(moves[i] == 'L') {
                left++;
            }
            else if(moves[i] == 'R') {
                right++;
            }
            else {
                blank++;   
            }
        }

        return abs(right - left) + blank;
    }
};
