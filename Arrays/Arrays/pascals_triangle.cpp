# Pascal's Triangle

// ⏱️ Complexity
//    Time: O(numRows²)
//    Space: O(numRows²)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int row = 0; row < numRows; row++) {
            vector<int> ansrow;
            long long val = 1;
            ansrow.push_back(1);

            for (int col = 1; col <= row; col++) {
                val = val * (row - col + 1) / col;
                ansrow.push_back(val);
            }

            triangle.push_back(ansrow);
        }
        return triangle;
    }
};
