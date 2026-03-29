#Matrix Similarity After Cyclic Shifts
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> ans(n, vector<int>(m));

        k = k % m;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(i % 2 == 0) {
                    
                    ans[i][(j + k) % m] = mat[i][j];
                } else {
                    
                    ans[i][(j - k + m) % m] = mat[i][j];
                }
            }
        }

        return mat == ans;
    }
};
