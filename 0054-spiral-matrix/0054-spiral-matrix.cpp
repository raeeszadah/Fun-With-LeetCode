class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> spiral;
        // Edge case check for empty matrix
        if (matrix.empty() || matrix[0].empty()) return spiral;

        int rowStart = 0, colStart = 0, rowEnd = matrix.size() - 1, colEnd = matrix[0].size() - 1;

        while (rowStart <= rowEnd && colStart <= colEnd) {
            // 1. first row ko print kro
            for (int j = colStart; j <= colEnd; j++) {
                spiral.push_back(matrix[rowStart][j]);
            }
            rowStart++;

            // 2. last column ko print
            for (int i = rowStart; i <= rowEnd; i++) {
                spiral.push_back(matrix[i][colEnd]);
            } 
            colEnd--;

            // 3. last row ko reverse oder main print kro
            if (rowStart <= rowEnd) {
                // FIX 1: Change j <= colStart to j >= colStart
                for (int j = colEnd; j >= colStart; j--) {
                    spiral.push_back(matrix[rowEnd][j]);
                }
                // FIX 2: Change rowStart-- to rowEnd--
                rowEnd--;
            }

            // 4. first column hai usko print krdo reverse order main
            if (colStart <= colEnd) {
                for (int i = rowEnd; i >= rowStart; i--) {
                    spiral.push_back(matrix[i][colStart]);
                } 
                colStart++;
            }
        }
        return spiral;
    }
};
