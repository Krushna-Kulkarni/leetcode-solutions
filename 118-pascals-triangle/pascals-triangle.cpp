class Solution {
public:
    vector<int> generateRow(vector<int> prevRow){
        int prevRowSize = prevRow.size();
        vector<int> newRow;
        newRow.push_back(1);
        int i;
        for(i = 1; i < prevRowSize; i++ ){
            newRow.push_back(prevRow[i - 1] + prevRow[i]);
        }
        newRow.push_back(1);
        return newRow;
    }

    vector<vector<int>> generate(int numRows) {
   

        vector<vector<int>> resVector;

        resVector.push_back({1});


        if(numRows == 1) return {resVector[0]};

        
        for(int i = 0 ; i < numRows - 1; i++){
            vector<int> newRow = generateRow(resVector[i]);
            resVector.push_back(newRow);
        }

        return resVector;
    }
};