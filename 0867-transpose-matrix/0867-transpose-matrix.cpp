class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        
        // Create a new matrix with dimensions: colSize x rowSize
        vector<vector<int>> ans(colSize, vector<int>(rowSize));
        
        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                // Map the original element to its flipped position
                ans[j][i] = matrix[i][j];
            }
        }
        
        return ans;
    }
};
