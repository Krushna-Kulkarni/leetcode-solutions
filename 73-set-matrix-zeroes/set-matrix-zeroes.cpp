class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
// Initialize vectors with a size and default value 0
    vector<int> rowMarkings(rows, 0);
    vector<int> colMarkings(cols, 0);


      
// iterating over matrix and marking the row and col as 1 which consists a cell with value 0
        for(int i = 0;  i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == 0){
                    rowMarkings[i] = 1;
                    colMarkings[j] = 1;
                }
            }
        }


        // again iterating over the matrix and marking the cells as 0, for which the row or col is marked as 0;
        for(int i = 0 ; i < rows; i++){
            for(int j = 0; j < cols; j++ ){
                if(rowMarkings[i] == 1 || colMarkings[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};