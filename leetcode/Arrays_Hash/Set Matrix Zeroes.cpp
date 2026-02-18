class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        bool row_flag = false;
        bool col_flag = false;

        for (int row = 0; row < rows; row++){
            for (int col = 0; col < cols; col++){
                if (matrix[row][col] == 0){
                    if (row == 0) row_flag = true;
                    if (col == 0) col_flag = true;
                    else if (row != 0 && col != 0){
                        matrix[row][0] = 0;
                        matrix[0][col] = 0;
                    }
                }
            }
        }

        for (int row = 1; row < rows; row++){
            for (int col = 1; col < cols; col ++){
                if (matrix[row][0] == 0 || matrix[0][col] == 0){
                    matrix[row][col] = 0;
                }
            }
        }

        if (row_flag){
            for (int row = 0; row < rows; row ++){
                for (int col = 0; col < cols; col ++){
                    matrix[0][col] = 0;
                }
            }
        }
        if (col_flag){
            for (int row = 0; row < rows; row ++){
                matrix[row][0] = 0;
            }
        }

    }
};