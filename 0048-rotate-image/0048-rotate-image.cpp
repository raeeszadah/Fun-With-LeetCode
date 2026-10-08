class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // Transpose

        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        for (int i = 0; i < rowSize - 1; i++) {

            for (int j = i; j < colSize; j++) {

                swap(matrix[i][j], matrix[j][i]);

            }
        }


        // Vertically flip kar do: 180 degree rotate kar do

        int colStart = 0;
        int colEnd = matrix[0].size() - 1;

        while (colStart < colEnd) {

            for (int i = 0; i < rowSize; i++) {

                swap(matrix[i][colStart], matrix[i][colEnd]);

            }

            colStart++;
            colEnd--;
        }
    }
        
    
};