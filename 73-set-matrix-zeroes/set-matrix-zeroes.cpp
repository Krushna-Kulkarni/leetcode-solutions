class Solution {
public:
    void markRowColZero(int row, int col, vector<vector<int>>& mat, int rows, int cols){
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                    if(i == row || j == col){
                        mat[i][j] = 0; 
                    }
            }
        }

    }

    void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
        vector<vector<int>> matrixCpy = matrix;

        // iterating over the cpy matrix and if cell is 0, making all cells in its row and col - 0 in og matrix.

        for(int i = 0; i < rows; i++){
            for(int j = 0 ; j < cols; j++){
                if(matrixCpy[i][j] == 0){
                    markRowColZero(i, j, matrix, rows, cols);
                }
            }
        }
    }
};
