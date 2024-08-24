class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Initialize maps to keep track of rows and columns that need to be zeroed
        vector<bool> map1(rows, false); // This will track rows
        vector<bool> map2(cols, false); // This will track columns

        // First pass: Mark the rows and columns that need to be zeroed
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == 0){
                    map1[i] = true;  // Mark this row
                    map2[j] = true;  // Mark this column
                }
            }
        }

        // Second pass: Set the rows and columns to zero
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(map1[i] || map2[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
