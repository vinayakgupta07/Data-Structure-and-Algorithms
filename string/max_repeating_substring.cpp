#Maximum Repeating Substring

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        string temp = "";
        int count = 0;

        while (true) {
            temp += word;

            if (sequence.find(temp) != string::npos)
                count++;
            else
                break;
        }

        return count;
    }
};
